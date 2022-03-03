
/*          ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        AMMI JAAN KEHTI THI
        ▀▄▀▄▀▄████▄█▄█▄█▄█████       KOI CODE CHHOTA NAHI HOTA OR...
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██
                ▀▀    ▀▀ ▄▄██▀       @author : Dhruv_Vavliya           */

//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  li long int
#define  lli long long int
#define  ulli unsigned lli
#define  ld long double

//Data Structures
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define pb   push_back
#define bs   binary_search
#define lb   lower_bound
#define ub   upper_bound

//F for Functions
#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli      logd(lli x ,lli y){ return ceil( (ld)log(x)/(ld)log(y) ); }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  disp1(v) for(int i=1 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;

/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/

//Pre-defined
#define  fix fixed<<setprecision(15)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;



void solve(){
    int n;
    cin >> n;

    vi a(n+1);
    vi gap(n+1 ,0) ,pre(n+1 ,-1);
    vi ans(n+1,INT_MAX);

    for(int i=1 ;i<=n ;i++){
        cin >> a[i];

        if( pre[a[i]] == -1 ) pre[a[i]] = i ,gap[a[i]] = i;
        else gap[a[i]] = max( gap[a[i]] , i - pre[a[i]] ) ,pre[a[i]] = i;
    }
    for(int i=1 ;i<=n ;i++) gap[a[i]] = max( gap[a[i]] , n - pre[a[i]] + 1 );
    
    vector< pair<int,int> >v;
    for(int i=1 ;i<=n ;i++){
        if( gap[i] !=0 ){
            v.pb( { gap[i] ,i } );
        }
    }
    
    sort(all(v));
    int  m = v.size() ,temp = INT_MAX ,j=0;

    for(int i=1 ;i<=n ;i++){

        while( j-1>=0 and v[j].first == v[j-1].first ) j++;

        if( j<m and v[j].first == i ){
            temp = min( temp , v[j].second );
            j++;
        }
        if( temp == INT_MAX ) ans[i] = -1;
        else ans[i] = temp;
    }

    disp1(ans);

}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
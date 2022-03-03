
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

#define  fix fixed<<setprecision(15)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;

//Data Structures
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define pb   push_back
#define bs   binary_search
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli      logd(lli x ,lli y){ return ceil( (ld)log(x)/(ld)log(y) ); }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    int n,m;
    cin >> n >> m;
    
    vector<vector<int>> v(m+1);
    vector<pair<int,int>> p;
    vector<int> ans(m+1,-1);

    for(int i=1 ;i<=m ;i++){
        int k;
        cin >> k;

        p.push_back( {k,i} );
        int temp;
        for(int j=1 ;j<=k ;j++) cin >>temp , v[i].push_back(temp);
    }

    sort(all(p));     // sort all sizes    1,2,3,4 - sizes window's index
    map<int,int> mp;

    for(auto x : p){                     // all sizes take one by one 
        int flag=0;                      // take all vectors with same probability

        for( auto val : v[x.second] ){
            if( mp[ val ] < (m+1)/2 ){
                ans[ x.second ] = val;
                mp[ val ]++;
                flag=1;
                break;
            }
        }
        if(!flag){ cout << "NO" << endl; return ;}
    }

    cout << "YES" << endl;
    for(int i=1; i<=m ;i++) cout << ans[i] << ' ';
    cout << endl;


} 




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
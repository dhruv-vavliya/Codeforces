
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
bool     comp(lli x ,lli y)  { return x > y; }
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

   set<pair<int,int>> v;
   vector< pair<int,int> > c(n+1);

    for(int i=1 ;i<=n ;i++){
        int a,b;
        cin >> a >> b;
        if( a>b ) swap(a,b);
        v.insert( {a,b} );    // a < b
        c[i] = {a,b};
    }

    vector<pair<int,int>> a;
    for(int i=1 ;i<=5 ;i++){
        for(int j=i+1 ;j<=5 ;j++){
            if( v.find( {i,j} ) == v.end()  ){
                a.pb( {i,j} );
            }        
        }
    }

    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            for(int k=1 ;k<=n ;k++ ){
                vi temp = { c[i].first ,c[i].second ,c[j].first ,c[j].second ,c[k].first ,c[k].second  };
                sort(all(temp));
                if( temp[0] == temp[1] and temp[2] == temp[3] and temp[4] == temp[5] ){
                    cout << "WIN" << endl;
                    return;
                }
            }
        }
    }

    n = a.size();
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            for(int k=1 ;k<=n ;k++ ){
                vi temp = { a[i-1].first ,a[i-1].second ,a[j-1].first ,a[j-1].second ,a[k-1].first ,a[k-1].second  };
                sort(all(temp));
                if( temp[0] == temp[1] and temp[2] == temp[3] and temp[4] == temp[5] ){
                    cout << "WIN" << endl;
                    return;
                }
            }
        }
    }

    cout << "FAIL" << endl;
}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
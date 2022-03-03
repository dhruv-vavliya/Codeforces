
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

    int n,m,k;
    cin >> n >> m >> k;

    vi a(n+1,0) ,b(m+1,0);
    for(int i=1 ;i<=n ;i++) cin >> a[i] ,a[i] += a[i-1];
    for(int i=1 ;i<=m ;i++) cin >> b[i] ,b[i] += b[i-1];

    lli ans=0 ,f=1;
    while( f*f <= k ){
        if( k%f == 0 ){
            
            int c1=0 ,c2=0;     // all f and k/f lenthed array
            for(int i=f ;i<=n ;i++ ){
                if( a[i] - a[i-f] == f ) c1++;
            }
            for(int i=k/f ;i<=m ;i++ ){
                if( b[i] - b[i-k/f] == k/f ) c2++;
            }
            ans += c1*c2;

            if( k == f*f ){ f++; continue;}

            c1=0,c2=0;
            for(int i=k/f ;i<=n ;i++ ){
                if( a[i] - a[i-k/f] == k/f ) c1++;
            }
            for(int i=f ;i<=m ;i++ ){
                if( b[i] - b[i-f] == f ) c2++;
            }
            ans += c1*c2;
        }
        f++;
    }
    cout << ans << endl;
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
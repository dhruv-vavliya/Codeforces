
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


//    https://codeforces.com/problemset/problem/1475/D
void solve(){

    lli n,m;
    cin >> n >> m;

    vl a(n+1 ,0) ,b(n+1 ,0);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    vl x,y;
    for(int i=1 ;i<=n ;i++){
        int cost;
        cin >> cost;

        if( cost == 1 ) x.pb(a[i]);
        else y.pb(a[i]); 
    }

    sort(all(x) ,comp);
    sort(all(y) ,comp);

    for(int i=1 ;i<x.size() ;i++) x[i] += x[i-1];
    for(int i=1 ;i<y.size() ;i++) y[i] += y[i-1];

    lli ans = LLONG_MAX;
    for(lli i=0 ;i<=x.size() ;i++ ){

        lli need = m;
        if(i) need -= x[i-1];

        if( need <= 0 ){ ans = min(ans ,i); continue; }
        lli pos = lower_bound( all(y) ,need ) - y.begin();

        if( pos < y.size() ) ans = min(ans ,i + 2*(pos+1) );
    }

    if( ans == LLONG_MAX ) cout << -1 << endl;
    else cout << ans << endl;
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
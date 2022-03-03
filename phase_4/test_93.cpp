
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

    lli n,p,k;
    cin >> n >> p >> k;

    vl a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    sort(all(a));
    lli ans=0 ,res=0;
    int i=2 ,temp = p;

    while( i<=n and temp - a[i] >= 0 ){
        temp -= a[i];
        i+=2;
        ans+=2;
    }
    if( i == n+1 and temp >= a[n] ) ans++;
    res = ans;

    temp = p ,i=1 ,ans=0;
    int f=1;
    while( i<=n and temp - a[i] >= 0 ){
        temp -= a[i];
        i+=2;
        if(f) ans++ ,f=0;
        else ans+=2;
    }
    if( i == n+1 and temp >= a[n] ) ans++;
    res = max(res ,ans);

    cout << res << endl;
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
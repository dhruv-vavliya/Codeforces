
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
#define  disp1(v) for(int i=1 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/


// modular arithmetics
lli Power(lli x, lli y ,lli m)
{   lli ans = 1;
    while (y > 0){
        if (y & 1)  ans = ans * x ,ans%=m ;
        y = y>>1;
        x *= x;
        x %= m;             }
    return ans;             }

lli Fact(lli n)
{   if (n == 0)    return 1;
    return (n%mod * Fact(n - 1)%mod)%mod; }

lli Add(lli a ,lli b)    { return (a%mod + b%mod)%mod; }
lli Mult(lli a ,lli b)   { return (a%mod * b%mod)%mod; }
lli ModInv(lli n, lli m) { return Power(n, m-2 ,m); }

lli nCr(lli n,lli r,lli m)
{   if(r==0) return 1;
    return (Fact(n) * ModInv(Fact(r),m)%m * ModInv(Fact(n-r) ,m)%m)%m;   }



void solve(){

    int n,k;
    cin >> n >> k;

    vi a(n+1);
    map<int,int> mp;
    for(int i=1 ;i<=n ;i++) cin >> a[i] ,mp[a[i]]++;

    sort( a.begin()+1 ,a.end() ,comp );
    lli mx=0 ,ans = 1;
    map<int ,int> m1;
    for(int i=1 ;i<=k ;i++) mx += a[i] ,m1[a[i]]++;
    
    for( auto x : m1 ){
        ans *= nCr( mp[x.first] ,x.second ,mod );
        ans%=mod;
    }

    cout << ans%mod << endl;

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

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
#define vpi  vector<pii>
#define vpl  vector<pll>
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



//F For Functions
lli fact(lli n)
{   if (n == 0)    return 1;
    return n * fact(n - 1); }

// binary exponentiation
lli power(lli x, lli y)
{   lli ans = 1;
    while (y > 0){
        if (y & 1)  ans = ans * x ;
        y = y>>1;
        x *= x;                  }
    return ans;                  }

lli npr(lli n ,lli r)    { return fact(n)/fact(n-r); }
lli ncr(lli n ,lli r)    { return fact(n)/(fact(n-r)*fact(r)); }

lli logof(lli n ,lli p){
    lli ans=0 ,x=1;
    while( x <= n ) ans++ ,x*=p;
    return --ans;                }

bool is_prime(lli n){
    lli i=2;
    while(i*i <= n){
        if(n%i == 0) return false;
        i++;                     }
    return true;                 }





void solve(){

    string s;
    cin >> s;
    lli n = s.size();
    s = '0'+s;

    lli ans=0 ,b=0;
    for(int i=n ;i>=1 ;i--){
        if(s[i] == 'a'){
            ans +=b;
            ans%=mod;
            b*=2;
            b%=mod;
        }
        else  b++ ,b%=mod;
    }
    cout << ans%mod << endl;
}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}
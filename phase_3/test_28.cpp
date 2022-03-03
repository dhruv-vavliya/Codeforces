/*
            ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        @author
        ▀▄▀▄▀▄████▄█▄█▄█▄█████        DHRUV
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██       VAVLIYA
                ▀▀    ▀▀ ▄▄██▀ 
            AMMI JAAN KEHTI THI 
        KOI CODE CHHOTA NAHI HOTA OR...
*/

//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double

#define  fix fixed<<setprecision(10)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;

//Data Structures
#define ulli unsigned lli
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define vpi  vector<pii>
#define vpl  vector<pll>
#define pb   push_back
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
#define  sum(v,a,b) accumulate(v+a,v+b,0)
bool     comp(int x, int y)  { return x > y; }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;



//F For Functions
lli power(lli x, lli y)
{   lli ans = 1;
    while (y > 0)
    {   if (y & 1){
            ans = ans * x;
            ans%=mod;
        }  
        y = y >> 1;
        x = x * x;
        x%=mod;
    }
    return ans;
}

lli fact(lli n)
{   if (n == 0)    return 1;
    return n * fact(n - 1); }

bool is_square(lli n)    { if (power( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli  modInv(lli n, lli p) { return power(n, p-2); }
int  gcd(int a, int b)    { if (b == 0) return a;  return gcd(b, a % b); }
lli  add(lli a ,lli b)    { return (a%mod + b%mod)%mod; }
lli  mult(lli a ,lli b)   { return (a%mod * b%mod)%mod; }
lli  npr(lli n ,lli r)    { return fact(n)/fact(n-r); }
lli  ncr(lli n ,lli r)    { return fact(n)/(fact(n-r)*fact(r)); }

lli nCr(lli n,lli r,lli m)
{   if(r==0) return 1;
    return (fact(n)*modInv(fact(r),m)%m * modInv(fact(n-r),m)%m)%m;   }

lli nPr(lli n,lli r,lli m) 
{   if(r==0) return 1;
    return (fact(n)%m * modInv(fact(n-r),m)%m)%m;   }

int IN(string s ,string t){
    size_t temp = s.find(t);
    if( s.find(t) != string :: npos) return temp;
    else return -1;       }

lli ones(lli n){ return __builtin_popcount(n);      }





/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    lli a;
    cin >> a;
    cout << a << ' ' << ( 1LL << __builtin_popcount(a) ) <<  endl;


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
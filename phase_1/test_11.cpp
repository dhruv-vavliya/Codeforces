/*
            ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        @author
        ▀▄▀▄▀▄████▄█▄█▄█▄█████        DHRUV
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██       VAVLIYA
                ▀▀    ▀▀ ▄▄██▀ 
        KOI CODE CHHOTA NAHI HOTA
*/

#include <bits/stdc++.h>
// #define int long long int
#define lli long long int
#define li long int
#define ull unsigned long long
#define ld long double
#define all(v) v.begin(),v.end()
#define disp(v) for(int i=0 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define sum(v,a,b) accumulate(v+a,v+b,0)
#define fix fixed<<setprecision(10)
#define mod 1000000007
#define M 998244353
const int N = 2e5 + 5;
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using namespace __gnu_pbds;
typedef tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update > ordered_set;
 
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

bool comp(int x, int y)  { return x > y; }
lli modInv(lli n, lli p){ return power(n, p-2); }
int gcd(int a, int b)    { if (b == 0) return a;  return gcd(b, a % b); }
bool is_squre(li n)      { if (power((int)sqrt(n) ,2) == n) return true;   return false;}
lli add(lli a ,lli b)   {  return (a%mod + b%mod)%mod; }
lli mult(lli a ,lli b)  {  return (a%mod * b%mod)%mod; }

lli fact(lli n)
{   if (n == 0)    return 1;
    return n * fact(n - 1); }

lli nCr(lli n,lli r,lli m) {
if(r==0) return 1;
return (fact(n)*modInv(fact(r),mod)%m * modInv(fact(n-r),m)%m)%m;   }

int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli n,q,k;
    cin >> n >> q >> k;

    vector<lli> a(n+1,0);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    vector<lli> help(n+1 ,0);
    for(int i=1 ;i<n ;i++){
        help[i] = help[i-1] + a[i+1] - a[i-1] - 2;
    }
    disp(help)

    for(int i=0 ;i<q ;i++){
        lli left ,right;
        cin >> left >> right;

        lli ans =0;
        if(left == right) ans = k-1;
        else{
            ans += a[left+1]-2 + help[right-1] - help[left];
            ans += k - a[right-1] - 1; 
        }

        cout << ans << endl;

    }





}
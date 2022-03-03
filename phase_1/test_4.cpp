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

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        lli a[n];
        map<lli ,lli> mp;

        for(int i=0 ;i<n ;i++){
            cin >> a[i];
            mp[a[i]%m]+=1;
        }

        lli ans=0;
        for(auto &x : mp){
            if(x.first == 0 and x.second>0) ans+=1;                        // 0 arrange together
            else if(mp.count(m - x.first) == 0) ans += x.second;           // if matching not found
            else if( (m - x.first) == x.first) ans+=1;                 // 4 == 4 middle position
            else if( (m - x.first) > x.first){
                lli p = x.second;
                lli q = mp[m - x.first];

                if( abs(p-q) <= 1) ans += 1;
                else if(p > q) ans += (p-q);                // 1717171...
                else ans += (q-p);
            }
        }

        cout << ans  << endl;
    }




}   
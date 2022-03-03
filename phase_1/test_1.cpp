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
 
lli power(lli x, unsigned int y)
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
lli modInv(int n, int p){ return power(n, p-2); }
int gcd(int a, int b)    { if (b == 0) return a;  return gcd(b, a % b); }
bool is_squre(li n)      { if (power((int)sqrt(n) ,2) == n) return true;   return false;}
int add(lli a ,lli b)   {  return (a%mod + b%mod)%mod; }
int mult(lli a ,lli b)  {  return (a%mod * b%mod)%mod; }

lli fact(lli n)
{   if (n == 0)    return 1;
    return n * fact(n - 1)%mod; }

lli nCr(lli n,lli r,lli m) {
	if(r==0) return 1;
	return ( fact(n)*modInv(fact(r),mod)%mod * modInv(fact(n-r),mod) %mod)%mod;   }


int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t;
    cin >> t;

    while(t--){
        lli n;
        cin >> n;

        lli a[n];
        for(int i=0 ;i<n ;i++) cin >> a[i];


        lli all=a[0];
        for(int i=1 ;i<n ;i++) all &= a[i];


        int cnt=0;
        for(int i=0 ;i<n ;i++)
            if(all == a[i]) cnt+=1;

        if(cnt < 2){
            cout << 0 << endl;
            continue;
        }

        lli ans = (nCr(cnt,2,mod) *(lli)fact(n-2) * (lli)2)%mod ;
        cout << ans << endl;

    }
}
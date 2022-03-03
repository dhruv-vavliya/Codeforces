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

    int n;
    cin >> n;
    int p[n];

    for(int i=1 ;i<=n ;i++) cin >> p[i];
    int ans[n+1][n+1];
    int visit[n+1][n+1];

    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            if(i == j){
                ans[i][j] = p[i];
                visit[i][j] = 1;
            }
            else{
                ans[i][j] =0;
                visit[i][j] =0;
            }
        }
    }


    for(int i=1 ;i<=n ;i++){
        int val = p[i];        // take one by one value and fill it
        int cnt = val-1;

        if(val == 1) continue;
        int x = i;
        int y = i;

        while(cnt){
            if( y>1 and !visit[x][y-1]){    // go left
                visit[x][y-1] =1;
                ans[x][y-1] = val;
                y-=1;
                cnt-=1;
            }
            else{
                visit[x+1][y] = 1;         // go down
                ans[x+1][y] = val;
                x+=1;
                cnt-=1;
            }
        }
    }

    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=i ;j++){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }



}
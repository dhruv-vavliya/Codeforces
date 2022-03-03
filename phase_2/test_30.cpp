/*
            ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        @author
        ▀▄▀▄▀▄████▄█▄█▄█▄█████        DHRUV
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██       VAVLIYA
                ▀▀    ▀▀ ▄▄██▀ 
            AMMI JAAN KEHTI THI 
        KOI CODE CHHOTA NAHI HOTA OR...
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
struct mone{ int value = -1; };
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

lli fact(lli n)
{   if (n == 0)    return 1;
    return n * fact(n - 1); }

bool comp(int x, int y)  { return x > y; }
lli modInv(lli n, lli p) { return power(n, p-2); }
int gcd(int a, int b)    { if (b == 0) return a;  return gcd(b, a % b); }
bool is_square(lli n)    { if (power( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli add(lli a ,lli b)    { return (a%mod + b%mod)%mod; }
lli mult(lli a ,lli b)   { return (a%mod * b%mod)%mod; }
lli npr(lli n ,lli r)    { return fact(n)/fact(n-r); }
lli ncr(lli n ,lli r)    { return fact(n)/(fact(n-r)*fact(r)); }

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

int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n,m;
    cin >> n >> m;

    int a[n][m];
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++) cin >> a[i][j];
    }


    int ans=1;
    lli sm=0;
    for(int i=n-1 ;i>0 ;i--){
        for(int j=m-1 ;j>0 ;j--){

            if(a[i][j] == 0){
                if( a[i-1][j] == a[i+1][j]  || a[i][j-1] == a[i][j+1] || a[i-1][j] == a[i][j+1] || a[i+1][j] == a[i][j-1] ){
                    ans=0;
                    break;
                }

                int temp = min( a[i][j+1]-1 ,a[i+1][j]-1 );
                if( temp <= a[i][j-1] || temp <= a[i-1][j] ){
                    ans=0;
                    break;
                }

                if( temp > a[i-1][j] and temp > a[i][j-1] ) a[i][j] = temp;
            }
            else{
                if( a[i][j] <= a[i-1][j] || a[i][j] <= a[i][j-1] ){
                    ans=0;
                    break;
                }
            }



        }
    }
    cout << endl;

    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++) sm += a[i][j];
        cout << endl;
    }

    if(ans) cout << sm << endl;
    else cout << -1 << endl;



}
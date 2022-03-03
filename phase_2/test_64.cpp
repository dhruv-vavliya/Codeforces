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
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double
#define  all(v) v.begin(),v.end()
#define  disp(v) for(int i=0 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  sum(v,a,b) accumulate(v+a,v+b,0)
#define  fix fixed<<setprecision(10)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
const    int N = 2e5 + 5;
using    namespace std;

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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using    namespace __gnu_pbds;
typedef  tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update > ordered_set;
 

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

bool comp(int x, int y)  { return x > y; }
lli  modInv(lli n, lli p) { return power(n, p-2); }
int  gcd(int a, int b)    { if (b == 0) return a;  return gcd(b, a % b); }
bool is_square(lli n)    { if (power( (lli)sqrt(n) ,2) == n) return true;   return false;}
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


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    string s,t;
    cin >> s >> t;

    int x=s.size() ,y=t.size();
    int ans=1;
    int i=0 ,j=0;

    if( x>y){
        cout << "NO" << endl;
        return;
    }
    

    while( i < x){

        int c1=1;
        while( i+1<x and s[i] == s[i+1] ){
            c1+=1;
            i+=1;
        }

        int c2=0 ,flag=0;
        while( j<y and t[j] == s[i] ){
            j+=1;
            c2+=1;
            flag=1;
        }

        if( !flag || c1>c2 ){
            ans=0;
            break;
        }
        i+=1;
    }

    if(ans and j == y ) cout << "YES" << endl;
    else cout << "NO" << endl;


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
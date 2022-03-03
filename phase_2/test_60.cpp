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
    string a,b,c;
    cin >> a >> b >> c;

    map<string ,int> mp;
    mp[a]+=1;
    mp[b]+=1;
    mp[c]+=1;

    int c1 = 3 - max({  mp[a] ,mp[b] ,mp[c] });

    vector<string> p,q,r;
    int c2 = 2;
    if( a[1] == 'm' ) p.pb(a);
    if( a[1] == 'p' ) q.pb(a);
    if( a[1] == 's' ) r.pb(a);

    if( b[1] == 'm' ) p.pb(b);
    if( b[1] == 'p' ) q.pb(b);
    if( b[1] == 's' ) r.pb(b);

    if( c[1] == 'm' ) p.pb(c);
    if( c[1] == 'p' ) q.pb(c);
    if( c[1] == 's' ) r.pb(c);

    sort(all(p));
    sort(all(q));
    sort(all(r));


    if(      p.size() == 2 and p[1][0] - p[0][0] <=2  and p[1][0] != p[0][0] ) c2=1;
    else if( q.size() == 2 and q[1][0] - q[0][0] <=2  and q[1][0] != q[0][0] ) c2=1;
    else if( r.size() == 2 and r[1][0] - r[0][0] <=2  and r[1][0] != r[0][0] ) c2=1;


    if( p.size() == 3 and p[0][0]+1 == p[1][0] and p[1][0]+1 == p[2][0] ) c2=0;
    else if( q.size() == 3 and q[0][0]+1 == q[1][0]  and q[1][0]+1 == q[2][0]  ) c2=0;
    else if( r.size() == 3 and r[0][0]+1 == r[1][0]  and r[1][0]+1 == r[2][0] ) c2=0;

    if(c2 == 0){
        cout << 0 << endl;
        return;
    }


    if( p.size() == 3 and      ( (p[1][0] - p[0][0] <= 2 and p[1][0] != p[0][0])  || (p[2][0] - p[0][0] <=2 and p[2][0] != p[0][0]) || (p[2][0] - p[1][0] <= 2 and p[2][0] != p[1][0]) ) ) c2=1;
    else if( q.size() == 3 and ( (q[1][0] - q[0][0] <= 2 and q[1][0] != q[0][0])  || (q[2][0] - q[0][0] <=2 and q[2][0] != q[0][0]) || (q[2][0] - q[1][0] <= 2 and q[2][0] != q[1][0]))  ) c2=1;
    else if( r.size() == 3 and ( (r[1][0] - r[0][0] <= 2 and r[1][0] != r[0][0])  || (r[2][0] - r[0][0] <=2 and r[2][0] != r[0][0]) || (r[2][0] - r[1][0] <= 2 and r[2][0] != r[1][0]))  ) c2=1;

    cout << min(c1,c2) << endl;    

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
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

    int t;
    cin >> t;

    while(t--){

        vector<string> a(3);
        for(int i=0 ;i<3 ;i++) cin >> a[i];


        int x=0 ,o=0;
        for(int i=0 ;i<3 ;i++){
            for(int j=0 ;j<3 ;j++){
                if(a[i][j] == 'X') x+=1;
                else if(a[i][j] == 'O') o+=1;
                // cout << a[i][j];
            }
        }


        if( (x<o) || ( abs(x-o) >1) ){              // invalid turns
            cout << 3 << endl;
            continue;
        }
        
        int c1=0,c2=0;     // checks if already winner present or not
        if( a[0][0] == 'X' and   a[0][0] == a[1][1] and a[1][1] == a[2][2] ) c1=1;
        if( a[0][2] == 'X' and   a[0][2] == a[1][1] and a[1][1] == a[2][0] ) c1=1;
        if( a[0][0] == 'X' and   a[0][0] == a[0][1] and a[0][1] == a[0][2] ) c1=1;
        if( a[1][0] == 'X' and   a[1][0] == a[1][1] and a[1][1] == a[1][2] ) c1=1;
        if( a[2][0] == 'X' and   a[2][0] == a[2][1] and a[2][1] == a[2][2] ) c1=1;
        if( a[0][0] == 'X' and   a[0][0] == a[1][0] and a[1][0] == a[2][0] ) c1=1;
        if( a[0][1] == 'X' and   a[0][1] == a[1][1] and a[1][1] == a[2][1] ) c1=1;
        if( a[0][2] == 'X' and   a[0][2] == a[1][2] and a[1][2] == a[2][2] ) c1=1;

        if( a[0][0] == 'O' and   a[0][0] == a[1][1] and a[1][1] == a[2][2] ) c2=1;
        if( a[0][2] == 'O' and   a[0][2] == a[1][1] and a[1][1] == a[2][0] ) c2=1;
        if( a[0][0] == 'O' and   a[0][0] == a[0][1] and a[0][1] == a[0][2] ) c2=1;
        if( a[1][0] == 'O' and   a[1][0] == a[1][1] and a[1][1] == a[1][2] ) c2=1;
        if( a[2][0] == 'O' and   a[2][0] == a[2][1] and a[2][1] == a[2][2] ) c2=1;
        if( a[0][0] == 'O' and   a[0][0] == a[1][0] and a[1][0] == a[2][0] ) c2=1;
        if( a[0][1] == 'O' and   a[0][1] == a[1][1] and a[1][1] == a[2][1] ) c2=1;
        if( a[0][2] == 'O' and   a[0][2] == a[1][2] and a[1][2] == a[2][2] ) c2=1;

        if( c1+c2 > 1 || (x==o and c1)  || (x>o and c2) ){                    // more than one winners are present
            cout << 3 << endl;
            continue;
        }

        if( c1+c2 == 1 and x-o <= 1 ){                   // only one winner present
            cout << 1 << endl;
            continue;
        }

        if( x+o == 9){                                // if grid is full
            if( x-o == 1) cout << 1 << endl;          // draw condition
            else  cout << 3 << endl;
            continue;
        }

        cout << 2 << endl;

    }


}


 
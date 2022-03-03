
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

    int n;
    cin >> n;

    string s;
    cin >> s;

    int b=0,w=0;
    for(int i=0 ;i<n ;i++){
        if(s[i] == 'B') b+=1;
        else w+=1;
    }

    // cout << b << ' ' << w << endl;

    if( b&1 and w&1 ){
        cout << -1 << endl;
    }
    else if( b==0 || w==0 ){
        cout << 0 << endl;
    }
    else{

        vector<int> ans;
        char pri;
        if(b%2 == 0 and w%2 == 0){
            if(w>b) pri = 'B';
            else pri = 'W'; 
        }
        else if(b%2 != 0 and w%2 == 0) pri = 'W';
        else if(w%2 != 0 and b%2 == 0) pri = 'B';


        int i=0;
        while( i<n ){

            int flag=0;
            int first=-1, last=-1;

            if(s[i] == pri){
                first = i;
                if( i+1<n ) i+=1;
                while( i<n and s[i] != pri ){
                    flag=1;
                    i+=1;
                }
                last = i;
            }
            // cout << first << ' ' << last << endl;


            if(first!=-1){
                for(int j=last ;j>=first+1 ;j--) ans.push_back(j);
            }
            i+=1;
        }

        cout << ans.size() << endl;
        disp(ans)

    }



}
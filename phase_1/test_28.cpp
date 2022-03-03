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
        int n; 
        cin >> n;

        vector<int> a(n+1);
        for(int i=1 ;i<=n ;i++) cin >> a[i];
        unordered_map<int,int> gaps ,index;

        for(int i=1;i<=n ;i++){
            gaps[a[i]] = 0;
            index[a[i]] = -1;
        }

        for(int i=1 ;i<=n ;i++){
            if(i!=1 and index[a[i]]==-1) gaps[a[i]]= 1; 
            else if( i!=1 and index[a[i]]!=-1 and (i - index[a[i]]) > 1 ) gaps[a[i]]+=1;
            index[a[i]] = i;
        }

        // for(auto &val : gaps){
        //     cout << val.first << ":- " << val.second << endl; 
        // }


        int ans =INT_MAX;
        for(auto &val : gaps){
            if(index[val.first] == n) ans = min(ans ,val.second);
            else ans = min(ans ,val.second+1);
        }
        cout << ans << endl;


    }



}
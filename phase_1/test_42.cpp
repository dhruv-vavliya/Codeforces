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

        int n,l,r;
        cin >> n >> l >> r;
        int flag =0;
        if(l>r){
            flag=1;
            swap(l,r);
        }


        multiset<int> right;
        vector<int> a(l+1);

        if(flag){
            for(int i=1 ;i<=r ;i++){
                int temp;
                cin >> temp;
                right.insert(temp);
            }
            for(int i=1 ;i<=l ;i++) cin >> a[i];
        }
        else{
            for(int i=1 ;i<=l ;i++) cin >> a[i];
            for(int i=1 ;i<=r ;i++){
                int temp;
                cin >> temp;
                right.insert(temp);
            }
        }
              

        int n1 =l;
        int n2 =r;
        int ans=0;
        

        for(int i=1 ;i<=l ;i++){
            auto pos = right.find(a[i]);
            if(pos != right.end()){
                right.erase(pos);
                a[i] = -1;
                n1-=1;
                n2-=1;
            }
        }


        unordered_map<int,int> mp;
        ans += n1;
        int c=0;

        for( auto &val : right) mp[val] += 1;
        for( auto &val : mp) c += (val.second/2);

        int possible = (n2-n1)/2;
        if( possible <= c ){
            ans += possible;
            ans += (n2 - n1 - possible*2);
        }
        else{
            ans += c;
            ans += (n2 - n1 - c*2);
        }


        cout << ans << endl;




    }



}
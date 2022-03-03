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
        int h,m;
        cin >> h >> m;

        string time;
        cin >> time;

        int help[10] = {-1};
        help[0] = 0;
        help[1] = 1;
        help[2] = 5;
        help[3] = -1;
        help[4] = -1;
        help[5] = 2;
        help[6] = -1;
        help[7] = -1;
        help[8] = 8;
        help[9] =-1;

    
        int h1 = time[0]-'0';
        int h2 = time[1]-'0';
        int m1 = time[3]-'0';
        int m2 = time[4]-'0';

        int x = h1*10 + h2;              //current time 
        int y = m1*10 + m2;

        pair<int,int> ans = {-1,-1};
        bool flag = false;

        for(int i=x ;i<h ;i++){
            for(int j=0 ;j<m ;j++){

                int p = i/10;
                int q = i%10;
                int r = j/10;
                int s = j%10;

                if( help[p]==-1 or help[q]==-1 or help[r]==-1 or help[s]==-1){
                    continue;    // if mirror time not valid...
                }

                p = help[p];     // mirror time
                q = help[q];
                r = help[r];
                s = help[s];
                int t1 = s*10 +r;     // mirror hour
                int t2 = q*10 +p;     // mirror minute

                if( (t1<h and t2<m)   and  ((i>x) or (i==x and j>=y))){
                    ans.first =  i;
                    ans.second = j;
                    flag = true;
                    break;
                }

            }
            if(flag) break;
        }

        if(ans.first == -1) cout << "00:00" << endl;
        else cout << ans.first/10 << ans.first%10 << ":" << ans.second/10 << ans.second%10 << endl;
    }




}
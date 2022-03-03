
/*          ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        AMMI JAAN KEHTI THI
        ▀▄▀▄▀▄████▄█▄█▄█▄█████       KOI CODE CHHOTA NAHI HOTA OR...
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██
                ▀▀    ▀▀ ▄▄██▀       @author : Dhruv_Vavliya           */


//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double

#define  fix fixed<<setprecision(15)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;

//Data Structures
#define ulli unsigned lli
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define vpi  vector<pii>
#define vpl  vector<pll>
#define pb   push_back
#define bs   binary_search
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli      logd(lli x ,lli y){ return ceil( (ld)log(x)/(ld)log(y) ); }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/




void solve(){
    lli a,b,c;
    cin >> a >> b >> c;

    lli a1 = a/3 ,a2 = b/2 ,a3 = c/2;
    lli rnd = min({ a1,a2,a3 });
    lli ans = rnd*7;

    a -= rnd*3;
    b -= rnd*2;
    c -= rnd*2;
    // cout << a << ' ' << b << ' '  << c << ' ' << ans << endl;

    string temp = "abcacbaabcacba";
    lli rem=0;
    for(int i=0 ;i<7 ;i++){
        lli x1=a ,x2=b ,x3=c ,j=i ,cur=0;
        while( x1>=0 and x2>=0 and x3>=0 and j<14 ){
            if( temp[j] == 'a' ){
                if(x1>0) x1-- ,cur++;
                else break;
            }
            else if( temp[j] == 'b' ){
                if(x2>0) x2-- ,cur++;
                else break;
            }
            else{
                if(x3>0) x3-- ,cur++;
                else break;
            }
            
            j++;
        }
        // cout << i << ' ' << cur << endl;
        rem = max(rem ,cur);
    }
    
    ans += rem;
    cout << ans << endl;
    

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
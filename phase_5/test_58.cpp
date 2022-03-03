
/*          ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        AMMI JAAN KEHTI THI
        ▀▄▀▄▀▄████▄█▄█▄█▄█████       KOI CODE CHHOTA NAHI HOTA OR...
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██
                ▀▀    ▀▀ ▄▄██▀       @author : Dhruv_Vavliya           */

//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  li long int
#define  lli long long int
#define  ulli unsigned lli
#define  ld long double

//Data Structures
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define pb   push_back
#define bs   binary_search
#define lb   lower_bound
#define ub   upper_bound

//F for Functions
#define  all(v) v.begin(),v.end()
bool     comp(lli x ,lli y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli      logd(lli x ,lli y){ return ceil( (ld)log(x)/(ld)log(y) ); }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  disp1(v) for(int i=1 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/

//Pre-defined
#define  fix fixed<<setprecision(15)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;



void solve(){

    int n;
    cin >> n;

    // 2,3,4
    if( n<=3 ){ cout << -1 << endl; return; }
    if( n == 4){
        cout << "3 1 4 2" << endl;
        return;
    }

    vi ans;
    for(int i=1 ;i+4<=n ;i+=5){
        ans.pb(i);
        ans.pb(i+2);
        ans.pb(i+4);
        ans.pb(i+1);
        ans.pb(i+3);
    }
    int temp = 5*(n/5);

    if( n%5 == 1 ) ans.pb(n);
    else if( n%5 == 2 ){
        ans.pop_back();
        ans.pb(n-1);
        ans.pb(n-3);
        ans.pb(n);
    }
    else if( n%5 == 3 ){
        ans.pop_back();
        ans.pb(n-2);
        ans.pb(n);
        ans.pb(n-4);
        ans.pb(n-1);
    }
    else if( n%5 == 4 ){
        ans.pb(n-2);
        ans.pb(n);
        ans.pb(n-3);
        ans.pb(n-1);
    }
    disp(ans)
    
}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
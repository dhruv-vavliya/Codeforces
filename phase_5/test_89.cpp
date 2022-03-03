
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

    string s;
    cin >> s;

    string ans( n ,'@' );
    map<int ,vi> mp;
    for(int i=n-1 ;i>=0 ;i--) mp[ s[i] - '0' ].pb(i);
    
    int pre = n+1;
    int f=0 ,value=-1;
    for(int i=9 ;i>=0 ;i--){
        if( value!=-1 and i <= value ) break;
        for(auto val : mp[i]){
            if( pre > val ){
                ans[val] = '2';
                pre = val;
            }
            else{
                f=1;    
                value = ans[val];
            }
        }
    }

    vector<char> temp;
    for(int i=0 ;i<n ;i++ ){
        if( ans[i] == '@' ){
            ans[i] = '1';
            temp.pb(s[i]);
        }
    }
    for(int i=0 ;i<n ;i++ ){
        if( ans[i] == '2' ) temp.pb(s[i]);
    }

    for(int i=1 ;i<n ;i++){
        if( temp[i] < temp[i-1] ){ cout << '-' << endl; return; }
    }
    cout << ans << endl;
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
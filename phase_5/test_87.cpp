
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
    cin  >> n;

    string s,t;
    cin >> s >> t;

    vi ba,ab;
    vector<pair<int,int>> ans;
    for( int i=0 ;i<n ;i++ ){
        if( s[i] != t[i] ){
            if( s[i] == 'a' ){
                if( !ab.empty() ) ans.pb( { i+1 , ab.back()+1} ) ,ab.pop_back();
                else ab.pb(i); 
            }
            if( s[i] == 'b' ){
                if( !ba.empty() ) ans.pb( { i+1 , ba.back()+1} ) ,ba.pop_back();
                else ba.pb(i); 
            }
        }
    }
    if( ab.size() != ba.size() ){ cout << -1 << endl; return; }

    for(int i=0 ;i<ba.size() ;i++ ){
        ans.pb( {ba[i]+1 ,ba[i]+1} );
        ans.pb( {ba[i]+1 ,ab[i]+1} );
    }
    
    cout << ans.size() << endl;
    for(auto val : ans ) cout << val.first << ' ' << val.second <<  endl;

}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }
} 
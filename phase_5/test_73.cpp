
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

bool is_palin(string s){
    lli n = s.size();
    for(int i=0 ;i<n/2 ;i++){
        if( s[i] != s[n-i-1] ) return false;    }
    return true;                                }


void solve(){

    string s;
    cin >> s;
    int n = s.size();

    int i=0 ,j=n-1;
    string a1,a2,a3,a4;
    while( i<j and s[i] == s[j] ) a3 += s[i] ,a4 += s[j] ,i++ ,j--;
    reverse(all(a4));
    if( i == j ){
        cout << a3 + s[i] + a4 << endl;
        return;
    }
    
    int t_j = j ,t_i = i;
    while( t_j >= i ){
        if( s[t_j] == s[i] and is_palin( s.substr( i ,t_j - i + 1 ) ) ){
            a1 = s.substr( i ,t_j - i + 1 );
            break;
        }
        t_j--;
    }

    while( t_i <= j ){
        if( s[t_i] == s[j] and is_palin( s.substr( t_i ,j - t_i + 1 ) ) ){
            a2 = s.substr( t_i ,j - t_i + 1 );
            break;
        }
        t_i++;
    }

    // cout << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << endl;
    if( a1.size() > a2.size() ) cout << a3 + a1 + a4 << endl;
    else cout << a3 + a2 + a4 << endl;


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
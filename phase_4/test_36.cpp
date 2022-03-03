
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


bool is_palin(string s){
    lli n = s.size();
    for(int i=0 ;i<n/2 ;i++){
        if( s[i] != s[n-i-1] ) return false;    }
    return true;                                }

int IN(string s ,string t){
    size_t temp = s.find(t);
    if( s.find(t) != string :: npos) return true;
    else return false;                          }

bool is_subseq(string s ,string t){
    int i=0 ,j=0 ,n=s.size() ,m=t.size() ,c=0;
    while( i<n and j<m ){
        if( s[i] == t[j] ) j++ ,c++;
        i++;                                    }
    return c == m;                              }






void solve(){
    string n;
    cin >> n ;

    lli i=1 ,ans=INT_MAX;
    while( i*i <= 2*1e9 ){
        string temp = to_string(i*i);
        lli m = temp.size();
        if( m > n.size() ) break;
        if( is_subseq(n ,temp) ) ans = min( ans ,n.size() - m );
        i++;
    }  
    if(ans == INT_MAX) cout  << -1 << endl;
    else cout << ans << endl;

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
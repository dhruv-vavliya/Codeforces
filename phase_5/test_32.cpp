
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

#define  fix fixed<<setprecision(15)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
#define  PI acos(-1)
const    int N = 2e5 + 5;

//Data Structures
#define pii  pair<int, int>
#define pll  pair<lli, lli>
#define vi   vector<int>
#define vl   vector<lli>
#define pb   push_back
#define bs   binary_search
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
lli      logd(lli x ,lli y){ return ceil( (ld)log(x)/(ld)log(y) ); }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  disp1(v) for(int i=1 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    
    int n,m;
    cin >> n >> m;

    vector<string> v(n+1);
    int ans=0;
    for(int i=1 ;i<=n ;i++){
        string s;
        cin >> s;
        s = '#' + s;
        v[i] = s;
        for(int j=1 ;j<=m ;j++){
            if( v[i][j] == '1' ) ans++;
        }
    }

    cout << 3*ans << endl;
    
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=m ;j++){
            if( v[i][j] == '1' ){
                if( i== n and j == m){
                    cout << i-1 << ' ' << j-1 << ' ' << i-1 << ' ' << j << ' ' << i << ' ' << j << endl;
                    cout << i-1 << ' ' << j-1 << ' ' << i << ' ' << j-1 << ' ' << i << ' ' << j << endl;
                    cout << i-1 << ' ' << j << ' ' << i << ' ' << j-1 << ' ' << i << ' ' << j << endl;
                }
                else if( i == n ){
                    cout << i-1 << ' ' << j << ' ' << i << ' ' << j+1 << ' ' << i << ' ' << j << endl;
                    cout << i-1 << ' ' << j+1 << ' ' << i << ' ' << j+1 << ' ' << i << ' ' << j << endl;
                    cout << i-1 << ' ' << j << ' ' << i-1 << ' ' << j+1 << ' ' << i << ' ' << j << endl;
                    
                }
                else if( j == m ){
                    cout << i << ' ' << j-1 << ' ' << i+1 << ' ' << j-1 << ' ' << i << ' ' << j << endl;
                    cout << i+1 << ' ' << j << ' ' << i+1 << ' ' << j-1 << ' ' << i << ' ' << j << endl;
                    cout << i+1 << ' ' << j << ' ' << i << ' ' << j-1 << ' ' << i << ' ' << j << endl;

                }
                else{
                    cout << i+1 << ' ' << j << ' ' << i+1 << ' ' << j+1 << ' ' << i << ' ' << j << endl;
                    cout << i << ' ' << j+1 << ' ' << i+1 << ' ' << j+1 << ' ' << i << ' ' << j << endl;
                    cout << i+1 << ' ' << j << ' ' << i << ' ' << j+1 << ' ' << i << ' ' << j << endl;

                }
            }
        }
    }




}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
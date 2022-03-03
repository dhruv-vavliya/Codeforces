
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
    
    int n ,q;
    cin >> n >> q;

    int a[3][n+1];
    for(int i=1 ;i<=2 ;i++){
        for(int j=1 ;j<=n ;j++) a[i][j] = 0;
    }

    int r,c;
    int block=0;
    while(q--){
        cin >> r >> c;

        if( a[r][c] ){
            a[r][c] = 0;
            if( r == 1 ){
                if( a[r+1][c] ) block--;
                if( c+1<=n and a[r+1][c+1] ) block--;
                if( c-1>=1 and a[r+1][c-1] ) block--;
            }
            else{
                if( a[r-1][c] ) block--;
                if( c+1<=n and a[r-1][c+1] ) block--;
                if( c-1>=1 and a[r-1][c-1] ) block--;
            }
        }
        else{
            a[r][c] = 1;
            if( r == 1 ){
                if( a[r+1][c] ) block++;
                if( c+1<=n and a[r+1][c+1] ) block++;
                if( c-1>=1 and a[r+1][c-1] ) block++;
            }
            else{
                if( a[r-1][c] ) block++;
                if( c+1<=n and a[r-1][c+1] ) block++;
                if( c-1>=1 and a[r-1][c-1] ) block++;
            }
        }

        if(block) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
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
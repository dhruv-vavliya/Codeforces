
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
    
    int n;
    cin >> n;

    char a[5][n+1][n+1];
    for(int i=1 ;i<=4 ;i++ ){
        for(int j=1 ;j<=n ;j++ ){
            for(int k=1 ;k<=n ;k++ ){
                cin >> a[i][j][k];
            }
        }
    }

    int ans=INT_MAX;
    vi v = {1,2,3,4};

    do{                                      // 1 2
        int op = 0;                          // 3 4
        int f1=0 ,f2=1 ,a1=0,a2=0;

        for(int i=0 ;i<4 ;i++ ){
            for(int j=1 ;j<=n ;j++ ){
                for(int k=1 ; k<=n ;k++ ){
                    if( (a[v[i]][j][k] - '0') != f1 ) a1++;
                    if( (a[v[i]][j][k] - '0') != f2 ) a2++;

                    if( !(i==1 and j==n and k==n) ) f1^=1;
                    if( !(i==1 and j==n and k==n) ) f2^=1;
                }
            }
        }
        ans = min({ans ,a1,a2});
    }
    while( next_permutation(all(v)) );      // all permutations

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
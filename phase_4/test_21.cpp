
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

const int N = 1e3+5;
int t1[N][N] ,t2[N][N];

void solve(){
    int h,w;
    cin >> h >> w;

    vi r(h+1) ,c(w+1);
    for(int i=1 ;i<=h ;i++) cin >> r[i];
    for(int i=1 ;i<=w ;i++) cin >> c[i];


    int i,j;
    for(i=1 ;i<=h ;i++){
        for(j=1 ;j<=r[i] ;j++){
            t1[i][j]=1;
        }
        t1[i][j]=2;
    }

    for(i=1 ;i<=w ;i++){
        for(j=1 ;j<=c[i] ;j++){
            t2[j][i]=1;
        }
        t2[j][i]=2;
    }

    lli ans=1;
    for(int i=1 ;i<=h ;i++){
        for(int j=1 ;j<=w ;j++){
            if( t1[i][j] == 1 and t2[i][j] == 2 ){ cout << 0 << endl; return; }
            else if( t1[i][j] == 2 and t2[i][j] == 1 ){ cout << 0 << endl; return; }
            else if( t1[i][j] == 0 and t2[i][j] == 0 ) ans = (2*ans)%mod;
        }
    }
    cout << ans << endl;


    priority_queue<pair<lli ,lli> ,vector<pair<lli,lli>> ,greater<pair<lli,lli>> > pq;

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
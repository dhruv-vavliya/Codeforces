/*
            ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        @author
        ▀▄▀▄▀▄████▄█▄█▄█▄█████        DHRUV
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██       VAVLIYA
                ▀▀    ▀▀ ▄▄██▀ 
            AMMI JAAN KEHTI THI 
        KOI CODE CHHOTA NAHI HOTA OR...
*/

//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double

#define  fix fixed<<setprecision(10)
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
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
#define  sum(v,a,b) accumulate(v+a,v+b,0)
bool     comp(int x, int y)  { return x > y; }
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    int n,m;
    cin >> n >> m;

    char a[n+1][m+1] ,temp[n+1][m+1];
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=m ;j++) cin >> a[i][j] ,temp[i][j] = '.';
    }



    for(int i=2 ;i<n ;i++){
        for(int j=2 ;j<m ;j++){
            if( a[i-1][j-1] == '.' || a[i-1][j] == '.' || a[i-1][j+1] == '.' || a[i][j-1] == '.' || a[i][j+1] == '.' || a[i+1][j-1] == '.' || a[i+1][j] == '.' || a[i+1][j+1] == '.'   ) continue;
            temp[i-1][j-1] = '#';
            temp[i-1][j] = '#';
            temp[i-1][j+1] = '#';
            temp[i][j-1] = '#';
            temp[i][j+1] = '#';
            temp[i+1][j-1] = '#';
            temp[i+1][j] = '#';
            temp[i+1][j+1] = '#';
        }
    }


    int ans=1;
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=m ;j++){
            if( a[i][j] != temp[i][j] ){
                ans=0;
                break;
            }
        }
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;



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
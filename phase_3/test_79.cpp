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
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/

int n,m;
bool is(int i,int j){
    if( i>=1 and i<=n and j>=1 and j<=m ) return true;
    return false;
}

void solve(){
    cin >> n >> m ;

    vector<string> a(n+1);
    for(int i=1 ;i<=n ;i++){
        string temp;
        cin >> temp;
        a[i] = '0' + temp;
    }

    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=m ;j++){
            if( a[i][j] != '*' ){
                int bomb = 0;
                if( is(i-1,j-1) and a[i-1][j-1] == '*' ) bomb++;
                if( is(i-1,j) and a[i-1][j] == '*' ) bomb++;
                if( is(i-1,j+1) and a[i-1][j+1] == '*' ) bomb++;
                if( is(i,j-1) and a[i][j-1] == '*' ) bomb++;
                if( is(i,j+1) and a[i][j+1] == '*' ) bomb++;
                if( is(i+1,j-1) and a[i+1][j-1] == '*' ) bomb++;
                if( is(i+1,j) and a[i+1][j] == '*' ) bomb++;
                if( is(i+1,j+1) and a[i+1][j+1] == '*' ) bomb++;
                // cout << bomb << endl;

                if(a[i][j] == '.' and bomb>0  ){ cout << "NO" << endl;return;  }
                if( isdigit(a[i][j]) and bomb != (a[i][j]-'0')  ){ cout  << "NO" << endl; return ;}
            }
        }
    }

    cout << "YES" << endl;
    

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

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
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



int32_t main()
{
    int n;
    cin >> n;

    int a;
    int ans[n+1][n+1];
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){

            cin >> a;
            vi temp = {0,0,0,0};
            temp[a] = 1;

            if( i-1>=1 ) temp[ ans[i-1][j] ] = 1;
            if( j-1>=1 ) temp[ ans[i][j-1] ] = 1;
            
            if( !temp[1] )      ans[i][j] = 1 , cout << 1 << ' ' << i << ' ' << j << endl;
            else if( !temp[2] ) ans[i][j] = 2 , cout << 2 << ' ' << i << ' ' << j << endl;
            else ans[i][j] = 3 , cout << 3 << ' ' << i << ' ' << j << endl;
            cout.flush();

        }
    }

    return 0;
}
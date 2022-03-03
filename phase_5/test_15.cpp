
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


/*

    | a/b |  =  a%b
    quotient    remainder

    b*q + r = a     ( q = r )
    (b+1)*r = a     ( x is positive integer )
                    ( a is multiple of b+1 )

    r < b
    r*r < (b+1)*r
    r*r < a
    r < sq(a)    ......................(1)
    
for any valid k,
    1 <= a <= x
    1 <= (b+1)*r <= x
    1 <= (b+1) <= x/r

    r < b
    1 <= b <= (x/r) - 1     --> all possible b
    1 <= b <= y

    final equation  :   r < b <= min( x/r-1 ,y )        -- for all possible remainders ,try to compute all possible a 
*/




void solve(){
    lli x,y;
    cin >>  x >> y; 

    lli ans=0;
    lli r=1;
    while( r*r <= x ){
        lli b  = min( y , x/r - 1 ) - r;
        ans += max( 0LL ,b );
        r++;
    }
    cout << ans << endl;
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
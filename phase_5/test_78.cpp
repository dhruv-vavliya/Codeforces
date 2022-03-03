
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


lli ok( vl v ,lli n ,lli mid ){

    lli dif=0;
    for(int i=1 ;i<=n ;i++){
        if( v[i] < 0 ) v[i] = mid;
        if(i!=1) dif = max(dif ,abs( v[i] - v[i-1] ) );
    }
    return dif;
}






void solve(){

    lli n;
    cin >> n;

    vl a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    // 1 -1 7 5 2 -1 5
    // 1,7,2,5
    // 1 2 5 7   =  15/4 = 3... = 4

    // m = 3  , k = 6
    
    lli mn = LLONG_MAX ,mx = LLONG_MIN;

    for(int i=1 ;i<=n ;i++){

        if( i-1>=1 and a[i] == -1 and a[i-1] != -1 ){
            mn = min( mn , a[i-1] );
            mx = max( mx , a[i-1] );
        }
        if( i+1<=n and a[i] == -1 and a[i+1] != -1 ){
            mn = min( mn , a[i+1] );
            mx = max( mx , a[i+1] );
        }
    }

    lli res =  (mx + mn)/2;
    lli ans=0;
    for(int i=1 ;i<=n ;i++){
        if( a[i] == -1 ) a[i] = res;
        if(i!=1) ans = max( ans , abs(a[i] - a[i-1]) );
    }

    cout << ans << ' ' << res << endl;
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

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

    lli n ;
    cin >> n;

    vl a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    if(n==1){
        cout << a[1] << endl;
        return;
    }

    vl pre(n+2 ,0)  ,suf(n+2 ,0); 
    pre[1] = (~a[1]);
    suf[n] = (~a[n]);
    for(int i=2 ;i<=n ;i++) pre[i] = pre[i-1]&(~a[i]);
    for(int i=n-1 ;i>=1 ;i--) suf[i] = suf[i+1]&(~a[i]);

    lli pos=-1 ,ans = INT_MIN;
    for(int i=1 ;i<=n ;i++){
        lli temp;
        if(i==1) temp = suf[i+1]&a[i];
        else if(i==n) temp = pre[i-1]&a[i];
        else temp = pre[i-1]&a[i]&suf[i+1];

        if(temp > ans){
            ans = temp;
            pos = i;
        }
    }

    cout << a[pos] << ' ' ;
    for(int i=1 ;i<=n ;i++ ){
        if( i != pos ) cout << a[i] << ' ';
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

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



void solve(){
    lli n;
    cin >> n;

    vl a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];
    set<lli> st;

    if(n <= 2){ cout << 0  << endl; return; }
    lli mx = a[1];
    for(int i=2 ;i<=n ;i++){
        mx = max(mx ,a[i]);
        st.insert( a[i] - a[i-1] );
    }

    // two situation : a(i-1) + c <= m      :  a[i] will inc    : +ve c
    //                 a(i-1) + c > m       :  a[i] will dec    : -ve c

    if( st.size() > 2 ){ cout << -1 << endl; return; }
    if( st.size() == 1 ){ cout << 0 << endl; return; }  // same diff   // always inc or dec 
                                                        // m can be anything

    int a1 = *st.begin() ,a2 = *(--st.end());
    if( a1>=0 and a2>=0 ){ cout << -1 << endl; return; }
    if( a1<=0 and a2<=0 ){ cout << -1 << endl; return; }
    if( mx > a2-a1 ){ cout << -1 << endl; return; }

    cout << a2-a1 << ' ' << a2 << endl;   
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
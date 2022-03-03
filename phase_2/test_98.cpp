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
    int n;
    cin >> n;

    vi a(n+2,0);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    int ans=0;
    vi po(n+2,0) ,pe(n+2,0) ,so(n+2,0) ,se(n+2,0);

    for(int i=1 ;i<=n ;i++){
        if(i&1){
            po[i] = po[i-1] + a[i];
            pe[i] = pe[i-1];
        }else{
            pe[i] = pe[i-1] + a[i];
            po[i] = po[i-1];
        }   
    }

    for(int i=n ;i>=1 ;i--){
        if(i&1){
            so[i] = so[i+1] + a[i];
            se[i] = se[i+1];
        }else{
            se[i] = se[i+1] + a[i];
            so[i] = so[i+1];
        }   
    }

    // disp(po)
    // disp(so)
    // disp(pe)
    // disp(se)

    for(int i=1 ;i<=n ;i++){
        // cout << (po[i-1]+se[i+1]) << ' ' <<  (pe[i-1] + so[i+1]) << endl;
        if( (po[i-1]+se[i+1]) == (pe[i-1] + so[i+1]) ) ans++;
    }

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
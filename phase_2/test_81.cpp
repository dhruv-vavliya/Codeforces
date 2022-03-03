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
#define  disp1(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  disp2(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    int n;
    cin >> n;

    vi a(n+1);
    for(int i=1 ;i <=n ;i++) cin >> a[i];

    // if( n == 1 ){
    //     cout << 0 << endl;
    //     return;
    // }


    int res=INT_MAX;
    for(int d=0 ;d<=100 ;d++){       // final same value
        int cur=-1 ,flag=1;

        for(int i=1; i<=n ;i++){
            int diff = abs(d-a[i]); 
            // if(d == 100) cout << diff << ' ' << cur << endl;
            if( cur == -1 and diff!=0 ) cur = diff;    // smallest integer D
            else if(cur != -1){
                if( !(diff == 0 || diff == cur) ){
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            if(cur == -1) cur=0;
            res = min(res ,cur);
        }
    }

    if( res == INT_MAX ) cout << -1 << endl;
    else cout << res << endl;
    

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
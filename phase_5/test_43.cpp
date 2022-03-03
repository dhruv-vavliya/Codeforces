
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
bool     comp(int x, int y)  { return x > y; }
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


    int n;
    cin >> n;

    vi a(n+1);
    int t1=0 ,t2=0;
    map<int ,int> mp;
    for(int i=1 ;i<=n ;i++ ) cin >> a[i] ,mp[a[i]]++;
    for(auto val : mp) t1 += val.second/2 ,t2 += val.second/4;

    int q ,val;
    cin >> q;
    char sign;

    while(q--){
        cin >> sign >> val;

        if( sign == '+' ){
            t1 -= mp[val]/2 ,t2 -= mp[val]/4;            
            mp[val]++;
            t1 += mp[val]/2 ,t2 += mp[val]/4;

            if( t2>=1 and t1>=4 ) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            t1 -= mp[val]/2 ,t2 -= mp[val]/4;            
            mp[val]--;
            t1 += mp[val]/2 ,t2 += mp[val]/4;

            if( t2>=1 and t1>=4 ) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
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
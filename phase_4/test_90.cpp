
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


//  https://codeforces.com/problemset/problem/1475/D
void solve(){

    lli n,m;
    cin >> n >> m;

    vl a(n+1) ,b(n+1);
    lli sm=0;
    for(int i=1 ;i<=n ;i++ ) cin >> a[i] ,sm+=a[i];
    for(int i=1 ;i<=n ;i++ ) cin >> b[i];

    if( sm < m ){ cout << -1 << endl; return; }

    lli ans=0;
    priority_queue<lli> p1,p2;
    for(int i=1 ;i<=n ;i++){
        if( b[i] == 1 ) p1.push( a[i] );    // 1
        else p2.push(a[i]);                 // 2
    }

    while( !p1.empty() || !p2.empty() ){

        if( p1.size() >= 2 and !p2.empty() and max(p1.top(),p2.top()) < m ){
            lli a1 = p1.top();
            p1.pop();
            lli a2 = p1.top();
        
            if( a1 + a2 >= p2.top() ){
                ans += 2;
                p1.pop();
                m -= a1;
                m -= a2;
            }
            else{
                ans+=2;
                p1.push(a1);
                m -= p2.top();
                p2.pop();
            }
        }
        else{
            if( !p1.empty() and m - p1.top() <= 0 ){ cout << ans+1 << endl; return; }
            if( !p2.empty() and m - p2.top() <= 0 ){ cout << ans+2 << endl; return; } 
        }
        cout << ans << ' ' << m <<  endl;

        // else if( !p1.empty() and !p2.empty()  ){
        //     if( m-p1.top() <= 0 ){ cout << ans+1 << endl; return; }

        //     if( p1.top() < p2.top() ){
        //         ans += 2;
        //         m -= p2.top();
        //         p2.pop();
        //     }
        //     else{
        //         ans++;
        //         m -= p1.top();
        //         p1.pop();
        //     }
        // }
        // else if( !p1.empty() ){
        //     ans++;
        //     m -= p1.top();
        //     p1.pop();
        // }
        // else if( !p2.empty() ){
        //     ans+=2;
        //     m -= p2.top();
        //     p2.pop();
        // }

        if( m<=0 ){ cout << ans << endl; return; }
    } 

    cout  << - 1 << endl;
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
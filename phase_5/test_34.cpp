
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
#define  disp1(v) for(int i=1 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;
    s = '#' + s;

    lli ans=0;
    if( s[1] == 'W' ) ans++;                           // intial answer wwithout canges apply.
    for(int i=2 ;i<=n ;i++){
        if( s[i] == 'W' ){
            if( s[i-1] == 'W' ) ans+=2;
            else ans++;
        }
    }

    vi v;
    int i=1 ,t1=0 ,t2=0;
    while( i<=n and s[i] != 'W' ) i++ ,t1++;                            // first
    int j = n;
    while( j>i and s[j] != 'W' ) j-- ,t2++;                             // last
    
    while( i <= j ){
        if( s[i] == 'W' ){
            int c=0;
            i++;
            while( i<=n and s[i] != 'W' ) i++ ,c++;
            if( i<=n and s[i] == 'W'){
                if(c>0) v.pb(c);
                i--;
            }
        }
        i++;
    }

    sort(all(v));
    for(auto x : v){
        if( k-x >= 0 ){
            ans +=( 2*x + 1);
            k -= x;
        }
        else if( k > 0 ){
            ans += 2*k;
            k=0;
            break;
        }
    }

    if( t1 == n ){
        k = min(t1 ,k);
        if(k > 0 ) ans += 2*k-1;
        k=0;
    }

    if(k > 0 ){
        if( t1 <= k ) ans += 2*t1 ,k -= t1;
        else ans += 2*k , k=0;
    }
    if(k>0){
        if(t2 <= k ) ans += 2*t2 ,k -= t2;
        else ans += 2*k ,k=0;
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
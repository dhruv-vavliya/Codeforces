
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
#define vpi  vector<pii>
#define vpl  vector<pll>
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


bool is_prime(lli n){
    if(n==1) return false;
    lli i=2;
    while(i*i <= n){
        if(n%i == 0) return false;
        i++;                     }
    return true;                 }

// seive of eraththesis
int prime[N];
vi primes;
void seive(lli n){                                   // prime factors : <= sqrt(n)
    for(int i=2 ;i*i<=n ;i++ ){
        if( !prime[i] ){
            for(int j=i*i ;j<=n ;j+=i ) prime[j]=1;  // mark as not prime
        }
    }
    for(int i=2 ;i<=n ;i++){
        if(!prime[i]) primes.pb(i);
    }
}



void solve(){
    int n;
    cin >> n ;

    vi a(n+1);
    int mx=0;
    for(int i=1 ;i<=n ;i++){
        cin >> a[i];
        mx = max(mx ,a[i]);
    }

    
    int ans[mx+1] = {0};
    for(int i=1 ;i<=n ;i++){
        int k=2;
        while( k*k <= a[i] ){
            if( a[i]%k == 0){
                ans[k]++;
                if(k*k != a[i]) ans[a[i]/k]++;
            }
            k++;
        }
        if(a[i]!=1) ans[a[i]]++;
    }

    int res=1;
    for(int i=1 ;i<=mx ;i++) res = max(res , ans[i]) ;

    cout << res  << endl;

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
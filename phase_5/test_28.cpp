
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



// modular arithmetics
lli Power(lli x, lli y ,lli m)
{   lli ans = 1;
    while (y > 0){
        if (y & 1)  ans = ans * x ,ans%=m ;
        y = y>>1;
        x *= x;
        x %= m;             }
    return ans;             }

lli fac[100005];
void factorial(){
    fac[0] = 1;
    for(lli i=1; i<=100000 ;i++){
        fac[i] = (fac[i-1]*i)%mod;    
    }      
}



lli ModInv(lli n, lli m) { return Power(n, m-2 ,m); }

lli nCr(lli n,lli r,lli m)
{   if(r==0) return 1;
    return ( fac[n]%m   *   ModInv( fac[r],m)%m    * ModInv(fac[n-r],m)%m )%m;   }



 //  https://codeforces.com/problemset/problem/1462/E1

void solve(){

    lli n ,m,k;
    cin >> n >> m >> k;

    vl a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];
    sort(all(a));

    lli ans=0;
    for(int i=1 ;i<=n ;i++ ){
        lli temp =  ub( a.begin()+1 ,a.end() ,a[i]+k ) - a.begin() - 1;   // total values
        temp -= (i-1);
        if( temp < m ) continue;
        ans += nCr( temp-1 ,m-1,mod) ;
        ans%=mod;
    }    
    cout << ans%mod << endl;
}




int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    factorial();

    while(t--){
        solve();
    }
}
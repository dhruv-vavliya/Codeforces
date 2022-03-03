
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


//   https://codeforces.com/problemset/problem/1208/B
bool ok( int len ,vl a ,int n ,map<lli ,lli> mp ,int tot ){

    int l=1 ,r=1;
    while( r<=n ){
        mp[a[r]]--;
        if( mp[a[r]] == 1 ) tot--;

        if( r-l+1 < len ){
            r++;
            continue;
        } 

        if( tot == 0 ) return true;

        int f=0;
        if( mp[a[l]] > 1 ) f=1;
        mp[a[l]]++;
        if( !f and mp[a[l]] > 1 ) tot++;

        l++;
        r++;
    }   
    return false;
}


void solve(){

    lli n;
    cin >> n;

    vl a(n+1);
    map<lli ,lli> mp;
    for(int i=1 ;i<=n ;i++) cin >> a[i] ,mp[a[i]]++;

    int tot=0;
    for(auto val : mp){
        if( val.second > 1 ) tot++; 
    }

    if(tot == 0){ cout << 0 << endl; return; }

    // if k-size nikalane se hoga then (k+x) nikalane se jarur hoga.
    int l=1 ,r=n;
    while( l <= r ){
        int mid = (l+r)/2;
        if( ok(mid ,a ,n ,mp ,tot) ) r = mid-1;
        else l = mid+1;
    }

    cout << ++r << endl;
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
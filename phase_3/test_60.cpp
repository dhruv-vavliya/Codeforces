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
#define  PI acos(-1)
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
    int n,m;
    cin >> n >> m;

    vi a(m+1);
    int mx = m/n;
    map<int ,int> mp;
    for(int i=1 ;i<=m ;i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    for(int d=mx ;d>0 ;d-- ){
        int temp=0;
        for(auto &val : mp) temp += val.second/d;
        if( temp >= n ){ cout << d << endl; return;}
    }
    cout << 0 << endl;

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
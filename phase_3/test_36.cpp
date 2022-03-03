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

map<string ,int> mp;    
int go(string a,string b){
    if( !mp.count(a) || !mp.count(b) ) return INT_MAX;
    return mp[a] + mp[b];
}


void solve(){
    int n;
    cin >> n;

    for(int i=1 ;i<=n ;i++){
        int bhav;
        string s;
        cin >> bhav >> s;
        sort(all(s));

        if( mp.count(s) ) mp[s] = min( bhav ,mp[s] );
        else mp[s] = bhav;
    }

    int ans = INT_MAX;
    if( mp.count("A") and mp.count("B") and mp.count("C") ){
        ans = min(ans ,mp["A"] + mp["B"] + mp["C"]);
    }
    if( mp.count("ABC")){
        ans = min(ans, mp["ABC"]);
    }

    ans = min(ans ,go( "A" ,"BC" ));
    ans = min(ans ,go( "B" ,"AC"));
    ans = min(ans ,go("C" ,"AB"));
    ans = min(ans ,go("AB", "BC"));
    ans = min(ans ,go("AC" ,"BC"));
    ans = min(ans ,go("AB" ,"AC"));

    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans <<  endl;






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
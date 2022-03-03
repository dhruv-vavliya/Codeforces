
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


/*

5 6     -- > to delete further element it's necessary to take max of current element
2 4     -- > so on....
3 1

*/



void solve(){
    lli n;
    cin >> n;

    vl a(2*n+1);
    for(int i=1 ;i<=2*n ;i++) cin >> a[i];

    int pos = max_element( a.begin()+1 ,a.end() ) - a.begin();
    lli mx = a[pos];

    for(int i=1 ;i<=2*n ;i++){     // all possible nums for make pair with mx

        if( i == pos ) continue;
        vector<pii> ans;
        multiset<int> ms;
        for(int j=1 ;j<=2*n ;j++) ms.insert(a[j]);

        lli x = mx+a[i] ,flag=1 ,temp = mx+a[i];

        while( !ms.empty() ){   
            lli f = *ms.rbegin();        // current max element
            ms.erase( ms.find(f) );
            auto s = ms.find(x-f);
            if( s == ms.end() ){ flag=0; break; }
            ans.pb( {f ,x-f} );
            ms.erase(s);
            x = max( f ,x-f );
        }

        if(flag){
            cout << "YES" << endl;
            cout << temp << endl;
            for(auto val : ans) cout << val.first << ' ' << val.second << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
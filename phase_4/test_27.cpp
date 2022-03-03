
/*          ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        AMMI JAAN KEHTI THI
        ▀▄▀▄▀▄████▄█▄█▄█▄█████       KOI CODE CHHOTA NAHI HOTA OR...
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██
                ▀▀    ▀▀ ▄▄██▀       @author : Dhruv_Vavliya           */


//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double

#define  fix fixed<<setprecision(15)
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



void solve(){

    int a1 ,a2;
    vi ans(6);
    set<int> st = {4,8,15,16,23,42};

    cout << "? 1 2" << endl;
    fflush(stdout);
    cin >> a1;

    cout << "? 2 3" << endl;
    fflush(stdout);
    cin >> a2;

    int vache;
    for(auto x : st){
        if( a1%x == 0 and a2%x == 0 ){
            if( st.find(a1/x) != st.end() and st.find(a2/x) != st.end() and a1/x!=x and a2/x!=x ){ vache = x ; break; }
        }
    }
    
    ans[0] = a1/vache;
    ans[1] = vache;
    ans[2] = a2/vache;


    cout << "? 4 5" << endl;
    fflush(stdout);
    cin >> a1;

    cout << "? 5 6" << endl;
    fflush(stdout);
    cin >> a2;

    for(auto x : st){
        if( a1%x == 0 and a2%x == 0 ){
            if( st.find(a1/x) != st.end() and st.find(a2/x) != st.end()  and a1/x!=x and a2/x!=x ){ vache = x ; break; }
        }
    }
    
    ans[3] = a1/vache;
    ans[4] = vache;
    ans[5] = a2/vache;

    cout << "! ";
    disp(ans)

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
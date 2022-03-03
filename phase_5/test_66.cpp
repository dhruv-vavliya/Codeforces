
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

lli n ,m;

void go( vector<pll> &v ,vl &d ,vl &ans ){

    set< pair< lli ,lli> > st;              // index , robot ID
    for(auto it : v){                       // take all even posed robots
        lli id = it.second;
        if( d[id] == 0 ){                  // left direction  <-
            if( st.size() == 0 ) st.insert( {-it.first ,id} );
            else{
                auto cur = st.end();        // take biggest or nearest right direction
                cur--;
                lli time = ( it.first - (*cur).first )/2;
                ans[id] = time;
                ans[ (*cur).second ] = time;
                st.erase(cur);
            }  
        }
        else{                               // right direction  ->
            st.insert( {it.first ,id} );
        }
    }

    while( st.size() > 1 ){

        auto it = st.end();
        it--;
        auto r = *it;
        it--;
        auto l = *it;

        st.erase( l );
        st.erase( r );

        lli time = ( m - r.first + m - l.first  )/2;
        ans[l.second] = time;
        ans[r.second] = time;
    }

}





void solve(){

    cin  >> n >> m;

    vector<pair<lli ,lli>> even ,odd;    // index  , robot id
    vl ans(n+1 ,-1) ,d(n+1);
    lli temp;

    for(int i=1 ;i<=n ;i++){
        cin >> temp;
        if( temp&1 ) odd.pb( {temp ,i} );           // even-even collide
        else even.pb( {temp ,i} );                  // odd-odd collide
    }

    for(int i=1 ;i<=n ;i++){
        char c;
        cin >> c;
        if( c == 'R' ) d[i] = 1;
        else d[i] = 0;
    }    

    sort(all(even));
    sort(all(odd));

    go( even ,d ,ans );
    go( odd ,d ,ans );

    disp1(ans);
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
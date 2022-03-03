
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



void solve(){
    
    
    string s;
    cin >> s;
     

    stack<char> st;
    int ans=0;
    int n = s.size();

    for(int i=0 ;i<n; i++){ 
        if( s[i] == '<' ) st.push(s[i]);
        else if( s[i] == '{' ) st.push(s[i]);
        else if( s[i] == '(' ) st.push(s[i]);
        else if( s[i] == '[' ) st.push(s[i]);
        else if(s[i] == '>'){
            if( st.empty() ){ cout << "Impossible" << endl; return; }
            else if( st.top() == '>' || st.top() == '}' || st.top() == ')' ){ cout << "Impossible" << endl; return; }
            else if( st.top()!='<' ) ans++ ,st.pop();
            else st.pop();
        }
        else if(s[i] == '}'){
            if( st.empty() ){ cout << "Impossible" << endl; return; }
            else if( st.top() == '>' || st.top() == '}' || st.top() == ')' ){ cout << "Impossible" << endl; return; }
            else if( st.top()!='{' ) ans++ ,st.pop();
            else st.pop();
        }        
        else if(s[i] == ')'){
            if( st.empty() ){ cout << "Impossible" << endl; return; }
            else if( st.top() == '>' || st.top() == '}' || st.top() == ')' ){ cout << "Impossible" << endl; return; }
            else if( st.top()!='(' ) ans++ ,st.pop();
            else st.pop();
        }
        else if(s[i] == ']'){
            if( st.empty() ){ cout << "Impossible" << endl; return; }
            else if( st.top() == '>' || st.top() == '}' || st.top() == ')' ){ cout << "Impossible" << endl; return; }
            else if( st.top()!='[' ) ans++ ,st.pop();
            else st.pop();
        }
    }

    if( st.size() != 0 ) cout << "Impossible" << endl;
    else cout << ans << endl;
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
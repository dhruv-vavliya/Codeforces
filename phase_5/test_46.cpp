
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
bool     comp(int x, int y)  { return x > y; }
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



int occur(string s ,int n){

    int c=0;
    for(int i=1 ;i<=n-6 ;i++){
        if( s[i] == 'a' ){
            if( s.substr(i ,7) == "abacaba" ) c++;
        }
    }
    return c;
}


void solve(){

    int n;
    string s;
    cin >> n >> s;
    s = '#' + s;

    //  abacaba
    int o = occur(s ,n); 
    if( o == 1 ){
        cout << "Yes" << endl;
        for(int i=1 ;i<=n ;i++){
            if( s[i] == '?' ) s[i] = 'd';
        }
        cout << s.substr(1) << endl;
        return; 
    }
    else if(o>1) { cout << "No" << endl; return; }

    for(int i=1 ;i<=n-6 ;i++){

        int c=0;
        string temp =s;
        if( s[i] == 'a' || s[i] == '?' ) c++ ,temp[i] = 'a';
        if( s[i+1] == 'b' || s[i+1] == '?' ) c++ ,temp[i+1] = 'b';
        if( s[i+2] == 'a' || s[i+2] == '?' ) c++ ,temp[i+2] = 'a';
        if( s[i+3] == 'c' || s[i+3] == '?' ) c++ ,temp[i+3] = 'c';
        if( s[i+4] == 'a' || s[i+4] == '?' ) c++ ,temp[i+4] = 'a';
        if( s[i+5] == 'b' || s[i+5] == '?' ) c++ ,temp[i+5] = 'b';
        if( s[i+6] == 'a' || s[i+6] == '?' ) c++ ,temp[i+6] = 'a';

        if( c == 7 ){


            if( occur(temp ,n) > 1 ) continue;

            cout << "Yes" << endl;
            for(int i=1 ;i<=n ;i++){
                if( temp[i] == '?' ) temp[i] = 'd';
            }
            cout << temp.substr(1) << endl;
            return;
        }
    }

    cout << "No" << endl;
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
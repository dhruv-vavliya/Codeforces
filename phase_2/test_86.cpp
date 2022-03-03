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
#define  disp1(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  disp2(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    string s;
    cin >> s;

    int a = count(all(s),'a');
    int n = s.size();
    if( (n-a)%2 !=0 ){
        cout << ":(" << endl;
        return;
    }


    // baba
    int c=0 ,m = (n-a)/2 ,m1 =(n-a)/2 ;
    string t1,t2;
    
    int i=n-1 ,ans=1;
    while( m1-- ){
        if( s[i]== 'a' ){
            ans=0;
            break;
        }
        t1 += s[i];
        i-=1;
    }
    if(!ans){
        cout << ":(" << endl;
        return;
    }
    reverse(all(t1));

    for(int j=0 ;j<=i ;j++  ){
        if(s[j] == 'a') c++;
        else t2 += s[j];
    }
    // cout << t1 << endl;
    // cout << t2  << endl;

    if(c==a and t1 == t2){
        cout << s.substr(0,a+m) << endl;
    }
    else cout << ":(" << endl;





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
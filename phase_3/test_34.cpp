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
    string s;
    cin >> s;
    int n =  s.size();
    s = '0' + s;

    int d=0,l=0,u=0 ,c1=0,c2=0,c3=0;
    for(int i=1 ;i<=n ;i++){
        if( isdigit(s[i]) ) d=i ,c1++;
        else if( isupper(s[i]) ) u=i,c2++;
        else l=i,c3++;
    }
    // cout << d <<  ' ' << c1 << endl;
    // cout << u <<  ' ' << c2 << endl;
    // cout << l <<  ' ' << c3 << endl;


    if( d!=0 and  u!=0 and l!=0 ){
        cout << s.substr(1) << endl;
        return;
    }
    else if( d==0 and u==0 ){
        s[1] = '1';
        s[2] = 'A';
    } 
    else if( d==0 and l==0 ){
        s[1] = '1';
        s[2] = 'a';
    } 
    else if( u==0 and l==0 ){
        s[1] = 'A';
        s[2] = 'a';
    } 
    else if( u==0 ){
        if(c1 < c3) s[l] = 'A';
        else s[d] = 'A';
    }
    else if( d==0 ){
        if(c2 < c3) s[l] = '1';
        else s[u] = '1';
    }
    else{
        if(c1 < c2) s[u] = 'a';
        else s[d] = 'a';
    }

    cout << s.substr(1) << endl;

    







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
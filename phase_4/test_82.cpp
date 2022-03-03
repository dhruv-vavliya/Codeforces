

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int r=0 ,b=0 ,g=0;
    for(int i=0 ;i<n ;i++){
        if(s[i] == 'R') r++;
        else if(s[i] == 'G') g++;
        else if(s[i] == 'B') b++;
    }


    int r1=0 ,b1=0 ,g1=0;
    if( r>0 and b>0 and g>0 ){ cout << "BGR" << endl; return ; }
    if(r==0 and b==0){ cout << "G" <<  endl; return; }
    if(b==0 and g==0){ cout << "R" <<  endl; return; }
    if(g==0 and r==0){ cout << "B" <<  endl; return; }


    if( r>0 and b>0 ){   
        if( r>=2 and b>=2 ) cout << "BGR" << endl;
        else if(r==1 and b==1) cout << "G" << endl;
        else if( r==1 ) cout << "GR" << endl;
        else if(b==1) cout << "BG" << endl;
    }
    else if( b>0 and g>0 ){
        if( b>=2 and g>=2 ) cout << "BGR" << endl;
        else if(b==1 and g==1) cout << "R" << endl;
        else if( b==1 ) cout << "BR" << endl;
        else if(g==1) cout << "GR" << endl;
    }
    else if( g>0 and r>0 ){    //  b ,
        if( g>=2 and r>=2 ) cout << "BGR" << endl;
        else if(g==1 and r==1) cout << "B" << endl;
        else if( g==1 ) cout << "BG" << endl;
        else if(r==1) cout << "BR" << endl;
    }    

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
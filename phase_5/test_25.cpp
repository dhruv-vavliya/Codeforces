
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



void solve(){
    int n;
    cin >> n;

    vector< pair<int ,int> > ans;
    
    for(int i=3 ;i<n ;i++){                  // except 2,4,16,n  -make all other 1
        if( i == 4 || i == 16 ) continue;
        ans.pb( {i ,i+1} ); 
    }                                        // except 1,2,4,16 ,  n-4 + log16(10^5) = 5 + 2 + 2
                                             //                    n-4+5+2+2 = n+5  exact you know :)

    //   1   2   4   16   n 
    if(n>16){
        int temp = n;
        while( temp!=1 ){
            ans.pb( {n,16} );
            temp = ceil((double)temp/16);
        }
    }
    if(n>=16){
        ans.pb( {16,4} );
        ans.pb( {16,4} );
    }
    else {
        // 1 2 4 n
        int temp=n;
        while(temp !=1){
            ans.pb( {n,2} );
            temp = ceil((double)temp/2);
        }
    }
    if(n>=4){
        ans.pb( {4,2} );
        ans.pb( {4,2} );
    }

    cout << ans.size() << endl;
    for(auto val : ans) cout << val.first << ' ' << val.second << endl;

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
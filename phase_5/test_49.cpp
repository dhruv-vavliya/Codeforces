
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

int n,k;


void solve(){

    cin >> n>> k;
    int y=1;

    int ans[n+1][n+1];
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++) ans[i][j] = 0;
    }


    while( k>0 ){
        int i=1 ,j=y ,flag=0;

        while( k>0 and i<=n and j<=n ){
            ans[i][j] = 1;
            k--;
            i++;
            j++;

            if( !flag and j>n and i<=n ){
                j=1;
                flag=1;
            }
        }
        y++;
    }

    int t1=0 ,t2=n+1 ,t3=0 ,t4=n+1;
    for(int i=1 ;i<=n ;i++){
        int c=0;
        for(int j=1 ;j<=n ;j++){
            c += ans[i][j];
        }
        t1 = max(t1 ,c);
        t2 = min( t2 ,c );
    }


    for(int i=1 ;i<=n ;i++){
        int c=0;
        for(int j=1 ;j<=n ;j++){
            c += ans[j][i];
        }
        t3 = max(t3 ,c);
        t4 = min( t4 ,c );
    }
 
    cout << (t2-t1)*(t2-t1) + (t3-t4)*(t3-t4) << endl;
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            cout << ans[i][j];
        }cout << endl;
    }

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
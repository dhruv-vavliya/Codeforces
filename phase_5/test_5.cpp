

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
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){

    int n;
    cin >> n;

    vi a(n+1);
    for(int i=1 ;i<=n ;i++) cin >> a[i];

    int mx = 0;
    vi a1(n+1) ,a2(n+1);
    int remain=1;
    set<int> s1 ,s2;
    for(int i=1 ;i<=n ;i++) s1.insert(i) ,s2.insert(i);

    for( int i=1 ;i<=n ;i++ ){
        if( a[i] > mx ){
            a1[i] = a[i];
            a2[i] = a[i];
            mx = a[i];

            s1.erase(a[i]);
            s2.erase(a[i]);
        }
        else{
            a1[i] = *s1.begin();
            s1.erase(s1.begin());

            auto it = s2.lb(a[i]);
            it--;
            a2[i] = *it;
            s2.erase(it);
        }
    }

    for(int i=1 ;i<=n ;i++) cout << a1[i] << ' ';
    cout << endl;
    for(int i=1 ;i<=n ;i++) cout << a2[i] << ' ';
    cout <<  endl;

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
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
#define lb   lower_bound
#define ub   upper_bound

#define  all(v) v.begin(),v.end()
bool     comp(int x, int y)  { return x > y; }
bool     is_square(lli n)    { if (pow( (lli)sqrt(n) ,2) == n) return true;   return false;}
#define  disp(v) for(auto &val : v) cout << val << ' '; cout << endl;
#define  show(m) for(auto &val : m) cout << val.first << ' ' << val.second << endl; cout << endl;


/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    int n,k;
    cin >> n >> k;

    vector<string> a(n+1);
    for(int i=1 ;i<=n ;i++){
        string temp;
        cin >> temp;
        a[i] = '0' + temp;
    }

    int ans=0 ,x=1 ,y=1;
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            int temp=0;
            if(  a[i][j] =='.' ){
               
                int l=0 ,r=0 ,temp=0;
                while( l<k and i-l>=1 and a[i-l][j] == '.' ) l++;
                while( r<k and i+r<=n and a[i+r][j] == '.' ) r++;
                temp += max(0,l+r-k);

                l=0,r=0;
                while( l<k and j-l>=1 and a[i][j-l] == '.' ) l++;
                while( r<k and j+r<=n and a[i][j+r] == '.' ) r++;
                temp += max(0,l+r-k);

                if(ans < temp){
                    ans = temp;
                    x = i;
                    y = j;
                }
            }
        }
    }

    cout << x << ' ' << y << endl;


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
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
#define  lli long long int
#define  li long int
#define  ull unsigned long long
#define  ld long double
#define  all(v) v.begin(),v.end()
#define  disp(v) for(int i=0 ;i<v.size() ;i++) cout << v[i] << ' '; cout << endl;
#define  sum(v,a,b) accumulate(v+a,v+b,0)
#define  fix fixed<<setprecision(10)
struct   mone{ int value = -1; };
#define  mod 1000000007
#define  M 998244353
const    int N = 2e5 + 5;
using    namespace std;

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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using    namespace __gnu_pbds;
typedef  tree < int, null_type, less < int > , rb_tree_tag, tree_order_statistics_node_update > ordered_set;


 
/*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*         WELCOME TO BATTLEFIELD         =*=*=*=*=*=**=*=*==*=*=*=*=*==*=*/
/*========================================================================================================*/



void solve(){
    int h,w;
    cin >> h >> w;

    char a[h][w];
    for(int i=0 ;i<h; i++){
        for(int j=0 ;j<w ;j++) cin >> a[i][j];
    }

    if(h<3 and w<3){
        cout << "NO" << endl;
        return;
    }


    int x=-1 ,y=-1 ,met=0;
    for(int i=0 ;i<h ;i++){
        for(int j=0 ;j<w ;j++){
            if( i>0 and i<h-1 and j>0 and j<w-1 and  a[i][j] == '*' and a[i+1][j] == '*' and a[i][j+1] == '*' and a[i][j-1] == '*' and a[i-1][j] == '*'  ){
                x=i;
                y=j;
                met=1;
                break;
            }
        }
        if(met) break;
    }

    if(x == -1){
        cout << "NO" << endl;
        return;
    }

    int ans=1;
    for(int i=0 ;i<h ;i++){
        for(int j=0 ;j<w ;j++){
            if( i!=x and j!=y and a[i][j] == '*' ){
                ans=0;
                break;
            }
        }
        if(!ans) break;
    }

    if(!ans){
        cout << "NO" << endl;
        return;
    }

    int i=y ,flag=0;
    while( i>=0 ){
        if(flag and a[x][i] == '*'){
            ans=0;
            break;
        }
        if(a[x][i] == '.') flag=1;
        i-=1;
    }
    if(!ans){
        cout << "NO" << endl;
        return;
    }

    i=y;
    flag=0;
    while( i<w ){
        if(flag and a[x][i] == '*'){
            ans=0;
            break;
        }
        if(a[x][i] == '.') flag=1;
        i+=1;
    }
    
    if(!ans){
        cout << "NO" << endl;
        return;
    }


    i=x ,flag=0;
    while( i>=0 ){
        if(flag and a[i][y] == '*'){
            ans=0;
            break;
        }
        if(a[i][y] == '.') flag=1;
        i-=1;
    }
    if(!ans){
        cout << "NO" << endl;
        return;
    }

    i=x,flag=0;
    while( i<h ){
        if(flag and a[i][y] == '*'){
            ans=0;
            break;
        }
        if(a[i][y] == '.') flag=1;
        i+=1;
    }
    
    if(!ans){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;



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
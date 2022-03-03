
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
bool     comp(lli x ,lli y)  { return x > y; }
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



bool f( pair< int ,pair<int ,int> > &a ,pair< int ,pair<int ,int> > &b ){

    if( a.first < b.first ) return true;
    else{
        if( a.second.first > b.second.first ) return true;
    }
    return false;
}   




void solve(){

    int n;
    cin >> n;

    // n operations
    // choose leftmost largest subarray with all zeroes
    // (r-l+1) = odd , a[ (l+r)/2 ] = i
    //           even, a[ (l+r-1)/2 ] = i


    vi ans(n+1);
    priority_queue< pair< int ,pair<int ,int> > > pq;
    pq.push( {n ,{-1,-n}} );
    int t=0;

    while( !pq.empty() ){
        auto cur = pq.top();
        int l = -cur.second.first;
        int r = -cur.second.second; 
        pq.pop();

        if( cur.first%2 == 0 ){
            int mid = (l+r-1)/2;
            ans[ mid ] = ++t;
            if( l < mid )  pq.push( {cur.first/2-1 ,{-l ,-mid + 1}} );
            if( r > mid )  pq.push( {cur.first/2   ,{-mid - 1,-r}}  );
            
        }
        else{
            int mid = (l+r)/2;
            ans[ mid ] = ++t;
            if(l < mid)  pq.push( {cur.first/2 ,{-l ,-mid + 1}} );
            if(r > mid )  pq.push( {cur.first/2 ,{-mid - 1 ,-r}} );
        }
    }

    disp1(ans)
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
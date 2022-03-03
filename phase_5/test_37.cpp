

//Let's define
#include <bits/stdc++.h>
using    namespace std;
#define  li long int
#define  lli long long int
#define  ulli unsigned lli
#define  ld long double
const    int N = 1e6;

// seive of eratothesis
int prime[N+1];

void seive(){                                   // prime factors : <= sqrt(n)
    prime[1] = 1;
    for(int i=2 ;i*i<=N ;i++ ){
        if( !prime[i] ){
            for(int j=i*i ;j<=N ;j+=i ) prime[j]=1;  // mark as not prime
        }
    }

    for(int i=2 ;i<=N ;i++){
        if( prime[i] ) prime[i] = prime[i-1];
        else prime[i] = prime[i-1] + 1;
    }
}


int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    seive();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int q = sqrt(n);
        cout << prime[n] - prime[ q ] +1 << endl;
    }
}
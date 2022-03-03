/*
            ▄▄▄▄▄ ▄ ▄ ▄ ▄
        ▄▄▄▄██▄████▀█▀█▀█▀██▄        @author
        ▀▄▀▄▀▄████▄█▄█▄█▄█████        DHRUV
        ▀▀▀▀▀▀▀▀██▀▀▀▀██▀  ▄██       VAVLIYA
                ▀▀    ▀▀ ▄▄██▀ 
        KOI CODE CHHOTA NAHI HOTA
*/

#include <bits/stdc++.h>
// #define int long long int
#define lli long long int
#define li long int
#define ull unsigned long long
#define ld long double
#define all(v) v.begin(), v.end()
#define sum(v, a, b) accumulate(v + a, v + b, 0)
#define fix fixed << setprecision(10)
#define mod 1000000007
#define M 998244353
const int N = 2e5 + 5;
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

lli power(lli x, lli y)
{
    lli ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = ans * x;
            ans %= mod;
        }
        y = y >> 1;
        x = x * x;
        x %= mod;
    }
    return ans;
}

bool comp(int x, int y) { return x > y; }
lli modInv(lli n, lli p) { return power(n, p - 2); }
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool is_squre(li n)
{
    if (power((int)sqrt(n), 2) == n)
        return true;
    return false;
}
lli add(lli a, lli b) { return (a % mod + b % mod) % mod; }
lli mult(lli a, lli b) { return (a % mod * b % mod) % mod; }

lli fact(lli n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

lli nCr(lli n, lli r, lli m)
{
    if (r == 0)
        return 1;
    return (fact(n) * modInv(fact(r), mod) % m * modInv(fact(n - r), m) % m) % m;
}

int32_t main()
{
    // @author : Dhruv Vavliya
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.size();

        int left = 0;
        int right = n - 1;
        bool flag = false;

        int temp_a = count(all(s) ,'0');
        int temp_b = count(all(s) ,'1');

        if(temp_a > a || temp_b > b){
            cout << -1 << endl;
            continue;
        }

        a -= temp_a;
        b -= temp_b;

        while (left < right)
        {
            if (s[left] != '?' and s[right] != '?' and s[left] != s[right])
            {
                flag = true;
                break;
            }

            if (s[left] != '?' and s[right] == '?')
            {
                s[right] = s[left];
                if (s[left] == '0')
                    a -= 1;
                else
                    b -= 1;
                if (a < 0 || b < 0)
                {
                    flag = true;
                    break;
                }
            }

            else if (s[right] != '?' and s[left] == '?')
            {
                s[left] = s[right];
                if (s[right] == '0')
                    a -= 1;
                else
                    b -= 1;
                if (a < 0 || b < 0)
                {
                    flag = true;
                    break;
                }
            }

            left += 1;
            right -= 1;
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        left = 0;
        right = n - 1;

        while (left < right)
        {
            if (s[left] == '?' and s[right] == '?')
            {
                if(a>=2){
                    s[left] = s[right] = '0';
                    a-=2;
                }
                else if(b>=2){
                    s[left] = s[right] = '1';
                    b-=2;
                }
                else{
                    flag = true;
                    break;
                }
            }
            left+=1;
            right-=1;
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        if(left == right){
            if(s[n/2] == '?'){
                if(a>0) s[n/2] = '0';
                else s[n/2] = '1';
            }
        }

        cout  << s << endl;

    }



}
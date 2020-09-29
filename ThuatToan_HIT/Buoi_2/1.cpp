// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     long long n, k;
//     cin>>n>>k;
//     long sum;
//     if ( k <= n )
//     {
//         sum = k/2;
//         if ( k % 2 == 0 )
//         {
//             sum -= 1;
//         }
//     }

//     return 0;
// }

// by thaiph99
#include <bits/stdc++.h>
using namespace std;

// by thaiph99
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORR(i, a, b) for (int i = a; i >= b; i--)
#define ll long long
#define pii pair<ll, ll>
#define fi first
#define se second
#define pus push_back
#define pop pop_back
#define iosb                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

/* ---------------------------------------------------------------------------- */

int main(int argc, char const *argv[])
{
    ll n, k;
    cin >> n >> k;
    if (k <= n)
        cout << (k % 2 == 0 ? k / 2 - 1 : k / 2) << endl;
    else if (k - n >= n)
        cout << 0 << endl;
    else
    {
        ll subNum = 2 * n - k;
        ll delta = subNum % 2 == 0 ? subNum / 2 : subNum / 2 + 1;
        cout << min(k / 2, delta) << endl;
    }
    return 0;
}
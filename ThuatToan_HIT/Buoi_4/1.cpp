// upcoder #TTD Ten:Tổng trong đoạn

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n+5], b[n+5], count = 0, sum = 0;
    b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        sum += a[i];
        b[i] = sum;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    
    int t;
    cin>>t;
    while ( t > 0 )
    {
        int h, k;
        cin>>h>>k;
        cout<<(b[k]-b[h-1]);
        t--;
    }
    
    return 0;
}

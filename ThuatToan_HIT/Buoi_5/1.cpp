#include <bits/stdc++.h>
using namespace std;

int sum( int n)
{
    if ( n == 1 )
    {
        return 1;
    }
    return sum(n-1) + n;
}

long GT( int n)
{
    if (n == 1 )
    {
        return 1;
    }
    return GT(n-1)*n;
}

long Fibonacii( int n)
{
    if ( n == 1 || n == 2 )
    {
        return 1;
    }
    return Fibonacii(n-1) + Fibonacii(n+2);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // cout<<"KQ = "<<sum(n);
    // cout<<"KQ = "<<GT(n);
    // cout<<"Day Fibonacii: ";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<Fibonacii(i)<<" ";
    // }
    cout<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

long Tinh( int n)
{
    if ( n  == 0 )
    {
        return 0;
    }
    return Tinh(n/10) + n%10;
}

int TimMax( int n, int Max)
{
    if ( n%10 == 0)
    {
        return Max;
    }
    Max = ( Max > n%10 ) ? Max:n%10;
    return TimMax( n/10, Max);
}


int Max2( int n)
{
    if ( n == 0)
    {
        return 0;
    }
    return max( Max2(n/10), n%10);
}
int main(int argc, char const *argv[])
{
    long n;
    cin>>n;
    cout<<"KQ = "<<TimMax(n, 0);
    cout<<"KQ = "<<Max2(n);
    cout<<" endl";
    return 0;
}

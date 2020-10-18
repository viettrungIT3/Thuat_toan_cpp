#include <iostream>
#include <math.h>
using namespace std;

int Max_Arr( int a[], int n )
{
    if ( n == 0 )
    {
        return 0;
    }
    return max( Max_Arr(a, n-1), a[n]);
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        // cout<<"Enter n = ";
        cin>>n;
    } while ( n <= 1 || n >= pow(10, 5) );
    int a[n];
    // cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin>>a[i];
        } while ( a[i] <= -10000 || a[i] >= 10000);
        
    }
    // cout<<"KQ = ";
    cout<<Max_Arr( a, n -1);
    return 0;
}

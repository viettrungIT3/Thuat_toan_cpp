#include <iostream>
#include <math.h>
using namespace std;

bool ktSCP( int n )
{
    if ( (int)(sqrt(n)) * (int)(sqrt(n)) == n )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    // cout<<"Enter n = ";
    cin>>n;
    int a[n+5];
    // cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ( ktSCP(a[i]) )
        {
            for (int j = i+1; j < n; j++)
            {
                if ( ktSCP(a[j]) && a[i] > a[j] )
                {
                    swap( a[i], a[j]);
                }
            }
        }
    }
    // cout<<"Show Array: "; 
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    
    return 0;
}

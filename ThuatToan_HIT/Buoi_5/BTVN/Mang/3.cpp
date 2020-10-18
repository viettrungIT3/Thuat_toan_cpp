#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0, temp;
        for (int j = 0; j < n; j++)
        {
            if ( a[j] % a[i] == 0 )
            {
                count++;
            }
        }
        if ( count == n )
        {
            cout<<a[i];
            count2++;
            break;
        } 
    }
    if (count2 == 0)
    {
        cout<<"-1";
    }
    
    return 0;
}

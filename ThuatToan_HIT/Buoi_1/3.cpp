#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if ( n % i == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}

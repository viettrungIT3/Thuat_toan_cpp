#include <iostream>
#include <math.h>
using namespace std;

long Max_2number( long n )
{
    if ( n < 100 )
    {
        return n;
    }
    return max( Max_2number(n/10), n%100);
}

int main(int argc, char const *argv[])
{
    long n;
    do
    {
        //cout<<"Enter n = ";
        cin>>n;
    } while ( n <= 1 || n >= pow(10,12));
    //cout<<"KQ = ";
    cout<<Max_2number(n);
    return 0;
}

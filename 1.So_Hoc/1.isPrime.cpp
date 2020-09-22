#include <iostream>
#include <math.h>
using namespace std;

// Viết một hàm kiểm tra SNT.

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    if ( isPrime(n) )
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

//De quy dung ham void

int gtAns = 1;
void gt( int n)
{
    if (n == 1 )
    {
        cout<<gtAns<<endl;
        return;
    }
    gtAns *= n;
    gt( n-1);
    return;
}

int sumAns = 0;
void sum( int n)
{
    if ( n == 0 )
    {
        cout<<sumAns<<endl;
        return;
    }
    sumAns += n;
    sum(n-1);
}

int main(int argc, char const *argv[])
{
    long n;
    cin>>n;
    //gt(n);
    sum(n);
    //cout<<"KQ = "<<gtAns;
    //cout<<" endl";
    return 0;
}

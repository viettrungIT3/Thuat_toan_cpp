#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, a[100][100], sum = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int count = 0;
    while ( count < n )
    {
        sum += a[count][count];
        count++;
    }
    
    cout<<"Sum = "<<sum<<endl;
    return 0;
}

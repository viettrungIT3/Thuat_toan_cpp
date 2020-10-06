#include <bits/stdc++.h>
using namespace std;

// void Dich( int a[], int n)
// {
//     int temp = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = a[i+1];
//     }
//     a[n-1] = temp;
// }

void Dich2( int a[], int n, int k)
{
    int temp[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        temp[(i+k)%n] = a[i];
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}

void Dich3( int a[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[abs((i-k)-n)] = a[i];
        if ( k <= i)
        {
            temp[i-k] = a[i];
        }
        else
        {
            temp[n-k-i] = a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}

int main(int argc, char const *argv[])
{
    int n, k, a[100];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    k = k % n;

    // for (int i = 0; i < k; i++)
    // {
    //     Dich( a, n);
        
    // }
    //Dich2( a, n, k);
    Dich3( a, n, k);
    cout<<"Show: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}

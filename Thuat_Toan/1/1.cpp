#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int  k = 1; k <= 6; k++)
            {
                for ( int a = 1; a <= 6; a++){
                    for ( int b = 1; b <= 6; b++) {
                        for ( int c = 1; c <= 6; c++) {
                            if ( i!=j && i!=k && i!=a && i!=b && i!=c && j!=k &&  j!=a && j!=b && j!=c && k!=a && k!=b && k!=c && a!=b && a!=c && b!=c)
                            {
                                if ( (i+j+k) == (a+b+c+1))
                                {
                                    cout<<i<<j<<k<<" "<<a<<b<<c<<endl;
                                    count++;
                                }
                                
                            }
                            
                        }
                    }
                }
            }
        }
        
    }
    cout<<"KQ = "<<count;
    return 0;
}

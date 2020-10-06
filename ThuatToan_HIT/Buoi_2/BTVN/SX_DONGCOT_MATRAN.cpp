// upcoder  #SX_DONGCOT_MATRAN

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    cin>>n>>m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < m; y++)
                {
                    if (a[i][j] < a[x][y])
                    {
                        swap( a[i][j], a[x][y]);
                    }
                    
                }
                
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

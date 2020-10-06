// upcoder  #SX_DONGCOT_MATRAN

#include <iostream>
using namespace std;

void DoiChoHaiCot(int a[][100], int m, int n, int column1, int column2)
{
   if((column1>=0 && column1<n)&&(column2>=0 && column2<n))
      for(int i=0;i<m;i++)
         swap(a[i][column1],a[i][column2]);
}

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
  	int b[100], count = 0, temp = 0;
    for (int j = 0; j < m; j++)
    {
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp += a[i][j];
        }        
        b[count++] = temp;
    }
    // cout<<"show"<<endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int x = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if ( b[i] < b[j] )
            {
                swap( b[i], b[j] );
                for (int x = 0; x < n; x++)
                {
                    swap( a[x][i], a[x][j]);
                }
                
            }
            
        }
        
    }
    
    
	for ( int i = 0; i < n; i++)
	{
		for ( int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

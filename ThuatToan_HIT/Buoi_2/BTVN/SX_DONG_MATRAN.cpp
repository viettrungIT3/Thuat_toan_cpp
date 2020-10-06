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
  	int b[100], count = 0;
  	for ( int i = 0; i < n; i++)
  	{	int temp = 1;
  		for ( int j = 0; j < m; j++)
  		{
  			temp = temp*a[i][j];
		}
		b[count] = temp;
		count++;
	}
	// cout<<"Show"<<endl;
	// for ( int i = 0; i < count; i++)
	// {
	// 	cout<<b[i]<<" "<<endl;
		
	// }
	//cout<<"Show"<<endl;
	for ( int i = 0; i < n; i++)
	{
		for ( int j = i+1; j < n; j++)
		{
			if ( b[i] > b[j] )
			{
				swap( b[i], b[j]);
				swap( a[i], a[j]);
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

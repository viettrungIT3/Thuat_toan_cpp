// upcoder      #SOTHANTHIET

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long a, b;
    cin>>a>>b;
    long sumUOCa = 0, sumUOCb = 0;
    for ( int i = 1; i < a; i++)
    {
        if ( a % i == 0)
        {
            sumUOCa += i;
        }
    }
    for ( int i = 1; i < b; i++)
    {
        if ( b % i == 0)
        {
            sumUOCb += i;
        }
    }
    //cout<<sumUOCa<<" "<<sumUOCb<<endl;
    if ( sumUOCa == b && sumUOCb == a )
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
}

// #include<iostream>
// using namespace std;
// int thanthiet(unsigned long a,unsigned long b)
// {
//  long x=0,y=0;
//  for(int i=1;i<a;i++) if(a%i==0) x+=i;
//  for(int i=1;i<b;i++) if(b%i==0) y+=i;
//  if(x==b && y==a) return 1;
//  return 0;
// }
// int main()
// {
//  unsigned long a,b;
//  for(a=0;a<=400000000000;a++)
//   for(b=a+10;b<1.5*a;b++)
//    if(thanthiet(a,b)) cout<<a<<" - "<<b<<endl;
//  system("pause");
// }
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, c;
    cin>>a>>b>>c;
    if ( a+b > c && b+c > a && a+c > b)
    {
        if ( a*a + b*b == c*c ||  b*b + c*c == a*a || a*a + c*c == b*b)
        {
            cout<<"vuong"<<endl;
        }
        else if ( a == b && b == c )
        {
            cout<<"deu"<<endl;
        }
        else if ( a == b || b == c || a == c)
        {
            cout<<"can"<<endl;
        }
        
        
        float p = (a+b+c)/2;
        cout<<"chu vi: "<<setprecision(2)<<fixed<<a+b+c<<endl;
        //printf("chu vi: %2.f\n", 2*p);
        cout<<"dien tich: "<<setprecision(2)<<fixed<<(sqrt( p * ( p - a ) * ( p - b ) * ( p - c ))) ;
        //printf("dien tich: %2f", (sqrt( p * ( p - a ) * ( p - b ) * ( p - c ))));
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}

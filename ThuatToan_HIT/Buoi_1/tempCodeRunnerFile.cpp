// upcoder      #KIEMTRATAMGIAC     Tên: Kiểm tra tam giác

#include <iostream>
#include <math.h>
using namespace std;

double ChuVi( float a, float b, float c)
{
    return 1.00*((int((a+b+c)*100))/100);
}

// double DienTich( float a, float b, float c)
// {
//     double p = (a+b+c)/2;
//     return sqrt(p*(p-a)*(p-b)*(p-c));
// }

int main(int argc, char const *argv[])
{
    float a, b, c;
    cin>>a>>b>>c;
    if ( a <= 0 || b <= 0 || c <=0 )
    {
        cout<<"NO";
    }
    else if ( a+b > c && b+c > a && a+c > b)
    {
        if ( a == b && b == c && c == a )
        {
            cout<<"deu"<<endl;
        }
        else if ((a == b || b == c || c == a) & (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a))
        {
            cout<<"vuong can";
        }
        else if ( a == b || b == c || c == a )
        {
            cout<<"can"<<endl;
        }
        else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            cout<<"vuong"<<endl;
        }
        else if ( a*a + b*b > c*c || a*a + c*c > b*b || b*b + c*c > a*a)
        {
            cout<<"tu"<<endl;
        }
        else 
        {
            cout<<"nhon"<<endl;
        }
        cout<<"chu vi: "<<(a+b+c)<<endl;
        double p = (a+b+c)/2;
        
        cout<<"dien tich: "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}

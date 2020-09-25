#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    scanf(" %f%f%f", &a, &b, &c);
    if ( a <= 0 || b <= 0 || c <=0 )
    {
        printf("NO\n");
    }
    else if ( a+b > c && b+c > a && a+c > b)
    {
        if ( a == b && b == c && c == a )
        {
            printf("deu\n");
        }
        else if ((a == b || b == c || c == a) & (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a))
        {
            printf("vuong can\n");
        }
        else if ( a == b || b == c || c == a )
        {
            printf("can\t");
        }
        else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf("vuong\n");
        }
        else if ( a*a + b*b > c*c || a*a + c*c > b*b || b*b + c*c > a*a)
        {
            printf("tu\n");
        }
        else 
        {
            printf("nhon\n");
        }
        float p = (a+b+c)/2;
        //cout<<"chu vi: "<<round((2*p) * 100) / 100 <<endl;
        printf("chu vi: %2.f\n", 2*p);
        //cout<<"dien tich: "<<round( (sqrt( p * ( p - a ) * ( p - b ) * ( p - c ))) * 100) / 100 ;
        printf("dien tich: %2f", (sqrt( p * ( p - a ) * ( p - b ) * ( p - c ))));
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    double a , b , c , rut , r1 , r2 ;
    scanf("%lf%lf%lf",&a,&b,&c);

    rut = pow(b,2) - (4 * a * c) ;

    if( a == 0 || 0 > rut)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = ((-b) + sqrt(rut) ) / (2 * a) ;
        r2 = ((-b) - sqrt(rut) ) / (2 * a) ;

        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }



    return 0;
}

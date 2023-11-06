#include<stdio.h>
int main ()
{
    double n  ;
    int note100,note50,note20,note10,note5,note2,p1,p5,p25,p10,p05,p01 ,vagses;
    
    
    
    scanf("%lf",&n);
    
    n=n*100;
    
    int x;
    x=n;
    
    printf("NOTAS:\n");
    
    note100 = x / 10000;
    vagses = x %10000;
    printf("%d nota(s) de R$ 100.00\n",note100);
    
    note50 = vagses / 5000;
    vagses = vagses %5000;
    printf("%d nota(s) de R$ 50.00\n",note50);
    
    
    note20 = vagses / 2000;
    vagses = vagses %2000;
    printf("%d nota(s) de R$ 20.00\n",note20);
    
    note10 = vagses / 1000;
    vagses = vagses %1000;
    printf("%d nota(s) de R$ 10.00\n",note10);
    
    note5 = vagses / 500;
    vagses = vagses %500;
    printf("%d nota(s) de R$ 5.00\n",note5);
    
    note2 = vagses / 200;
    vagses = vagses %200;
    printf("%d nota(s) de R$ 2.00\n",note2);
    
    
    printf("MOEDAS:\n");
    
    p1 = vagses / 100;
    vagses = vagses %100;
    printf("%d nota(s) de R$ 1.00\n",p1);
    
    p5 = vagses / 50;
    vagses = vagses %50;
    printf("%d nota(s) de R$ 0.50\n",p5);
    
    p25 = vagses / 25;
    vagses = vagses %25;
    printf("%d nota(s) de R$ .25\n",p25);
    
    p10 = vagses / 10;
    vagses = vagses %10;
    printf("%d nota(s) de R$ 0.10\n",p10);
    
    p05 = vagses / 5;
    vagses = vagses %5;
    printf("%d nota(s) de R$ 0.05\n",p05);
    
    p01 = vagses / 1;
    vagses = vagses %1;
    printf("%d nota(s) de R$ 0.01\n",p01);
    
    
    
    return 0;
}
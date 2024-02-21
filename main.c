#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int x ,x1 ,x2;
    int d;
    printf ("Entrer la valeur de a,b et c: \n");
    scanf ("%d %d %d",&a ,&b, &c);
    d = (b*b)-4*(a*c);
    printf("%d",d);
    if (d == 0)
    {
        x = -b/(2*a);
        printf ("la solution est x=%d\n ",x);
    }
    else if (d>0)
    {
        x1 = -b-sqrt(d)/(2*a);
        x2 = -b+sqrt(d)/(2*a);

        printf ("la solution sont x1=%d\n et x2=%d\n",x1,x2);
    }
    else if (d<0)
    {
        printf("la solution est impossible");
    }
    return 2;
}

#include <studio.h>
int main() {

    float A=0.7f, B=0.3f;
    int a, b;
    float a1, b1;
    printf("叫块ㄢタ俱计:");
    scanf("%f,%f", &A, &B);
    a = int(A);
    a1 = A - a;
    b = int(B);
    b1 = B - b;
    
    while (a != 0 && b != 0)
    {
        if (a >= b)
        {
            a = a % b;
        }
        else if (a < b)
        {
            b = b % a;
        }
    }

    if (a >= b && a > 0 && a1 == 0 && b1 == 0)
         {
             printf("\n程そ计琌:%d", a);
         }
    else if (b>=a && b>0 && a1 == 0 && b1 == 0)
         {
             printf("\n程そ计琌:%d", b);
         }
    else
         {
            printf("Error");
         }

    return 0;
}


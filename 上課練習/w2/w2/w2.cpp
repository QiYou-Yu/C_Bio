#include <stdio.h>
void ans2(float);
//void ans8(int);
int main()
{
    float num = 0;
    printf("請輸入數字(十進位):");
    scanf_s("%f", &num);
    ans2(num);
    printf("\n");
    //ans8(num);
}
void ans2(float num)
{
    int z = (float)num;//取整個數值中的整數
    float f = num - z;	//數值-整數=小數 

    int i = 0, r[12];
    while (z > 0) 	//取到數值/2=0為止 
    {
        r[i] = z % 2;
        z /= 2;
        i++;
    }
    i--;

    printf("十進位轉二進位為:");
    for (;i >= 0;i--)
    {
        printf("%d", r[i]);
    }
    printf(".");

    int j = 0;
    float w[12];
    while (f > 0)
    {
        w[j] = f * 2;
        int x = (float)w[j];
        f = w[j] - x;
        j++;
        printf("%d", x);
    }
    
}


//#include <iostream>
//int main() {
//
//    float A=0.7f, B=0.3f;
//    int a, b;
//    float a1, b1;
//    printf("請輸入兩個正整數:");
//    scanf_s("%f,%f", &A, &B);
//    a = int(A);
//    a1 = A - a;
//    b = int(B);
//    b1 = B - b;
//    
//    while (a != 0 && b != 0)
//    {
//        if (a >= b)
//        {
//            a = a % b;
//        }
//        else if (a < b)
//        {
//            b = b % a;
//        }
//    }
//
//    if (a >= b && a > 0 && a1 == 0 && b1 == 0)
//         {
//             printf("\n最大公因數是:%d", a);
//         }
//    else if (b>=a && b>0 && a1 == 0 && b1 == 0)
//         {
//             printf("\n最大公因數是:%d", b);
//         }
//    else
//         {
//            printf("Error");
//         }
//
//    return 0;
//}


//#include <iostream>
//#include <time.h>
//int main() {
//
//    char A, B;
//    printf("請輸入兩個正整數:");
//    scanf_s("%c,%c", &A, &B);
//
//    while (A > 48 && A <= 57 && B > 48 && B <= 57)
//    {
//        while (A != 0 && B != 0)
//        {
//            if (A >= B)
//            {
//                A = A % B;
//            }
//            else if (A < B)
//            {
//                B = B % A;
//            }
//        }
//    
//    
//    
//    if (A >= B)
//    {
//        printf("\n最大公因數是:%c", A);
//    }
//    else
//    {
//        printf("\n最大公因數是:%c", B);
//    }
//    
//
//    }printf("\nError");
//
//}
//

//#include <iostream>
//#include <time.h>
//int main(){
//
//        int A, B;
//        printf("請輸入兩個正整數:");
//        scanf_s("%d,%d", &A, &B);
//        while (A != 0 && B != 0 )
//        {
//            if (A >= B)
//            {
//                A = A % B;
//            }
//            else if (A < B)
//            {
//                B = B % A;
//            }
//        }
//      
//        if (A >= B)
//        {
//            printf("\n最大公因數是:%d", A);
//        }
//        else
//        {
//            printf("\n最大公因數是:%d", B);
//        }
//        return 0;
//    }
//       



  //  srand(time(NULL));

  //  int a = (rand() % 100) + 1;      //使用亂數產生一個要被猜的數字
  //  printf("a=%d", &a);                //顯示亂數數字a
  //  int x = 5, num, upper = 100, lower = 1;
  //  //可以猜五次，num是猜的數字



  //  for (int i = 1;i <= x;i++)       //設迴圈:猜的次數
  //  {
  //      printf("第%d次:", i);
  //      scanf_s("%d", &num);

  //      if (num < a)
  //      {
  //          printf("猜錯囉，繼續猜%d~%d", num, upper);
  //          lower = num;
  //      }
  //      if (num > a)
  //      {
  //          printf("猜錯囉，繼續猜%d~%d", lower, num);
  //          upper = num;
  //      }
  //      if (num == a)
  //      {
  //          printf("答對囉");
  //      }

  //      return 0;

  //      }
  //}

//HW3取餘數，在互除，放在一個地方,要先判斷兩數大小


    /*  EX1
    int i = -1;
    unsigned int ui = -1;
    char c = -1;
    unsigned char uc = -1;
    printf("i -> int : %d, unsigned int:%u\n", i, i);
    printf("ui -> int : %d, unsigned int:%u\n", ui, ui);
    printf("c -> int : %d, unsigned int:%u\n", c, c);
    printf("c -> int : %d, unsigned int:%u\n", uc, uc);
    if (i > ui)
    {
        printf("i>ui\n");
    }
    else */

    //EX2
    //int a;
    //scanf_s("%d", &a);
    //switch (a)
    //{
    //case 1:printf("a=1\n");break;
    //case 2:printf("a=2\n");break;
    //case 3:printf("a=3\n");break;
    //}

   /* EX3
    int a;
    scanf_s("%d", &a);
    (a == 1) ? printf("a=1") : (a == 2) ? printf("a=2") : (a == 3) ? printf("error") :*/

    /* EX4
     int a;
     scanf_s("%d", &a);
     a = (a < 5) ? 0 : 10;
     printf("a=%d", a);*/

   /* EX5
    int a, b, c, d;
    printf("please input four numbers:");
    scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    printf("Max = %d", max);*/


   /* EX6
    int a;
    float x,y;
    printf("請選擇運算類別:(1)加法。(2)減法。(3)乘法。(4)除法。\n");
    scanf_s("%d", &a);
    if (a == 1)
    {
        printf("被加數:");
        scanf_s("%f", &x);
        printf("\n加數:");
        scanf_s("%f", &y);
        printf("\n%f+%f=%.2f\n", x, y, x + y);
    }
    if (a == 2)
    {
        printf("被減數:");
        scanf_s("%f", &x);
        printf("\n減數:");
        scanf_s("%f", &y);
        printf("\n%f-%f=%.2f\n", x, y, x - y);
    }
    if (a == 3)
    {
        printf("被乘數:");
        scanf_s("%f", &x);
        printf("\n乘數:");
        scanf_s("%f", &y);
        printf("\n%f*%f=%.2f\n", x, y, x * y);
    }
    if (a == 4)
    {
        printf("被除數:");
        scanf_s("%f", &x);
        printf("\n除數:");
        scanf_s("%f", &y);
        printf("\n%f/%f=%.2f\n", x, y, x / y);
    }*/

   /*float h, w;
 
    printf("please input your height(m):");
    scanf_s("%f", &h);

    printf("\nplease input your weight(kg):");
    scanf_s("%f", &w);
 
    float bmi;
    bmi = w / h * h;
    printf("\nYour BMI is %f",bmi );



    if (bmi < 18.5)
    {
        printf("體重過輕");
    }
    if (bmi >= 18.5 && bmi<24)
    {
        printf("體重正常");
    }
    if (bmi >= 24 && bmi <= 26.9)
    {
        printf("過重");
    }
    if (bmi >= 27 && bmi <= 29.9)
    {
        printf("輕度肥胖");
    }
    if (bmi >= 30 && bmi <= 34.9)
    {
        printf("中度肥胖");
    }
    if (bmi > 35)
    {
        printf("重度肥胖");
    }
    system("pause");*/
//case 1:case 2:case 3:printf("a= 999");break;v















// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

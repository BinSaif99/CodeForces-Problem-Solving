#include<stdio.h>

int main()
{
    int n,a,b,c=1378;

    scanf("%d",&a);

    b = pow(c,a);
    b = b%10;

    printf("%d", b);

    return 0;

}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    if(n==0)
//        printf("1\n");
//    else if(n%4==1)
//    {
//        printf("8\n");
//    }
//    else if(n%4==2)
//    {
//        printf("4\n");
//    }
//    else if(n%4==3)
//    {
//        printf("2\n");
//    }
//    else
//    {
//        printf("6\n");
//    }
//    return 0;
//}

#include<stdio.h>
int add(int, int);
int sub(int, int);
int multiply(int, int);
int division(int, int);
int main()
{   char r; do{
    int a,b,c;
    printf("1.addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter your choice : ");
    scanf("%d",&c);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    switch(c)
    {  case 1: printf("sum=%d",add(a,b));
               break;
       case 2:if(a>b)
                printf("\nDifference is =%d",sub(a,b));
               else
               printf("\nDifference is =%d",sub(b,a));
               break;
       case 3: printf("\nProduct is =%d",multiply(a,b));
                break;
       case 4:  
                printf("\nQuotient is =%d",division(a,b));              
               break;
       default:printf("Enter valid input: ");
                break;        
}
printf("\nDo you want to continue (Y/N) ");
scanf(" %c",&r);}while(r=='y');
    
    return 0;
}int  add(int a,int b)
{
    int sum;
    sum=a+b;
   return sum;

}
int sub(int a,int b)
{
    int sub;
    sub=a-b;
    return sub;
}
int multiply(int a,int b)
{
    int product;
    product=a*b;
   
    return product;
}
int division(int a,int b)
{
    int div;
    div=a/b;
    
    return div;
}
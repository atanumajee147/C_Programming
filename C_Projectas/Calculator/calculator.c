// This is a  Basic Calculator 
// read the pdf for output this c program 
# include<stdio.h>

int main(){
    char o;
    int a;
    int b;
printf("Enter Your operator :");
scanf("%c",&o);
printf("Enter The Fst Opodants : ");
scanf("%d",&a);
printf("Enter The Second Opodants : ");
scanf("%d",&b);
switch (o)
{
case '+':
    printf("Your answer is %d + %d = %d \n",a,b,a+b);
    break;
case '-':
    printf("Your answer is %d - %d = %d \n",a,b,a-b);
    break;
case '*':
    printf("Your answer is %d * %d = %d \n",a,b,a*b);
    break;
case '/':
    printf("Your answer is %d / %d = %d \n",a,b,a/b);
    break;

default:
printf(" Your Entry is rong ! \n");
    break;
}
return 0;
}
// Encrypt Your text easy 
# include<stdio.h>

void encrypt(char *c){
    char *ptr =c ;
while (*ptr !='\0')
{
  *ptr = (*ptr + 1);
  ptr++;
}


}
int main(){
    char c[600] ="";
    printf("Enter Your Texr : ");
gets(c);
    encrypt(c);
    printf("Your Encrypted Text  is : %s",c);
return 0;
}
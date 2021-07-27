// Decrypt Your Encrypt text (copy your encrypt text and paste hare) 
# include<stdio.h>

void decrypt(char *c){
    char *ptr =c ;
while (*ptr !='\0')
{
  *ptr = (*ptr - 1);
  ptr++;
}


}
int main(){
    char c[600] = "";
     printf("Copy Your Encrypt text and Paste Hare  : ");
scanf("%s",c);
    decrypt(c);
    printf("Decrypted string is : %s",c);
return 0;
}
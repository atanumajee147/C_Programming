// Create a txt file and Multiplication Table Generator

# include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    printf("Enter the interger the Table of :");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");
      fprintf(ptr,"\t \t ******** Multiplication Table Generator ******** \n \n");
      fprintf(ptr," Your Multiplication table is :  \n");
      for(int i =0;i<10;i++){
fprintf(ptr," \t \t %d X %d = %d \n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("Sucessfully Generated the file Table.txt .Click to open  Multipication Table of :  %d  ",num);
return 0;
}
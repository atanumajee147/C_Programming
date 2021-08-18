# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int ManWaterFire(char you,char computer){  //Function Defination
    // Returns 1 if you win,-1 if you lose and 0 if draw 
    //Condation for draw Matchs
    /*case covered
     water = water 
     Man  =  Man 
     Fire = Fire */
    if(you == computer){
        return 0;
    }
    // Non  Draw Condations
     
    //  May I covared this 3 cases .......
 
    // frist case Man - Fire  & Fire -Man
    
    if (you == 'm' && computer ==  'f'){
        return -1;
    }
    else if(you == 'f' && computer ==  'm'){
        return 1;    
    }
//  Second Case Man - water & water - Man
    
    if (you == 'm' && computer ==  'w'){
        return 1;
    }
    else if (you == 'w' && computer ==  'm'){
        return -1;
}
//  Third case    Fire -water & water - Fire
    
    if (you == 'f' && computer ==  'w'){
        return -1;
    }
    else if (you == 'w' && computer ==  'f'){
        return 1;
}
   
    
}
int main(){
    char n [20];
    char you, computer;
    srand(time(0));

    // 100 devided by 3 parts for use rendam number generate 

   int number = rand ()%100 + 1;

    if (number<33){
 computer ='m'; 
    }
    else if (number >33 && number <66){
computer  = 'w';
    }
    else{
        computer = 'f';
    }
    printf("\n");
   printf("Please Enter Your  Name for Play :  "); //  example --> Please Enter Your Name for Play : Atanu 
   gets(n); // copy your name to n 
   // using just for a good look
   printf("\n  \t \t ^^^^^^^^^^^^^^^^^^^^^^ %s v/s Computer ^^^^^^^^^^^^^^^^^^^^^^ \n ",n); // Atanu v/s Computer 

    printf(" \n  @%s please select  'm' for Man, 'w' for Water and 'f' for Fire :",n); // Select any quary 

    scanf("%c",&you); // Copy The Quary

    int result = ManWaterFire(you,computer); // Function Call
    printf(" \n \n  %s your chose '%c' and Computer chose '%c' \n ",n,you,computer);
                       // output Your Result 
    if(result == 0){
        printf(" \n \t \t ******** Try again :: -->> Game Draw !\n \n  ");
    }

else if(result == 1){
        printf(" \n \t \t ^_^  ^_^  ^_^  ^_^ Congaculation ^_^  ^_^  ^_^  ^_^ :: -->> You Win ! \n \n  ");
    }
    else{
        printf("\n  \t \t Batter luck Next time :: -->> You Lose ! \n ");
    }

return 0;
}
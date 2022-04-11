#include <stdio.h>
#include <stdlib.h>

int main(){

    int age=0;
    int id=0;
    int money=0;
    int num=0;
    int bol=0;
    int smoney=0;
    printf("########Welcome To The Lottery Game########\n");
    printf("Enter Your Age:");
    scanf("%d",&age);
    printf("Enter Your Credit Card Balance:");
    scanf("%d",&smoney);

    if(smoney>1000){

            while(age > 17){
        printf("Enter Your id:");
        scanf("%d",&id);
        while(id==1){
                printf("Enter Your Money:");
                scanf("%d",&money);
                if(money >999){

                    printf("Enter Your Number");
                    scanf("%d",&num);
                    if(num==111){
                        smoney=smoney-money;
                        printf("You Win\n");
                        smoney+=money*10;
                        printf("This is Your New Credit Balance:%d\n",smoney);;
                        printf("If You want To Continue Press 2 If not Press Any Key To Exit:");
                        scanf("%d",&bol);
                        if(bol==2){
                            printf("You Can Play Again\n");
                        }else{
                            printf("Come Again");
                            exit(0);
                        }

                    }
                    else{
                            printf("You Lose Try Again\n");
                            smoney=smoney-money;
                            printf("This is Your Remain Money:%d\n",smoney);

                                if(smoney < money){
                                    printf("You Don't Have Enough Money Please Come Again");
                                    exit(0);
                                }
                                printf("If You want To Continue Press 2 If not Press Any Key To Exit:");
                                scanf("%d",&bol);
                                if(bol==2){
                                    printf("You Can Play Again\n");
                                }else{
                                    printf("Come Again");
                                    exit(0);
                                }


                        }
                }

        }
    }

    }



    printf("You cannot play the game");




}









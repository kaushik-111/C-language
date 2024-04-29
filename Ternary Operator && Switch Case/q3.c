#include<stdio.h>
int main(){
int choise , choise_1 ;

printf("Press 1 for English\n");
printf("Press 2 for Hindi\n");
printf("Press 3 for Gujarati\n");

printf("enter a choise:");
scanf("%d",&choise);

switch(choise){
    case 1:
    printf("Enter 1 for Internet Recharge\n");
    printf("Enter 2 for Top-up Recharge\n");
    printf("Enter 3 for Special Recharge\n");
    printf("enter your choise:-");
    scanf("%d",&choise_1);
    printf("\n");
    break;

    case 2:
    printf("Internet Recharge ke liye 1 dabaiye\n");
    printf("Top-up Recharge ke liye 2 dabaiye\n");
    printf("Special Recharge ke liye 3 dabaiye\n");
    scanf("enter your choise:-");
    scanf("%d",&choise_1);
    printf("\n");
    break;

    case 3:
    printf("Internet Recharge mate 1 dabavo\n");
    printf("Top-up Recharge mate 2 dabavo\n");
    printf("Special Recharge mate 3 dabavo\n");
    scanf("%d",&choise_1);
    printf("\n");
    break;

    default:
            printf("Invalid Choice");
            printf("\n");
            break;

}

switch(choise_1){
    case 1:
    choise == 1 ? printf("You have successfully done internet Recharge.") : choise == 2 ? printf("Aapne safaltapurvak Internet Recharge kar liya he.") : printf("Tame safaltapurvak Inter Recharge karyu chhe.");
    break;

    case 2:
    choise == 1 ? printf("You have successfully done Top-up Reacharge.") : choise == 2 ?  printf("Aapne safaltapurvak Top-up Recharge kar liya he.") : printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
    break;

    case 3:
    choise == 1 ? printf("You have successfully done Special Reacharge.") : choise == 2 ? printf("Aapne safaltapurvak Special Recharge kar liya he.") : printf("Tame safaltapurvak Special Recharge karyu chhe.");
    break;

    default:
            printf("Invalid Choice");
            printf("\n");
           

}


}
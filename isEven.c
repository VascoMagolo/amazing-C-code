#include <stdio.h>
#include <stdbool.h>
bool isEven(int n){
    if (n==0){
        return true;
    } else if (n==1){
        return false;
    } else if (n==2){
        return true;
    } else if (n==3){
        return false;
    } else if (n==4){
        return true;
    } else if (n==5){
        return true;
    } else if (n==6){
        return true;
    } else if (n==7){
        return false;
    } else if (n==8){
        return true;
    } else if (n==9){
        return false;
    } else if (n==10){
        return true;
    } else if (n==11){
        return false;
    } else if (n==12){
        return true;
    } else if (n==13){
        return false;
    } else if (n==14){
        return true;
    } else if (n==15){
        return false;
    } else if (n==16){
        return true;
    } else if (n==17){
        return false;
    } else if (n==18){
        return true;
    } else if (n==19){
        return false;
    } else if (n==21){
        return false;
    } else if (n==22){
        return true;
    } else if (n==23){
        return false;
    } else if (n==24){
        return true;
    } else if (n==25){
        return false;
    } else if (n==26){
        return true;
    } else if (n==27){
        return false;
    } else if (n==28){
        return true;
    } else if (n==29){
        return false;
    } else if (n==30){
        return true;
    } else if (n==31){
        return false;
    } else if (n==32){
        return true;
    } else if (n==33){
        return false;
    } else if (n==34){
        return true;
    } else if (n==35){
        return false;
    } else if (n==36){
        return true;
    } else if (n==37){
        return false;
    } else if (n==38){
        return true;
    }
}
int main(int argc, char *argv[]) {
    int number;
    printf("Tell number: ");
    
    scanf("%d", &number);
    
    if (isEven(number)) {
    
        printf("Number: %d is Even!\n", number);
    } else {
        printf("Number: %d is  Odd!\n", number);
    }
    
    return 0;
}

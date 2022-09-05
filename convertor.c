//
// Created by User on 03/09/2022.
//

void choice();
int decimaltobinary(int decimal);
int decimaltooctal(int dec);
void decimaltohexadecimal(int decimal);
int binarytodecimal(int binary);
void binarytooctal(int binary);
void binarytohexa(int binary);


#include "stdio.h"

int main(){

    int decimal=0;
    int choose=0;
    int binary=0;
    int octal=0;

    printf("choose your converting system\n");

    choice();
    scanf("%d",&choose);
    while (choose != 3) {
        choice();
    switch (choose) {



            case 1:
                printf("\nplease enter your decimal number");
            scanf("%d", &decimal);
            printf("decimal %d is binary %d:\n ", decimal, decimaltobinary(decimal));
            printf("decimal %d is octal %d:\n", decimal, decimaltooctal(decimal));
            printf("decimal value %d is ", decimal);
            printf("hexadecimal value : ");
            decimaltohexadecimal(decimal);
            break;
            case 2:
                printf("please enter your binary number: ");
            scanf("%d", &binary);

            printf("binary value %d is decimal %d\n", binary, binarytodecimal(binary));
            printf("binary value %d is ", binary);
            printf("octal value: ");
            binarytooctal(binary);

            printf("\nbinary value %d is ", binary);
            printf("hexadecimal value: ");
            binarytohexa(binary);
            break;
            case 3:
                break;


        }
    }

}

void choice(){

    printf("press 1 for choose : decimal\n");
    printf("press 2 for choose : binary\n");
    printf("press 3 for quit");

}

int decimaltobinary(int deci){

    int remainder=0;
    int binary=0;
    int base=1;

    while(deci!=0){


        remainder=deci%2;
        binary=binary+(remainder*base);
        base=base*10;
        deci=deci/2;


    }
    return binary;
}

int decimaltooctal(int dec){

    int remainder=0;
    int octal=0;
    int base =1;

    while(dec!=0){
        remainder=dec%8;
        octal=octal+(remainder*base);
        base=base*10;
        dec=dec/8;
    }
    return octal;
}

void decimaltohexadecimal(int decimal) {

    int remainder = 0;
    int base = 1;
    char hexa[20] = {0};
    int i = 0;
    int j = 0;

    while (decimal != 0) {
        hexa[i]=decimal%16;
        decimal=decimal/16;
        i++;
    }
    for(j=i-1;j>=0;j--){
        if(hexa[j]>9){
            printf("%c",hexa[j]+55);
        }
        else{
            printf("%d",hexa[j]);
        }
    }


}

int binarytodecimal(int binary){

    int decimal=0;
    int remainder=0;
    int base=1;



    while(binary!=0){

        remainder=binary%10;
        decimal=decimal+(remainder*base);
        base=base*2;
        binary=binary/10;
    }


   return decimal;
}

void binarytooctal(int binary){

    int decimal=0;
    int remainder=0;
    int base=1;
    int octal[20]={0};
    int a=0;
    int b=0;

    while(binary!=0){
        remainder=binary%10;
        decimal=decimal+(remainder*base);
        base=base*2;
        binary=binary/10;
    }

    while(decimal!=0){

        octal[a]=decimal%8;
        decimal=decimal/8;
        a++;

    }

    for(int b=a-1;b>=0;b--){

        printf("%d",octal[b]);

    }

}

void binarytohexa(int binary){

    char hexa[20]={0};
    int decimal=0;
    int remainder=0;
    int base=1;
    int a=0;
    int b=0;

    while(binary!=0){

        remainder=binary%10;
        decimal=decimal+(remainder*base);
        base=base*2;
        binary=binary/10;
    }
    while(decimal!=0){
        hexa[a]=decimal%16;
        decimal=decimal/16;
        a++;
    }
    for(b=a-1;b>=0;b--){
        if(hexa[b]>9){
            printf("%c",hexa[b]+55);

        }else{
            printf("%d",hexa[b]);
        }


    }



}

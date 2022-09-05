//
// Created by User on 05/09/2022.
//

void choice();
int decimaltobinary(int decimal);
int decimaltooctal(int dec);
void decimaltohexadecimal(int decimal);
int binarytodecimal(int binary);
void binarytooctal(int binary);
void binarytohexa(int binary);
int octaltodecimal(int octal);
void octaltobinary(int oct);
void octaltohexa(int oct);
int hexatodecimal(char hexa[]);
void hexatobinary(char hexadec[]);
void hexatooctal(char hexadec[]);


#include "stdio.h"
#include "math.h"

int main(){

    int decimal=0;
    int choose=0;
    int binary=0;
    int octal=0;
    char hexa[100];
    int press=0;


    printf("choose your converting system\n");



    while (choose != 5) {
        choice();
        scanf("%d",&choose);
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
                printf("please enter your octal number");
                scanf("%d",&octal);

            printf("this is octal number %d is decimal number : %d\n",octal,octaltodecimal(octal));
            printf("this is octal number %d ",octal);
            printf("is binary number ");
            octaltobinary(octal);
            printf("this is octal number %d ",octal);
            printf("is hexadecimal number ");
            octaltohexa(octal);
            break;

        case 4:
            printf("please enter your hexadecimal number");
            scanf("%s",hexa);

            printf("this is hexadecimal number %s is decimal number %d\n",hexa,hexatodecimal(hexa));
            printf("hexa decimal number %s is ",hexa);
            hexatobinary(hexa);

            printf("hexa decimal number %s is ",hexa);
            printf("octal number ");
            hexatooctal(hexa);
            break;
        case 5:
            break;

        default:
            printf("cant choose default system\n\n");
            break;


     }
     printf("if you want to convert more press1 : or quit for press other\n\n");
    scanf("%d",&press);
    if(press!=1){
        break;
    }

    }
return 0;
}

void choice(){

    printf("press 1 for choose : decimal\n");
    printf("press 2 for choose : binary\n");
    printf("press 3 for choose : octal\n");
    printf("press 4 for choose : hexadecimal\n");
    printf("press 5 for quit\n\n");

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

int octaltodecimal(int oct){

    int base=1;
    int remainder=0;
    int decimal=0;

    while(oct != 0){

        remainder=oct%10;
        decimal=decimal+(remainder*base);
        base=base*8;
        oct=oct/10;

    }

    return decimal;

}

void octaltobinary(int oct){

    int base=1;
    int remainder=0;
    int decimal=0;
    int binary[100]={0};
    int a=0;
    int b=0;

    while(oct != 0){

        remainder=oct%10;
        decimal=decimal+(remainder*base);
        base=base*8;
        oct=oct/10;

    }

    while (decimal!=0){

        binary[a]=decimal%2;
        decimal=decimal/2;
        a++;
    }
    for(b=a-1;b>=0;b--){
        printf("%d",binary[b]);



    }
    printf("\n");


}

void octaltohexa(int oct){

    int base=1;
    int remainder=0;
    int decimal=0;
    char hexa[100]={0};
    int a=0;
    int b=0;

    while(oct != 0){

        remainder=oct%10;
        decimal=decimal+(remainder*base);
        base=base*8;
        oct=oct/10;

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
    printf("\n");

    }

int hexatodecimal(char hexa[]){
    int length=0;
    int decimal=0;
    int a=0;

    for(length=0;hexa[length]!='\0';length++){

    }
    for(a=0;hexa[a]!='\0';a++,length--){
        if(hexa[a]>='0'&& hexa[a]<='9'){
            decimal=decimal+(hexa[a]-'0')*pow(16,length-1);
        }
        else if(hexa[a]>='A' && hexa[a]<='Z'){
            decimal= decimal+(hexa[a]-55)*pow(16,length-1);
        }
        else if(hexa[a]>='a' && hexa[a] <='z'){
            decimal=decimal+(hexa[a]-87)*pow(16,length-1);
        }

    }

    return decimal;
}

void hexatobinary(char hexadec[]) {

    int length=0;
    int deci=0;
    int a=0;
    int b=0;
    int binary[100]={0};

    for(length=0;hexadec[length]!='\0';length++){

    }
    for(a=0;hexadec[a]!='\0';a++,length--){
        if(hexadec[a]>='0'&& hexadec[a]<='9'){
            deci=deci+(hexadec[a]-'0')*pow(16,length-1);
        }
        else if(hexadec[a]>='A' && hexadec[a]<='Z'){
            deci= deci+(hexadec[a]-55)*pow(16,length-1);
        }
        else if(hexadec[a]>='a' && hexadec[a] <='z'){
            deci=deci+(hexadec[a]-87)*pow(16,length-1);
        }

    }
    while(deci!=0){
        binary[a]=deci%2;
        deci=deci/2;
        a++;
    }
    printf("binary number ");
    for(int b=a-1;b>=0;b--){
        printf("%d",binary[b]);
    }
printf("\n");
}

void hexatooctal(char hexadec[]) {

    int length=0;
    int decimal=0;
    int a=0;
    int const c=0;
    int octal[10]={0};

    for(length=0;hexadec[length]!='\0';length++){

    }
    for(a=0;hexadec[a]!='\0';a++,length--){
        if(hexadec[a]>='0'&& hexadec[a]<='9'){
            decimal=decimal+(hexadec[a]-'0')*pow(16,length-1);
        }
        else if(hexadec[a]>='A' && hexadec[a]<='Z'){
            decimal= decimal+(hexadec[a]-55)*pow(16,length-1);
        }
        else if(hexadec[a]>='a' && hexadec[a] <='z'){
            decimal=decimal+(hexadec[a]-87)*pow(16,length-1);
        }

    }
    while(decimal!=0){
        octal[a]=decimal%8; //
        decimal=decimal/8; //
        a++;
    }

    for(int  c=a-1;c>=1;c--){
        printf("%d",octal[c]);
    }
    printf("\n");
}

#include <stdio.h>
#include <cs50.h>

int main(void){
        long number = get_long("credit card number:");
        long sayı = number;
        int sayaç = 0;
        int iki =0;

        while(sayı>0){
            if(sayı<100 && sayı>10){
                iki=sayı;
            }
            sayaç++;
            sayı /=10;
        }
        if( (sayaç!=13) && (sayaç!= 15) && (sayaç!= 16) ){
            printf("INVALID\n");
        }
        else{
                int a =0;
                int b =0;
                int c =0;
                while(number>0){
                    a+=number%10;
                    number /=10;
                    if(number>0){
                        c = (number%10) *2;
                        b += c/10;
                        b += c%10;
                        number/=10;
                    }
                }
                int kalan = (a+b)%10;
                if(kalan !=0){
                    printf("INVALID\n");
                }
                else if(kalan==0){
                    if( (sayaç==15) && ((iki==34) || (iki == 37))){
                        printf("AMEX\n");
                    }
                    else if( (sayaç ==16) && ( (iki==51) || (iki==52) || (iki==53) || (iki==54) ||  (iki==55) ) ){
                        printf("MASTERCARD\n");
                    }
                    else if( ((sayaç == 13) || (sayaç == 16)) && (iki/10 ==4)){
                        printf("VISA\n");
                    }
                    else{
                        printf("INVALID\n");
                    }
                }


        }
}

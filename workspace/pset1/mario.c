#include<stdio.h>
#include<cs50.h>

//hard mario

int main(void){
   int height;
   do {
       printf("Height:");
       height = get_int();
       if (height==0){
           return 0;
       }
   }while(height <0 || height>23);
   
   for (int i=0; i<height;i++){
       for(int j=0;j<height-i-1;j++){
           printf(" ");
       }
       for (int k=0;k<i+2;k++){
           printf("#");
       }
       printf("\n");
       
   }
}
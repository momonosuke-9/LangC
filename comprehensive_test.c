#include<stdio.h>
int main(void){
   int i;
   for(i=1;i<26;i++){
    if(i%3==0){
        printf("%d\n",i);
    }
   }
   int j;
   for(j=26;j<51;j++){
    if(j%3==0){
        printf("%d\n",j);
    }
   }

}
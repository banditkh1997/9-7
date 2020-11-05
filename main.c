#include <stdio.h>
float A,B,ans=1;
float exponent(float a,int b){
  for(int i=1;i<=b;i++){
    ans *=a;
  }
  return ans;
}
int main(void) {
 do{
   printf("Enter Number : ");
   scanf("%f",&A);
   printf("Enter Exponent : ");
   scanf("%f",&B);
  int x = B;
  if(B!=x || B,0){
    B = -1;
    printf("Cann't do this !!\n\n");
  }
 }while(B<0);
exponent(A,B);
printf("\n%f\n",ans);
return 0;
}
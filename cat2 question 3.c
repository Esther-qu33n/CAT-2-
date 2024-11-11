#include<stdio.h>
int main(){
  int hoursworked;
  float hourlywage,grosspay,tax,netpay;
  
  printf("Enter hoursworked:");
  scanf("%d",&hoursworked);
  printf("Enter your hourlywage:");
  scanf("%f",&hourlywage);
  
  if (hoursworked<=40)
  {grosspay=hoursworked*hourlywage;}
  
  else if(hoursworked>40)
  {grosspay=(hoursworked*40)+((hoursworked-40)*hourlywage)*0.5;}
  
  else{printf("No pay!");}
  
  if(grosspay<=600)
  {tax=grosspay*0.15;}
  
  else{tax=600*0.15+((grosspay-600)*0.20);}
  netpay=grosspay-tax;
  
  printf("Your grosspay is%f\n",grosspay);
  printf("Tax to pay is%f\n",tax);
  printf("Your netpay is%f\n",netpay);
  return 0;
}


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 
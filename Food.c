#include <stdio.h> 
int main() 
{ 
  int x, quantity, rate, total;
  printf("\nMENU CARD \n\n1. PASTA\n2. SANDWICH\n3. FRENCH FRIES\n4. PIZZA\n5. BURGER\n"); 
  scanf("%d",&x); 
  switch(x){
      case 1: 
      printf("\nThe item you have selected is PASTA.\n\n Enter the quantity :"); 
      scanf("%d",&quantity); 
      rate=179; 
      total=quantity*rate; 
      printf("\nTotal amount :%d",total); 
      break; 
      case 2:
      printf("\nThe item you have selected is SANDWICH.\n\n Enter the quantity :"); 
      scanf("%d",& quantity); 
      rate=129; 
      total=quantity*rate; 
      printf("\nTotal amount :%d",total); 
      break;
      case 3: 
      printf("\nThe item you have selected is FRENCH FRIES.\n\n Enter the quantity :"); 
      scanf("%d",&quantity); 
      rate=179; 
      total=quantity*rate; 
      printf("\nTotal amount :%d",total); 
      break; 
      case 4: 
      printf("\nThe item you have selected is PIZZA.\n\n Enter the quantity :"); 
      scanf("%d",&quantity);
      rate=99; 
      total=quantity*rate; 
      printf("\nTotal amount :%d",total); 
      break; 
      case 5: 
      printf("\nThe item you have selected is BURGER. \n\n Enter the quantity :"); 
      scanf("%d",&quantity); 
      rate=149; 
      total=quantity*rate; 
      printf("\nTotal amount :%d",total); 
      break; 
      default: 
      printf("\nSorry Unavailable...%ds",x); 
      break;
  }
  return 0;
}

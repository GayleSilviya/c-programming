#include<stdio.h>
int main(){
  int x;
  char grade;
  printf("Enter your score:");
  scanf("%d",&m);
  if(x>=85 && x<=100)
    grade='A';
  else if(x>=70 && x<=84)
    grade='B';
  else if(x>=55 && x<=69)
    grade='C';
  else if(x>=40 && x<=54)
    grade='D';
  else if(x<=40)
    grade='E';
  printf("YOUR GRADE IS: %c\n",grade);
  return 0;
}

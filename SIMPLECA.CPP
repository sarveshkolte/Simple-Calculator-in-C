
#include<stdio.h>
#include<conio.h>
int addition(){

 int x = 0;
 int sum = 0;
 int oof;
 while(x!= -1){

  printf("PLease input number and -1 to exit \n");
  scanf("%d", &oof);
  if(oof == -1){
  printf("%d",sum);
  x = -1;
  }
  else{
  sum = sum + oof;
  }
 }
}
int subtraction(){

 int x = 0;
 int sum = 0;
 int oof;
 while(x!= -1){


  printf("PLease input number and -1 to exit \n");
  scanf("%d", &oof);
  if(oof == -1){
  printf("%d",sum);
  x = -1;
  }
  else if(sum == 0){
    sum = sum + oof;
  }
  else {
  sum = sum - oof;
  }
 }
}
int multiplication(){
 int x = 0;
 int sum = 1;
 int oof;
 while(x!= -1){

  printf("PLease input number and -1 to exit \n");
  scanf("%d", &oof);
  if(oof == -1){
  printf("%d",sum);
  x = -1;
  }
  else{
  sum = sum * oof;
  }
 }
}
int division(){
 int x = 0;
 int sum = 0;
 int oof;
 while(x!= -1){


  printf("PLease input number and -1 to exit \n");
  scanf("%d", &oof);
  if(oof == -1){
  printf("%d",sum);
  x = -1;
  }
  else if(sum == 0){
    sum = sum + oof;
  }
  else {
  sum = sum / oof;
  }
 }
}
int main() {
clrscr();
int opp;
printf("write:- \n 1 for addition, \n 2 for subtraction, \n 3 for multiplication, \n 4 for division. \n");
 scanf("%d", &opp);
 switch(opp){
 case 1:
 addition();
 break;
 case 2:
 subtraction();
 break;
 case 3:
 multiplication();
 break;
 case 4:
 division();
 break;
 default:
 printf("invalid command");
 }


 getch();
}
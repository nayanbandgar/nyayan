#include <stdio.h>

int main() {
int math,phy,che,eng,hin;
printf("Enter Your Mathematics Mark:");
 scanf( "%d",&math);
 
 printf("Enter Your Physics Mark:");
 scanf("%d",&phy);
 
 printf("Enter Your Chemistry Mark:");
 scanf("%d",&che);
 
 printf("Enter Your English Mark:");
 scanf("%d",&eng);
 
 printf("Enter Your Hindi Mark:\n");
 scanf("%d",&hin);
 
  float a = math+phy+che+eng+hin;
 printf("The Total mark is %f out of 500 \n ",a);
 
 printf("The Percentage Of the Number is %f",(a/5));


    return 0;
}


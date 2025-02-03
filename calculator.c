#include<stdio.h>
void add(int a,int b){
  printf("%d\n",(a+b));
}
void sub(int a,int b){
  printf("%d\n",(a-b));
}
void mul(int a,int b){
  printf("%d\n",(a*b));
}
void div(int a,int b){
  printf("%d\n",(a/b));
}
void main(){
  int ch,status=1,a,b;
  printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  while(status!=0){
    switch(ch){
      case 1:
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        add(a,b);
        break;
      case 2:
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        sub(a,b);
        break;
      case 3:
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        mul(a,b);
        break;
      case 4:
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        div(a,b);
        break;
      default:
        printf("Invalid choice\n");
        status=0;
        break;
    }
  }
}

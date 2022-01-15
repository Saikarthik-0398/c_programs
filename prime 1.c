// prime with return and argument
#include<stdio.h>
int prime(int a){
int i,m=0;
for(i=2;i<a;i++){
 if(a%i==0){
m++;}

}
return m;
}
int main(){
int m;
printf("enter the number :");
scanf("%d",&m);
int k=prime(m);
if(k>0){
printf("not prime");
}
else{
printf("prime number");}

}
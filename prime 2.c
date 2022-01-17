/* //prime without return and argument
#include<stdio.h>
int prime(){
int a,i,m=0;
printf("enter the number :");
scanf("%d",&a);
for(i=2;i<a;i++){
if(a%i==0){
m++;}
}
if(m>0){
printf("not prime");}
else{
printf("prime number");}}

int main (){
prime();}*/
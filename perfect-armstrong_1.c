/*//perfect armstrong
 //without return and argument
#include<stdio.h>
#include<math.h>
int a;
int armstrong(){
	int num=a;
	int r,n=0,s,k=0;
	int m=a;
	while(m>0){
		n++;
		m=m/10;		
	}
	while(num>0){
		r=num%10;
		s=pow(r,n);
		k=k+s;
		num=num/10;
	}
if(k==a){
		printf("\narmstrong number");
	}
	else{
		printf("\nnot armstrong number");
}}
int perfect(){
	int i,s=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			s=s+i;
		}
	}
if(s==a){
		printf("perfect number");
	}
	else{
		printf("not perfect number");
	}
}
int main(){
	scanf("%d",&a);
  perfect();
  armstrong();
}*/
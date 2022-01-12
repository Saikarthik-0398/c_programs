#include<stdio.h>
int prime(int a){
	int i,c=0;
	for(i=2;i<a;i++){
		if(a%i==0){
			c++;}
	}
		if(a==1){
			printf("1 is neither prime nor composite");
		}
		else if(c>0){
			printf("not prime");
		}
		else{
			printf("prime no");
		}
	
}
int main(){
	int s;
	scanf("%d",&s);
    prime(s);
}
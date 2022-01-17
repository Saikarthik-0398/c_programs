/*//perfect armstrong
// with return and argument
#include<stdio.h>
#include<math.h>
int armstrong(int a){
	int r,n=0,s,k=0;
	int m=a;
	while(m>0){
		n++;
		m=m/10;		
	}
	while(a>0){
		r=a%10;
		s=pow(r,n);
		k=k+s;
		a=a/10;
	}
	return k;
}
int perfect(int a){
	int i,s=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			s=s+i;
		}
	}
	return s;
}
int main(){
	int a,m,k;
	printf("enter the number ");
	scanf("%d",&a);
	m=perfect(a);
	k=armstrong(a);
	if(m==a){
		printf("perfect number");
	}
	else{
		printf("not perfect number");
	}
	if(k==a){
		printf("\narmstrong number");
	}
	else{
		printf("\nnot armstrong number");
	}
	
}*/
/*//strong and positive
//using arguments and return
#include<stdio.h>
int fact(int a){
	int i,m=1;
	for(i=1;i<=a;i++){
		m=m*i;
	}
	return m;
}
int strong(int a){
int m=a;
int r,s=0;
while(m>0){
	r=m%10;
	s=s+fact(r);
	m=m/10;	
	}
return s;	}
int pos(int a){
	int m=0;
	if(a>=0){
		m++;
	}
	return m;
}

int main(){
int a,b,c;
scanf("%d",&a);
b=strong(a);
if(a==b){
	printf("strong number");
}
else{
	printf("not strong number");
}	
c=pos(a);
if(c>0){
	printf("\npositive");
}
else{
	printf("\nnegative");
}
}*/
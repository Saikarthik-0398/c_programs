/*//strong and positive
//without arguments and return
#include<stdio.h>
int a;
int pos(){
	if(a>=0){
	printf("\npositive");
}
else{
	printf("\nnegative");
}
}
int fact(int a);
int strong(){
int m=a;
int r,s=0;
while(m>0){
	r=m%10;
	s=s+fact(r);
	m=m/10;	
	}
if(a==s){
	printf("strong number");
}
else{
	printf("not strong number");
}}
int fact(int s){
	int i,m=1;
	for(i=1;i<=s;i++){
		m=m*i;
	}
	return m;
}

int main(){
scanf("%d",&a);
strong();
pos();
}*/
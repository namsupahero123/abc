#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>

bool ngTo(int n){
	int count=0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n, a, b=0;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(n<1||n>10000){
		printf("nhap n>=1 va n<=10000");
	}
	else if(n<10){
		printf("n khong phai la so dep");
	}
	else{
		while(n>0){
			a=n;
			a%=10;
			n/=10;
			b+=a*a;
		}
		if (ngTo(b)){
			printf("n la so dep");
		}
		else {
			printf("n khong phai la so dep");
		}
	}
	getch();
	return 0;
}

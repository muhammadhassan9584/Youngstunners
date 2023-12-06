#include<stdio.h>
#include"file..h"
main(){
	int no1,no2;
	printf("enter first number: ");
	scanf("%d",&no1);
	printf("enter second number: ");
	scanf("%d",&no2);
if (no2==0){
	printf("error");
}
else{
	printf("add %d and %d=%d\n",no1,no2,add(no1,no2));
	printf("sub%d from %d=%d\n",no1,no2,sub(no1,no2));
	printf("product %d and %d=%d\n",no1,no2,product(no1,no2));
	printf("division %d from %d=%d\n",no1,no2,division(no1,no2));
}
}

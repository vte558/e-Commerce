#include<stdio.h>
#include<conio.h>
int main(){
	int x=10;
	int *j;
		int i;
	j=&x;
	printf("The value of x is %d\n",x);
	printf("The value of & x is %p\n",&x);
	printf("The value of *(x) is %d\n\n",*(&x));
	printf("The value of j is %p\n",j);
	printf("The value of j is %p\n",&j);
		printf("The value of j is %d\n",*j);
	
		for(i=0;i<10;i++){
			printf("I value "+i);
		}
		getch();
		return 0;
}

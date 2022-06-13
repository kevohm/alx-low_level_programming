#include "func.h"

int main(){
	int a,b;
	printf("Enter values: ");
	scanf("%d%d",&a ,&b);
	printf("ADD %d + %d: %d\n",a ,b ,add(a,b));
	printf("SUB %d - %d: %d\n",a ,b ,sub(a,b));
	printf("MUL %d * %d: %d\n",a ,b ,mul(a,b));
	printf("DIV %d / %d: %d\n",a ,b ,div(a,b));
	return (0);
}

#include <stdio.h>

void fun(int n)
{
	if(n == 0)
		return;
	
	fun(n / 2);

	printf("%d\n",(n % 2));
}
int main() {
	
	fun(7);
	
	return 0;
}

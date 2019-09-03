//similar to import; bring in functionality in
// stdio (standard IO)
#include <stdio.h>

int is_prime(int n);

int main(int argc, char* argv[])
{
	for (int i=0; i<10; i++)
	{
		//printf("Hello world\n");
		printf("%d is prime? %d\n", i, is_prime(i));
	}
	return 0;
}

int is_prime(int n)
{
	for (int i=2; i*i<=n; i++)
		if (n%i == 0) return 0;
	return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("UID: %d\n", getuid());
	setuid(0);
	printf("UID: %d\n", getuid());
	system("ls /root");
	return 0;
}

#include <stdio.h>
#include <sys/time.h>

int main() {
	struct timeval tv;
	gettimeofday(&tv, NULL);

	long long ns = (long long) tv.tv_sec * 1000LL + tv.tv_usec/1000;
	printf("%lld\n", ns);

	return 0;
}

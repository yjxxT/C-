#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<inttypes.h>

int main1(void) {

	int32_t me32;
	me32 = 45933945;
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumption.\n");
	printf("Instead use a \"macro\"from inttypes.h:");
	printf("me32 = %"PRId32"\n", me32);

	return 0;
}
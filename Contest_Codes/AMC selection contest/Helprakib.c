#include<stdio.h>
#include <inttypes.h>

int main()
{
    uint64_t n;
    scanf("%" PRIu64,&n);
    printf("%" PRIu64, (n*(n+1)/2));
    return 0;
}

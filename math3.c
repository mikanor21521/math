#include <stdio.h>
int main(void)
{
    long int num;
    int i;
    long long int j = 1;
    printf("階乗する数を入力してください→");
    scanf("%ld", &num);
    for (i = 1; i <= num; i++){
        j = j * i;
    };
    printf("%ld の階乗は %lld です", num, j);
    return 0;
}
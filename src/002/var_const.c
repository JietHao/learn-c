#include <stdio.h>

int main(){
    printf("%d + %d = %d\n", 3, 4, 7);
    
    int i;   // 声明却未初始化，当时内存是什么，就是什么
    int j;   // C99以后允许在任意地方声明变量

    printf("i=%d\n", i);
    printf("j=%d\n", j);


    const int AMOUNT = 100;
    int price = 0;
    printf("请输入价格(单位：元):");
    scanf("%d", &price);

    int change = AMOUNT - price;
    printf("找您%d元\n", change);

    return 0;
}
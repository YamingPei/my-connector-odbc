#include <stdio.h>

// 函数声明
void printFibonacci(int n);
long long fibonacci(int n);

int main() {
    int numTerms;

    // 获取用户输入
    printf("请输入要打印的斐波那契数列项数: ");
    scanf("%d", &numTerms);

    if (numTerms <= 0) {
        printf("请输入一个正整数。\n");
        return 1;
    }

    // 打印斐波那契数列
    printFibonacci(numTerms);

    return 0;
}

// 函数定义
void printFibonacci(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");
}

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        long long prev = 0, curr = 1;
        for (int i = 2; i <= n; i++) {
            long long temp = curr;
            curr += prev;
            prev = temp;
        }
        return curr;
    }
}
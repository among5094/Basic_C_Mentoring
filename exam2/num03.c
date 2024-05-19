#include <stdio.h>
//3번
int main() {
    int num1, num2;
    
    printf("두 정수를 입력하시오.(큰수, 작은수): ");
    scanf("%d %d", &num1, &num2);
    
    // num1이 num2보다 작을 경우 두 수를 교환
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    int a = num1;
    int b = num2;
    
    //최대공약수 계산
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("최대 공약수는 %d입니다.\n", a);
    
    return 0;
}

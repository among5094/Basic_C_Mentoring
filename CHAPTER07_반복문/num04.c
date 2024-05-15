#include <stdio.h>
//4번
int main() {
    int n, i;

    //입력화면
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    
    //출력화면
    printf("약수: ");

    for(i = 1; i <= n; i++) {

        // n을 i로 나눈 나머지가 0인 경우, i는 n의 약수인지 검사하는 if문
        if(n % i == 0) {  
            printf("%d ", i);
        }
    }

    return 0;
}

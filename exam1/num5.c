#include <stdio.h>
//5번
int main() {
    char ch;

    printf("문자를 입력: ");
    scanf("%c", &ch); // 사용자로부터 문자 입력 받기

    // 입력받은 문자의 아스키 코드 값 출력
    printf("아스키 코드 값은 :%d입니다.\n", ch);

    return 0;
}

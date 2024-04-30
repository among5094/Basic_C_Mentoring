#include <stdio.h>
//8번
int main() {
    int asciiCode;

    // 사용자로부터 아스키 코드값 입력 받기
    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &asciiCode);

    // 입력된 아스키 코드값을 문자로 변환하여 출력
    printf("문자:%c입니다.\n", (char)asciiCode);

    return 0;
}
//교재 밑에 힌트로 형변환 하라고 해서 (char) 해야됨!
//안해도 실행은 되지만 하라고 되어있으니 해주기

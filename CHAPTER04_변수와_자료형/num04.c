#include <stdio.h>
//4번

int main() {

    double length, width, height; //길이,너비,높이
    double volume;//부피

    // 사용자로부터 길이, 너비, 높이 입력 받기
    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &length, &width, &height);

    // 부피 계산
    volume = length * width * height;

    // 계산된 부피 출력
    printf("상자의 부피는 %lf 입니다.\n", volume);

    return 0;
}

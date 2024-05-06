#include <stdio.h>
#define PI 3.14159 //265358979323846

int main() {

    double distance, angle; //거리와 각도
    double circumference, radius; //

    // 사용자로부터 거리와 각도 입력 받기
    printf("거리를 입력하세요: ");
    scanf("%lf", &distance);
    printf("각도를 입력하세요: ");
    scanf("%lf", &angle);

    // 지구의 둘레 계산
    circumference = (distance / angle) * 360;

    // 지구의 반지름 계산
    radius = circumference / (2 * PI);

    // 결과 출력
    printf("지구의 반지름은 %.2f km입니다.\n", radius);

    return 0;
}

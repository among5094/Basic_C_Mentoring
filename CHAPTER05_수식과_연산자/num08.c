#include <stdio.h>

#define PI 3.14159

int main() {
    double radius;
    double surface_area, volume;

    // 사용자로부터 구의 반지름을 입력받는다.
    printf("구의 반지름을 입력하시오:");
    scanf("%lf", &radius);

    // 구의 겉넓이 계산
    surface_area = 4 * PI * radius * radius;
    // 구의 부피 계산
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("표면적은 %.2lf입니다. \n", surface_area);
    printf("체적은 %.2lf입니다.\n", volume);

    return 0;
}

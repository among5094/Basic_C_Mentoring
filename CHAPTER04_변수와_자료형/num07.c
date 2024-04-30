#include <stdio.h>
//7번
int main() {
    double m, v, E;

    // 사용자로부터 질량(m)과 속도(v) 입력 받기
    printf("질량(kg): ");
    scanf("%lf", &m);
    printf("속도(m/s): ");
    scanf("%lf", &v);

    // 운동에너지(E) 계산
    E = m * v * v / 2.0;

    // 계산된 운동에너지 출력
    printf("운동에너지(J): %lf\n", E);

    return 0;
}

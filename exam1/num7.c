#include <stdio.h>
//7번
int main() {

    // 변수 선언
    double distanceToSun = 149600000; // 태양과 지구와의 거리 (km)
    double speedOfLight = 300000; // 빛의 속도 (km/s)
    int timeInSeconds, minutes, seconds;

    // 빛이 태양에서 지구까지 도달하는 시간 계산
    timeInSeconds = distanceToSun / speedOfLight;

    // 시간을 분과 초로 변환
    minutes = timeInSeconds / 60;
    seconds = timeInSeconds % 60;

    // 결과 출력
    printf("빛의 속도는 %.6lfkm/s\n", speedOfLight);
    printf("태양과 지구와의 거리 %.6lfkm\n", distanceToSun);
    printf("도달 시간은 %d분 %d초\n", minutes, seconds);

    return 0;
}

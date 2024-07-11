#include <stdio.h>

int solve(int d, int m, int y) {
    return (d+=m<3 ? y-- : y-2,23*m/9+d+4+y/4-y/100+y/400)%7;
}

int main(void) {
    const char* w[7];
    w[1] = "Monday"; w[2] = "Tuesday"; w[3] = "Wednesday"; w[4] = "Thursday"; w[5] = "Friday"; w[6] = "Saturday"; w[0] = "Sunday";
    int y; scanf("%d", &y);
    printf("\n1 Jan %d -> %s.\n", y, w[solve(1,1,y)]);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void) {
    const char* w[7];
    w[0] = "Monday"; w[1] = "Tuesday"; w[2] = "Wednesday"; w[3] = "Thursday"; w[4] = "Friday"; w[5] = "Saturday"; w[6] = "Sunday";
    int y; scanf("%d", &y);
    int n = (y-1900) + 1, n_leap = floor(n/4) - floor(n/100) + floor(n/400) - 1, d = n + n_leap;
    while (d < 0)   d += 7;
    printf("\n1 Jan %d -> %s.\n", y, w[d%7]);
    return 0;
}
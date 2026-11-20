// Convert_seconds_to_hours_minutes_seconds
#include <stdio.h>

int main() {
    long long totalSeconds, hours, minutes, seconds;
    if (scanf("%lld", &totalSeconds) != 1) return 1;
    if (totalSeconds < 0) return 1;
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
    return 0;
}

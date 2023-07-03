#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Enter 3 values: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    int total_time = (t1 + t2 + t3)/3;
    float total_time_hours = (float)total_time / 3; // Поділимо загальний час на кількість гостей
    printf("Time is needed to eat the pie: %.2f hours\n", total_time_hours);
    return 0;
}

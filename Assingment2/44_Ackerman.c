#include <stdio.h>

int ack(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ack(m - 1, 1);
    } else {
        return ack(m - 1, ack(m, n - 1));
    }
}
int main() {
    int m, n;
    printf("Enter two non-negative integers: ");
    scanf("%d %d", &m, &n);
    int result = ack(m, n);
    printf("Ackermann(%d, %d) = %d\n", m, n, result);
    return 0;
}










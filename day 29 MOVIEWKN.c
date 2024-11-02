#include <stdio.h>

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        int L[n], R[n], bestIndex = 0, maxScore = 0;

        for (int i = 0; i < n; i++) scanf("%d", &L[i]);
        for (int i = 0; i < n; i++) scanf("%d", &R[i]);

        for (int i = 0; i < n; i++) {
            int score = L[i] * R[i];
            if (score > maxScore || (score == maxScore && R[i] > R[bestIndex])) {
                maxScore = score;
                bestIndex = i;
            }
        }
        printf("%d\n", bestIndex + 1);
    }
    return 0;
}

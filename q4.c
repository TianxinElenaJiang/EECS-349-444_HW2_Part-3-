#include <stdio.h>

int proc1(int *a1, int a2, int a3) {
    int v1;
    int v2;
    int v3;
    int i;

    v2 = 0;
    v1 = 0;
    for (i = 0; i < a2; ++i) {
        v3 = 1;
        while (v3 < a3) {
            while (!a1[v2])
                v2 = (v2 + 1) % a2;
            ++v3;
            v2 = (v2 + 1) % a2;
        }
        while (!a1[v2])
            v2 = (v2 + 1) % a2;
        v1 = a1[v2];
        a1[v2] = 0;
    }
    return v1;
}

int main() {
    int v1;
    int v2[100];
    int v3;
    int v4;
    int i;

    v4 = 7;
    v3 = 100;

    for (i = 0; i < v3; ++i)
        v2[i] = i + 1;
    v1 = proc1(v2, v3, v4);
    printf("%d\n", v1);
    return 0;
}





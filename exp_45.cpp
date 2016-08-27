#include<cstdio>

using namespace std;

int T, n, s[200000];

int main() {
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        int max = -200000; int max_dif = -200000;
        for(int i = 0; i < n; i++)
            scanf("%d", &s[i]);
        for(int i = 0; i < n - 1; i++) {
            if(s[i] > max)
                max = s[i];
            if(max - s[i + 1] > max_dif)
                max_dif = max - s[i + 1];
        }
        printf("%d\n", max_dif);
    }
}

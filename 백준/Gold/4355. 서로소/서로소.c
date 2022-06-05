#include<stdio.h>

#define ll long long

int main() {
    int N;
    scanf("%d", &N);
    while(N) {
        ll ans = (ll)N;
        for(ll i = 2LL; i * i <= ans; i++) {
            if(N % i == 0) {
                ans *= (i - 1);
                ans /= i;

                do {
                    N /= i;
                } while(N % i == 0);
            }
        }
        if(N > 1) {
            ans *= N - 1;
            ans /= N;
        }

        printf("%lld\n", ans == 1LL ? 0LL : ans);
        scanf("%d", &N);
    }
}
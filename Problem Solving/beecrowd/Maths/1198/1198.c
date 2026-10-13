#include <stdio.h>
 
int main() {
 
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) != EOF){
        if(b < a){
            long long int temp = a;
            a = b;
            b = temp;
        }
        printf("%lld\n", b-a);
    }
 
    return 0;
}

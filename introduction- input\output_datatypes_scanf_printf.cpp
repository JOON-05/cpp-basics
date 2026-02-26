#include <cstdio>
using namespace std;
int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a,&b,&c,&d,&e); // Space before %c to skip whitespace (since %c does not ignore whitespace)
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",c);
    printf("%f\n",d);
    printf("%lf\n",e);
    return 0;
}

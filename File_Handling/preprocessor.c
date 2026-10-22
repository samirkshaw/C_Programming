#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#ifdef DEBUG
#define LOG(msg) printf("DEBUG: %s\n", msg)
#else
#define LOG(msg)
#endif

int main() {
    int radius = 5;
    int a = 10, b = 20;

    printf("Preprocessor Demonstration\n");
    printf("============================\n");

    printf("PI = %f\n", PI);
    printf("Area of circle (r=%d) = %f\n", radius, PI * SQUARE(radius));
    printf("Square of %d = %d\n", radius, SQUARE(radius));
    printf("Max of %d and %d = %d\n", a, b, MAX(a, b));

    LOG("This is a debug message");

#undef PI
#define PI 3.14
    printf("After redefining PI = %f\n", PI);

    return 0;
}
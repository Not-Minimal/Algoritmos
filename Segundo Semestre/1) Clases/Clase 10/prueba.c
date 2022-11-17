#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int m = 0, s = 1;
    for (int t = 0; t < floor(t / 10); t++)
    {
        s = (s + t % 10 * (9 - m++ % 6)) % 11;
    }

    printf("%d", s);
    return 0;
}

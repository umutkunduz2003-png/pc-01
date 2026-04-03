#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int kurus;

    do
    {
        kurus = get_int("Para ustu (kurus): ");
    }
    while (kurus <= 0);

    int adet = 0;

    // 50krs
    adet += kurus / 50;
    kurus = kurus % 50;

    // 25krs
    adet += kurus / 25;
    kurus = kurus % 25;

    // 10krs
    adet += kurus / 10;
    kurus = kurus % 10;

    // 5krs
    adet += kurus / 5;
    kurus = kurus % 5;

    // 1 kurus
    adet += kurus;

    printf("%d\n", adet);
}

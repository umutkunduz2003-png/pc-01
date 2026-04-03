#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string kart;

    while (1)
    {
        kart = get_string("Kart numarasi: ");

        if (kart == NULL || strlen(kart) == 0)
        {
            continue;
        }

        int sadece_rakam = 1;
        for (int i = 0; kart[i] != '\0'; i++)
        {
            if (!isdigit((unsigned char) kart[i]))
            {
                sadece_rakam = 0;
                break;
            }
        }

        if (sadece_rakam)
        {
            break;
        }
    }

    int uzunluk = strlen(kart);

    int toplam = 0;
    int ikinci_mi = 0;

    for (int i = uzunluk - 1; i >= 0; i--)
    {
        int rakam = kart[i] - '0';

        if (ikinci_mi)
        {
            rakam *= 2;
            if (rakam > 9)
            {
                rakam = (rakam / 10) + (rakam % 10);
            }
        }

        toplam += rakam;
        ikinci_mi = !ikinci_mi;
    }

    int gecerli = (toplam % 10 == 0);

    // Kart tipi kontrolu
    if (gecerli)
    {
        if (uzunluk == 15 && kart[0] == '3' && (kart[1] == '4' || kart[1] == '7'))
        {
            printf("AMEX\n");
        }
        else if (uzunluk == 16 && kart[0] == '5' &&
                 (kart[1] == '1' || kart[1] == '2' || kart[1] == '3' || kart[1] == '4' || kart[1] == '5'))
        {
            printf("MASTERCARD\n");
        }
        else if ((uzunluk == 13 || uzunluk == 16) && kart[0] == '4')
        {
            printf("VISA\n");
        }
        else
        {
            printf("GECERSIZ KART\n");
        }
    }
    else
    {
        printf("GECERSIZ KART\n");
    }
}

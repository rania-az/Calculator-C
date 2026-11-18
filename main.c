#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arithmos1;
    float arithmos2;
    int epilogi;

    printf("Epilekste poia praksi thelete na kanete\n");
    printf("1. Prosthesi\n2. Afairesi\n3. Pollaplasiasmo\n4. Diairesi\n");

    printf("Pliktrologiste apo to 1 ews 4 (1-4): ");
    scanf("%d", &epilogi);

    printf("Dose ton prwto arithmo: ");
    scanf("%f", &arithmos1);

    printf("Dose ton deutero arithmo: ");
    scanf("%f", &arithmos2);

      if (epilogi == 1)
    {
        printf("\nApoelesma: %.2f\n", arithmos1 + arithmos2);
    }
    else if (epilogi == 2)
    {
        printf("\nApotelesma: %.2f\n", arithmos1 - arithmos2);
    }
    else if (epilogi == 3)
    {
        printf("\nApotelesma: %.2f\n", arithmos1 * arithmos2);
    }
    else if (epilogi == 4)
    {
        if (arithmos2 != 0)
        {
            printf("\nApotelesma: %.2f\n", arithmos1 / arithmos2);
        }
        else
        {
            printf("\nError: den diaireitai me 0!\n");
        }
    }
    else
    {
        printf("\n Please select 1-4.\n");

    }

    return 0;
}

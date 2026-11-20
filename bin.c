#include <stdio.h>

int power(int base, int exp)
{
    int Potenz;
    if (Potenz < 0 || base == exp)
    {
        return -1;
    }
}

int strlength()
{
    return -1;
}

int main()
{
    printf("\nGib eine Zahl von 0 bis 15 ein: ");               
    scanf("%d", &eZ);                   //eZ: eingegebene Zahl

    if (eZ != 1 || eZ <= -1 || eZ > 15)        //falls eine Buchstabe eingegeben wurde oder ungültige Zahl, ("Das geht leider nicht...") 
    {
        printf("\nDas geht leider nicht...\n");
        return -1;
    }
    else
    {
        printf("\nDas passt!");
        printf("\nDeine Zahl ist %d\n", eZ);
    }

    printf("Binaerzahl von der eingegebenen Zahl ist %d", eZ);

    return 0;
}
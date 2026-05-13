// Brute-Force (Iterative)

#include <stdio.h>
int BirthdayCakeCandle(int n, int candles[])
{
    int counter = 0, max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < candles[i])
            max = candles[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max == candles[i])
            counter++;
    }
    return counter;
}
int main()
{
    int n;
    printf("Enter number of candles: ");
    scanf("%d", &n);
    int candles[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter candle no.%d: ", i + 1);
        scanf("%d", &candles[i]);
    }

    printf("%d", BirthdayCakeCandle(n, candles));
}

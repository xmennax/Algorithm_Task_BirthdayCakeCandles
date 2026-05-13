#include <stdio.h>
int BirthdayCakeCandle(int candles[], int n, int index, int *maxH, int count)
{
    if (index == n)
    {
        return count;
    }
    if (candles[index] > *maxH)
    {
        *maxH = candles[index];
        count = 1;
    }
    else if (candles[index] == *maxH)
    {
        count++;
    }
    return BirthdayCakeCandle(candles, n, index + 1, maxH, count);
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
    int maxH = 0;
    printf("%d", BirthdayCakeCandle(candles, n, 0, &maxH, 0));
}

#include <stdio.h>
int BirthdayCakeCandles(int candles[], int low, int high, int *maxH)
{
    if (low == high)
    {
        *maxH = candles[low];
        return 1;
    }
    int mid = (low + high) / 2;
    int left_max, right_max;
    int left_count = BirthdayCakeCandles(candles, low, mid, &left_max);
    int right_count = BirthdayCakeCandles(candles, mid + 1, high, &right_max);
    if (left_max > right_max)
    {
        *maxH = left_max;
        return left_count;
    }
    else if (right_max > left_max)
    {
        *maxH = right_max;
        return right_count;
    }
    else
    {
        *maxH = left_max;
        return left_count + right_count;
    }
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
    printf("%d", BirthdayCakeCandles(candles, 0, n - 1, &maxH));
}

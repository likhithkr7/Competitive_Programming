int maxSubArraySum(int a[], int size)
{
    int maxm = INT_MIN, curr = 0;
 
    for (int i = 0; i < size; i++)
    {
        curr += a[i];
        maxm = max(curr, maxm);
        curr = max(curr, 0);
    }
    return maxm;
}

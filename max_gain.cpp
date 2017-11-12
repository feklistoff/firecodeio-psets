int max_gain(int arr[], int sz)
{
    if (sz == 0 || sz == 1)
        return 0;
    
    int result = 0, max = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] < arr[j])
                max = arr[j] - arr[i];
            if (max > result)
                result = max;
        }
    }
    return result;
}
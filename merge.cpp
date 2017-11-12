int *merge(int arr_left[], int sz_left, int arr_right[], int sz_right)
{
    /* declaring an array using dynamic allocation of memory. 
        Merged the given two arrays into this third output Array */
    int *arr_merged = new int [sz_left+sz_right];
    
    int i = 0, j = 0, k = 0;

    while (i < sz_left && j < sz_right)
    {
        if (arr_left[i] <= arr_right[j])
        {
            arr_merged[k] = arr_left[i];
            i++;
            k++;
        }
        else
        {
            arr_merged[k] = arr_right[j];
            j++;
            k++;
        }
    }
    
    while (i < sz_left)
    {
        arr_merged[k] = arr_left[i];
        i++;
        k++;
    }
    
    while (j < sz_right)
    {
        arr_merged[k] = arr_right[j];
        j++;
        k++;
    }
    
    return arr_merged;
}
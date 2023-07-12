int largestSix(int n, int *arr)
{
    int newlarge = arr[0];
    int large = 0;
    for (int i = 0; i < n; i++)
    {
        if (newlarge <= arr[i])
        {   
            newlarge = arr[i];
            large = i;
        }
    }


    return large;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int newSize;
    int i = 0;
    int nb1 = 0;
    int nb2 = 0; 
    double median;

    newSize = nums1Size + nums2Size;
    int newarray[newSize];
    while (i < newSize)
    {
        if (nb1 < nums1Size && (nb2 >= nums2Size || nums1[nb1] <= nums2[nb2]))
        {
            newarray[i] = nums1[nb1];
            nb1++;
        }
        else if (nb2 < nums2Size && (nb1 >= nums1Size || nums1[nb1] >= nums2[nb2]))
        {
            newarray[i] = nums2[nb2];
            nb2++;
        }
        i++;
    }

    if (newSize % 2 != 0)
        median = newarray[(newSize/2)];
    else
        median = (newarray[(newSize/2)] + newarray[((newSize/2)-1)]) / 2.0;

    return median;
}
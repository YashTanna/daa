#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int *b = new int[h - l + 1];
    while (i <= mid && j <= h)
    {
        if (a[i] > a[j])
        {
            b[k++] = a[j++];
        }
        else
        {
            b[k++] = a[i++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= h)
    {
        b[k++] = a[j++];
    }

    for (int x = 0; x <= h - l; x++)
    {
        a[l + x] = b[x];
    }

    delete[] b;
}

void MergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}

main()
{
        int a[] = {73, 86, 49, 92, 31, 56, 14, 62, 4, 20, 77, 96, 50, 38, 61, 87, 11, 42, 68, 53, 23, 94, 7, 18, 80, 65, 29, 44, 12, 70, 2, 99, 35, 19, 72, 3, 58, 8, 67, 27, 90, 75, 41, 10, 81, 15, 46, 83, 24, 63, 9, 37, 95, 52, 22, 69, 78, 36, 85, 30, 74, 91, 54, 6, 43, 89, 57, 28, 84, 17, 48, 79, 60, 45, 93, 1, 64, 16, 33, 76, 55, 26, 82, 5, 98, 21, 88, 47, 34, 71, 40, 97, 32, 59, 13, 66, 25, 51};

    clock_t t = clock();
    MergeSort(a, 0, 99);
    for (int i = 0; i < 100; i++)
    {
        cout << a[i] << " ";
    }

    t = clock() - t;
    cout << endl;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}
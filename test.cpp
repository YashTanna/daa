#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int max(int a,int b)
{
    return (a>b)? a:b;
}

int knapsack(int w,int wt[],int val[],int n)
{
    if(w == 0 || n == 0)
    {
        return 0;
    }
    if(wt[n-1] > w)
    {
        return knapsack(w,wt,val,n-1);
    }
    else
    {
        max(knapsack(w,wt,val,n-1),
            val[n-1+knapsack()
        )
    }
}

main()
{
    int a[] = {9,5,8,6,3,1,4,7,2,10};

    mergeSort(a, 0, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
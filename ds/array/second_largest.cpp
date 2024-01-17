#include <bits/stdc++.h> 
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    int f_max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {

        if(f_max < arr[i]) f_max = arr[i];
    }
    int a = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(second_max < arr[i] && f_max > arr[i]) 
        {
            second_max = arr[i];
            a = 0;
        }
        
    }
    if(a == 0)
    return second_max;
    else return a;

}
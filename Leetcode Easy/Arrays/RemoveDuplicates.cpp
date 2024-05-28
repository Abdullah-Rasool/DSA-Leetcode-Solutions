#include<iostream>
using namespace std;

int removeDuplicates(int nums[],int n){
    if (n == 0 || n == 1)
        return n;

    int j = 1;
    for(int i=1;i<n;i++){
         if(nums[i]!=nums[i-1]){
        nums[j]=nums[i];
        j++;
    }
    }
    return j;
}

int main()
{
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = 10;

    cout<<removeDuplicates(nums,n);
    return 0;
}
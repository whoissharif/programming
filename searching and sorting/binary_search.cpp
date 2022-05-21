#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int len, int target){
    int low = 0;
    int high = len - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(target == arr[mid]){
            return mid;
        }else if(target < arr[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 6, 8, 9, 10, 11, 14, 100, 500, 1000};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target = 500;
    int index = binarySearch(arr, len, target);
    if(index != -1){
        printf("%d found on position %d",target,index);
    }else{
        printf("Target not found");
    }
    return 0;
}

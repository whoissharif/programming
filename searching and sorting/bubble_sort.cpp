#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0 ; i< len; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[] = {9,5,1,12,18,6,2,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,length);
    return 0;
}

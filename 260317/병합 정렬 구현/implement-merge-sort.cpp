#include <iostream>

using namespace std;

int n;
int arr[100000];
int merge_arr[100000];

void merge(int low, int mid, int high){
    int i = low, j = mid + 1;
    int k = low;
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            merge_arr[k++] = arr[i++];
        }
        else merge_arr[k++] = arr[j++];
    }
    while(i <= mid) merge_arr[k++] = arr[i++];
    while(j <= high) merge_arr[k++] = arr[j++];
    for(int i=0; i<k; i++){
        arr[i] = merge_arr[i];
    }
}

void merge_sort(int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        merge_sort(low, mid);
        merge_sort(mid+1, high);
        merge(low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    merge_sort(0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

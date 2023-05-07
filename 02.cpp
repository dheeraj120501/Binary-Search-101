#include <iostream>
using namespace std;

// Time Complexity: O(log n)
// Space Complexity: O(1)
int solution(int* arr, int n, int k) {

    int order = 1;

    if((n > 1) && (arr[0] > arr[1])) {
        order = -1;
    }

    int l = 0, h = n-1;

    while(l<=h) {
        int mid = (h-l)/2 + l;
        if(order == 1) {
            if(arr[mid] == k) {
                return mid;
            }else if(arr[mid] > k) {
                h = mid-1;
            }else{
                l = mid+1;
            }
        }else {
            if(arr[mid] == k) {
                return mid;
            }else if(arr[mid] > k) {
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
    }

    return -1;
}


int main() {

    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int k = 7;

    cout<<solution(arr, sizeof(arr)/sizeof(arr[0]), k);

   return 0;   
}
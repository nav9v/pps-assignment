#include <stdio.h>

int main() {
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 78, 96};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 23;
  
  int low = 0, high = n - 1;
  int result = -1;
  
  while (low <= high) {
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == x) {
      result = mid;
      break;
    }
    else if (arr[mid] < x) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  
  if (result == -1) {
    printf("Element not found\n");
  }
  else {
    printf("Element found at index %d\n", result);
  }
  
  return 0;
}

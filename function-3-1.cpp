#include <stdbool.h>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }

  int i = 0;
  bool ascending = true;
  bool palindrome = true;

  while (palindrome && i < n / 2) {
    if (array[i] != array[n - i - 1]) {
      palindrome = false;
    }
    i++;
  }

  if (palindrome) {
    if (n % 2 == 0) {
      i = 0; 
      while (ascending && i < n / 2 - 1) {
        if (array[i + 1] < array[i]) {
          ascending = false;
        }
        i++;
      }
    } else {
      i = 0;                           
      while (ascending && i < n / 2) { 
        if (array[i + 1] < array[i]) {
          ascending = false;
        }
        i++;
      }
    }

    return ascending; 
  }

  return false; 
}

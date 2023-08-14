#include <iostream>

int *readNumbers() {
  int *number = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "enter a number please: ";
    std::cin >> number[i];
  }

  return number;
}

int secondSmallestSum(int *numbers, int length) {

  int smallest = numbers[0] + numbers[1];
  int second_smallest = numbers[0] + numbers[1];

  for (int i = 0; i < length; i++) {
    int sum = 0;
    for (int j = i; j < length; j++) {
      sum += numbers[j];
      if (sum < second_smallest && sum < smallest) {
        second_smallest = smallest;
        smallest = sum;
      } else if (sum < second_smallest && sum > smallest) {
        second_smallest = sum;
      }
    }
  }

  return second_smallest;
}

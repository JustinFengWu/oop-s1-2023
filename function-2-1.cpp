#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  int temp = stoi(decimal_number);
  int counter = 0;
  int i = 0;

  while (temp != 0) {
    temp /= 2;
    counter++;
  }

  int* binary_numbers = new int[counter];

  temp = std::stoi(decimal_number);

  while (temp != 0) {
    binary_numbers[i] = temp % 2;
    temp /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    std::cout << binary_numbers[j];
  }
  std::cout << std::endl;

  delete[] binary_numbers;

}

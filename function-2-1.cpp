#include <iostream>
#include <string>

std::string print_binary_str(std::string decimal_number) {
  int temp = std::stoi(decimal_number);
  int counter = 0;
  int i = 0;

  while (temp / 2 != 0) {
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

  std::string binary_string;
  for (int j = i - 1; j >= 0; j--) {
    binary_string += std::to_string(binary_numbers[j]);
  }

  delete[] binary_numbers;

  return binary_string;
}

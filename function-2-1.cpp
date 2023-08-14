#include <iostream>

int *readNumbers() {
  int *number = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "enter a number please: ";
    std::cin >> number[i];
  }

  return number;
}

#include <iostream>

void hexDigits(int *numbers, int length) {
  char hex = '0';
  for (int i = 0; i < length; i++) {
    switch (numbers[i]) {
      case 10:
        hex = 'A';
        break;
      case 11:
        hex = 'B';
        break;
      case 12:
        hex = 'C';
        break;
      case 13:
        hex = 'D';
        break;
      case 14:
        hex = 'E';
        break;
      case 15:
        hex = 'F';
        break;
      default:
        hex = numbers[i] + '0'; 
        break;
    }
    std::cout << i << " " << numbers[i] << " " << hex << std::endl;
  }
  return;
}

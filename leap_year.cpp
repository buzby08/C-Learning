#include <iostream>

int main() {
  int year;
  
  std::cout << "Enter a year: ";
  std::cin >> year;


  if (year % 4 == 0) {

    if ((year % 100 == 0) and (year % 400 != 0)) {
      std::cout << year << " is not a leap year 1\n";

    } else if (year % 400 == 0) {
      std::cout << year << " is a leap year. 2\n";

    } else {
      std::cout << year << " is not a leap year 3\n";

    }

  } else {
    std::cout << year << " is not a leap year 4\n";

  }
  
}

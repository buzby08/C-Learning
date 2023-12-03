#include <iostream>
#include <vector>

int main() {

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  int sumOfEven = 0;
  int productOfOdd = 1;

  int value;

  for (int i=0; i<nums.size(); i++) {
    value = nums[i];

    if (value % 2 == 0) {
      sumOfEven += value;

    } else {
      productOfOdd *= value;

    }

  }

  std::cout << "Sum of even numbers is " << sumOfEven << "\n";
  std::cout << "Product of odd numbers is " << productOfOdd << "\n";
}

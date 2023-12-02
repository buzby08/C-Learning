// This is at the top of every file, putting libraries at the top is good practice
#include <iostream>

// We use int main() because it is the entry point of the program and it returns an integer value to the operating system.
int main() {
  // Printing to the console is done with std::cout
  std::cout << "Hello World!\n";
  // We can declare variables by the format:
  // type variableName;
  int score;
  // and then we can initialise it with a value
  score = 1;
  // Or we can initialise it with a value and declare it at the same time
  int lives = 3;
  // You can perform math operations with variables
  score = score + 1;
  // You can print variables to the console by using std::cout << variableName;
  // or you can combine them with strings or other variables like below
  std::cout << "Your score is " << score << " and you have " << lives << " lives.\n";

  int age;
  std::cout << "Enter your age: ";
  // Many programs use values inputted by the user. We can do this in C++ by using std::cin >> variableName;
  std::cin >> age;
  // The variable has to be initialised before though

  std::cout << "You are " << age << " years old.\n";

  // We can use if statements to check if a condition is true or false
  if (age >= 21) {
    std::cout << "You are old enough to buy alcohol in the USA.\n";
    
// else if is used to check for another condition
} else if (age >= 18) {
    std::cout << "You are old enough to buy alcohol in the UK, but\n";
    std::cout << "not in the USA\n";

// else is used to run code if none of the above conditions are true
} else {
    std::cout << "You are still a child, you can't buy alcohol in\n";
    std::cout << "the UK nor the USA.\n";
}

  // We can also use switch statements to check for multiple conditions
  switch(score) { // The variable inside the () is what will be checked
  // Inside the block there are multiple cases.
    case 5: // If the variable is equal to 5
      std::cout << "You scored a 5!\n";
      break; // Break is used to end the case
    case 10:
      std::cout << "You scored a 10!\n";
      break;
    default: // Runs if the variable doesnt match any of the cases, like an else statemnt
      std::cout << "You scored a 0 :(\n";
      break;
}
  // We can also use boolean logic in conditions.
  // For AND, you can use && or the and keyword.
  // For OR, you can use || or the or keyword.
  // For NOT, you can use ! or the not keyword.

  int x = 10;
  int y = 5;
  
  if (x > 5 && y < 10) {
    std::cout << "Both conditions are true";
  } else if (x < 5 || y > 10) {
    std::cout << "One of the conditions is true";
  } else if (!(x == 5)) {
    std::cout << "The negation of x being equal to 5 is true";
  } else {
    std::cout << "None of the conditions are true";

}


}

#include "candy_shop.hpp"
#include <iomanip>
#include <iostream>

int main() {
  // Create an instance of the `CandyShop` object called `cs`
  CandyShop cs;

  bool continue_menu = true;
  std::cout << "Welcome to the Candy Shop!\n";

  // This is a loop to ask the user to enter in `Candy` objects
  do {
    std::string brand;
    std::string flavor;

    // This asks the user to enter in the brand of the candy
    std::cout << "Enter the brand of candy (q to quit): ";
    std::getline(std::cin, brand);

    // This sets the flag for continuing the loop or not
    // according to user input
    continue_menu = brand != "q" && brand != "Q";
    if (continue_menu) {
      // Create a `Candy` object called `c`
      Candy c;
      // Set the brand of the candy to what was provided by
      // the user
      c.set_brand(brand);
      // This asks the user to enter in the flavor of the candy
      std::cout << "Enter the flavor of candy: ";
      std::getline(std::cin, flavor);

      // Set the flavor of the candy
      c.set_flavor(flavor);


      double cost;
      // This asks the user to enter in the cost of the candy
      std::cout << "Enter the cost of candy: ";
      std::cin >> cost;

      // Set the cost of the candy
      c.set_cost(cost);

      std::cin.ignore();

      // Add the `Candy` object to the `CandyShop` bag
      cs.add(c);

    }

  } while (continue_menu);

  // Print all the candy in the `CandyShop` bag using the appropriate member
  // function
  cs.print();

  double price;
  // Get the total price of all the candy in the `CandyShop` bag
  // and assign it to the variable called `price`
  price = cs.total_price();

  // This prints out the price of all the candy in the `CandyShop` bag
  std::cout << "\nThe total cost of all the candy in the bag is: $"
            << std::fixed << std::setprecision(2) << price << "\n";

  return 0;
}

#include "student.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int main() {
  Student lon("Lonnie Hansen", 965137824);
  lon.add_grade(95);
  lon.add_grade(88);
  lon.add_grade(92);
  lon.add_grade(77);
  lon.add_grade(84);
  lon.print_student();
  double total_grade = lon.calculate_grade();
  std::cout << "Total grade = " << std::setprecision(2) << std::fixed
  			<< total_grade << "\n";
}

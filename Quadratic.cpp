#include <iostream>
#include <cmath>

int main() {
  int a, b,c;
  std::cout << "A,B,C\n";
  std::cin >> a;"\n";
  std::cin >> b;"\n";
  std::cin >> c;"\n";
  int root1 = ((-b)+std::sqrt((pow(b,2))-4*a*c))/(2*a);
  int root2 = ((-b)-std::sqrt((pow(b,2))-4*a*c))/(2*a);
  std::cout << root1 << " " << root2;
  
}

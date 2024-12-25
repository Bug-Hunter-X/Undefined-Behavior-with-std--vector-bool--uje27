#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(5);
  int i = 10; // index out of bounds

  // Check index before access
  if (i >= 0 && i < vec.size()) {
    bool b = vec[i];
    std::cout << "Value at index " << i << ": " << b << std::endl;
  } else {
    std::cerr << "Index out of bounds!\n";
  }

  return 0;
}

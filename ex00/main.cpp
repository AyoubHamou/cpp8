#include "easyfind.hpp"
#include <vector>

int main() {
  std::vector<size_t> ar;

  ar.push_back(1);
  ar.push_back(2);
  ar.push_back(3);
  ar.push_back(4);
  easyfind(ar, 5);
}

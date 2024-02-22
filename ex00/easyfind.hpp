#pragma once

#include <algorithm>
#include <iostream>

template <typename T> void easyfind(T container, size_t i) {
  if (std::find(container.begin(), container.end(), i) != container.end()) {
    std::cout << "Found" << std::endl;
    return;
  }
  std::cerr << "Not Found" << std::endl;
}

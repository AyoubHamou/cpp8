#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

class Span {
private:
  std::vector<int> vec;
  unsigned int N;

public:
  Span();
  Span(unsigned int _N);
  Span(const Span &other);
  Span operator=(const Span &other);
  ~Span();

  void addNumber(int n);
  int shortestSpan();
  int longestSpan();
  void fillVector(int n);
};

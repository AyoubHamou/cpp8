#include "Span.hpp"
#include <stdexcept>

Span::Span() : vec(0), N(0) {}

Span::Span(unsigned int _N) : vec(0), N(_N) {}

Span::Span(const Span &other) { *this = other; }

Span Span::operator=(const Span &other) {
  if (this != &other) {
    this->N = other.N;
    this->vec = other.vec;
  }
  return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
  if (vec.size() == this->N)
    throw std::out_of_range("the vector is full");
  vec.push_back(n);
}

int Span::shortestSpan() {
  if (vec.empty() || vec.size() == 1)
    throw std::out_of_range("No Span can be found");
  std::vector<int> tmpVec(this->vec);
  std::sort(tmpVec.begin(), tmpVec.end());
  int shortest = tmpVec[1] - tmpVec[0];
  for (size_t i = 0; i < tmpVec.size() - 1; i++) {
    int tmpInt = tmpVec[i + 1] - tmpVec[i];
    if (shortest > tmpInt)
      shortest = tmpInt;
  }
  return shortest;
}
int Span::longestSpan() {
  if (vec.empty() || vec.size() == 1)
    throw std::out_of_range("No Span can be found");
  int max = *std::max_element(vec.begin(), vec.end());
  int min = *std::min_element(vec.begin(), vec.end());
  return max - min;
}

void Span::fillVector(it begin, it end) {
	std::vector<int> tmp(begin, end);
	int range = tmp.size();

	if (!range)
		throw std::out_of_range("Invalid range");
	if (range + this->vec.size() > this->N)
		throw std::out_of_range("Invalid range");
	this->vec.insert(this->vec.end(),begin,end);
}

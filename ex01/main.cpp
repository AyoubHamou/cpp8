#include "Span.hpp"
#include <vector>

std::vector<int> genVector() {
	std::vector<int> res;

  for (int i = 0; i < 1000; i++)
    res.push_back(i);
	return res;
}



int main() {
	try{
		std::vector<int> tmp = genVector();

		Span sp = Span(1005);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.fillVector(tmp.begin(), tmp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
  return 0;
}

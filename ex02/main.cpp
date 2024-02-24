#include "MutantStack.hpp"

#include "iostream"

int main(void) {
  /* Work here */
  // main dyalhom
  std::cout << "--------------------- Testing using subject main; "
               "--------------------- "
            << std::endl;

  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::reverse_iterator rit = mstack.rbegin();
  MutantStack<int>::iterator ite = mstack.end();
  MutantStack<int>::reverse_iterator rite = mstack.rend();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::cout << "From last to begin" << std::endl;
  for (; rit != rite; rit++)
    std::cout << *rit << std::endl;
  std::stack<int> s(mstack);
  return 0;
}

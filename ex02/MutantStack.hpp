#pragma once

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
private:
public:
  MutantStack() :std::stack<T>()  {}
  MutantStack(const MutantStack<T> &other) :std::stack<T>(other) { *this = other; }
  MutantStack<T> &operator=(const MutantStack<T> &other){
    if (this != &other) {
			std::stack<T>::operator=(other);
    }
    return *this;
  }
  ~MutantStack() {}

  // define an iterator, from dqeue
  typedef typename std::deque<T>::iterator iterator;
  typedef typename std::deque<T>::reverse_iterator reverse_iterator;
  // define the begin and end functins, and rend and rbegin.
  iterator begin() { return this->c.begin(); }
  reverse_iterator rbegin() { return this->c.rbegin(); }
  iterator end() { return this->c.end(); }
  reverse_iterator rend() { return this->c.rend(); }
};

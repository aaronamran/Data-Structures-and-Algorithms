// container is a data type that stores a collection of unnamed objects (elements)
// elements are unnamed so we can insert any number of elements as desired
// containers are homogenous (requires same type of data)
// scripting languages like Python typically support heterogenous (different types of data) containers

// The following are containers under the general programming definition, but are not considered to be containers by the C++ standard
// C-style arrays
// std::string
// std::vector<bool>

// container class - a class type that implements a container
// 1) std::vector 

#include <iostream>
#include <vector>

int main() {
  // value initialisation (uses default constructor)
  std::vector<int> primes{2, 3, 5, 7};  // vector containing 4 int elements with values 2, 3, 5, 7

  std::cout << "The first prime is: " << primes[0];  // access arrays using subscript operators []
  return 0;
}

// operator [] does not provide bounds checking (does not check to see if index is within bounds of 0 to N-1)
// passing an invalid index to [] will return undefined behavior

// can define specific length for std::vector
std::vector<int> data(10);  // vector containing 10 int elements, value-initialised to 0

// arrays are contiguous in memory (all elements are adjacent in memory, with no gaps between them)


// 2) C-style arrays


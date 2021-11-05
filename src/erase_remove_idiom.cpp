/*
https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
https://en.cppreference.com/w/cpp/algorithm/remove
https://en.cppreference.com/w/cpp/container/vector/erase

#include <algorithm>  // remove and remove_if

// Initializes a vector that holds numbers from 0-9.
std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// Removes all elements with the value 5.
v.erase(std::remove(v.begin(), v.end(), 5), v.end());

// Removes all odd numbers.
v.erase(std::remove_if(v.begin(), v.end(), IsOdd), v.end());
*/

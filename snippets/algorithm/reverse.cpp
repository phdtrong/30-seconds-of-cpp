/*
    Author : Trong Pham
    Date : 03/13/2021
    Time : 9:50 AM
    Description : Reversing orders of all elements
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main () {
  //vector definition
  std::vector<int> my_vector = {2, 3, 4, 5, 6, 7};

  // printing the initial vector
	std::cout << "The content of the vector before reversing: ";
	for (auto my_value : my_vector){
	    std::cout << " " << my_value;
	}
	std::cout << std::endl;
  
  // reversing all elements of vector
  std::reverse(my_vector.begin(),my_vector.end());
                                                 
  // print out vector after rotating
  std::cout << "The content of the vector after reversing: ";
  for (std::vector<int>::iterator my_iterator=my_vector.begin(); my_iterator!=my_vector.end(); ++my_iterator)
    std::cout << " " << (*my_iterator);
  std::cout << std::endl;

  return 0;
}

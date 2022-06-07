/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:36:42 by aalcara-          #+#    #+#             */
/*   Updated: 2022/06/06 21:20:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

#ifndef VECTOR_TEST
#define VECTOR_TEST

void test_vector(void)
{
	std::cout << "========================" <<std::endl;
	std::cout << "         vector         " <<std::endl;
	std::cout << "========================" <<std::endl;

	std::cout << "\n---\nconstructors\n---" <<std::endl;
	ft::vector<int>  empty_vec;
	ft::vector<std::string> fill_vec(6, "abc");
	ft::vector<std::string> other_vec(1, "AAA");
	// other_vec.push_back("BBB");
	// other_vec.push_back("CCC");
	// other_vec.push_back("DDD");
	// other_vec.push_back("EEE");
	// other_vec.push_back("FFF");
	// other_vec.push_back("GGG");


	std::cout << "\n---\niterators\n---" <<std::endl;
	fill_vec.push_back("123");
	ft::vector<std::string>::iterator it;
	ft::vector<std::string>::iterator it2(fill_vec.begin());
	ft::vector<std::string>::iterator it3;
	it = it2;
	it3 = it2 + 5;
	std::cout << "assignment operator: " << *it << std::endl;

	// equality/inequality operators
	std::cout << "equality operator: " << (it == it2) << std::endl;
	std::cout << "equality operator: " << (it == it3) << std::endl;
	std::cout << "inequality operator: " << (it != it2) << std::endl;
	std::cout << "inequality operator: " << (it != it3) << std::endl;
	
	//dereference
	std::cout << "*it3: " << *it3 << std::endl;

	// increment and decrement iterator
	std::cout << "increment and decrement iterator: " << std::endl;
	std::cout << "*(++it3): " << *(++it3) << std::endl;
	std::cout << "*(it3): " << *(it3) << std::endl;
	std::cout << "*(--it3): " << *(--it3) << std::endl;
	std::cout << "*(it3): " << *(it3) << std::endl;
	std::cout << "*(it3++): " << *(it3++) << std::endl;
	std::cout << "*(it3): " << *(it3) << std::endl;
	std::cout << "*(it3--): " << *(it3--) << std::endl;
	std::cout << "*(it3): " << *(it3) << std::endl;
	
	// arithmetic operator
	std::cout << "arithmetic operator: " << std::endl;
	it3 = it2 + 6;
	std::cout << "it + 6: " << *it3 << std::endl;
	it2 = it3 - 6;
	std::cout << "it - 6: " << *it2 << std::endl;

	// relational operator
	std::cout << "relational operator: " << std::endl;
	std::cout << "it2 < it3: " << (it2 < it3) << std::endl;
	std::cout << "it2 > it3: " << (it2 > it3) << std::endl;
	std::cout << "it2 <= it3: " << (it2 <= it3) << std::endl;
	std::cout << "it2 >= it3: " << (it2 >= it3) << std::endl;
	std::cout << "it2 <= it: " << (it2 <= it) << std::endl;
	std::cout << "it2 >= it: " << (it2 >= it) << std::endl;

	// compound assignment operations
	std::cout << "compound assignment operations: " << std::endl;
	std::cout << "*(it3 -= 1): " << *(it3 -= 1) << std::endl;
	std::cout << "*it3: " << *it3 << std::endl;
	std::cout << "*(it3 += 1): " << *(it3 += 1) << std::endl;
	std::cout << "*it3: " << *it3 << std::endl;

	// offset dereference operator
	std::cout << "offset dereference operator: " << std::endl;
	std::cout << "it2[6]: " << (it2[6]) << std::endl;
	
	


	// std::cout << "---\nconstructors that need iterators" <<std::endl;
	// std::cout << "TEST X: range constructor" <<std::endl;

}

#endif
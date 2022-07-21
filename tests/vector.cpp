/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:36:42 by aalcara-          #+#    #+#             */
/*   Updated: 2022/07/21 08:46:15 by aalcara-         ###   ########.fr       */
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


	/* 
	**	Constructors
	*/
	std::cout << "\n---\nconstructors\n---" <<std::endl;
	ft::vector<std::string>  empty_vec;
	ft::vector<std::string> fill_vec(6, "abc");
	ft::vector<std::string> other_vec(1, "AAA");
	empty_vec.push_back("BBB");
	empty_vec.push_back("CCC");
	empty_vec.push_back("DDD");
	empty_vec.push_back("EEE");
	empty_vec.push_back("FFF");
	empty_vec.push_back("GGG");
	empty_vec.push_back("HHH");
	
	/* 
	**	Iterators
	*/
	std::cout << "\n---\niterators\n---" <<std::endl;
	fill_vec.push_back("123");
	ft::vector<std::string>::iterator it;
	ft::vector<std::string>::iterator it2(empty_vec.begin());
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
	
	/* 
	**	Reverse Iterators
	*/
	std::cout << "\n---\nReverse iterators\n---" <<std::endl;
	ft::vector<std::string>::reverse_iterator reverseit;
	ft::vector<std::string>::reverse_iterator reverseit2(empty_vec.rbegin());
	ft::vector<std::string>::reverse_iterator reverseit3;
	reverseit = reverseit2;
	reverseit3 = reverseit2 + 5;
	std::cout << "assignment operator: " << *reverseit << std::endl;
	
	//dereference
	std::cout << "*reverseit3: " << *reverseit3 << std::endl;

	// arithmetic operator
	std::cout << "arreverseithmetic operator: " << std::endl;
	reverseit3 = reverseit2 + 4;
	std::cout << "reverseit + 4: " << *reverseit3 << std::endl;
	reverseit2 = reverseit3 - 2;
	std::cout << "reverseit - 2: " << *reverseit2 << std::endl;

	// increment and decrement reverseiterator
	std::cout << "increment and decrement reverseiterator: " << std::endl;
	std::cout << "*(++reverseit3): " << *(++reverseit3) << std::endl;
	std::cout << "*(reverseit3): " << *(reverseit3) << std::endl;
	std::cout << "*(--reverseit3): " << *(--reverseit3) << std::endl;
	std::cout << "*(reverseit3): " << *(reverseit3) << std::endl;
	std::cout << "*(reverseit3++): " << *(reverseit3++) << std::endl;
	std::cout << "*(reverseit3): " << *(reverseit3) << std::endl;
	std::cout << "*(reverseit3--): " << *(reverseit3--) << std::endl;
	std::cout << "*(reverseit3): " << *(reverseit3) << std::endl;

	// compound assignment operations
	std::cout << "compound assignment operations: " << std::endl;
	std::cout << "*(reverseit3 -= 1): " << *(reverseit3 -= 1) << std::endl;
	std::cout << "*reverseit3: " << *reverseit3 << std::endl;
	std::cout << "*(reverseit3 += 1): " << *(reverseit3 += 1) << std::endl;
	std::cout << "*reverseit3: " << *reverseit3 << std::endl;
	
	// offset dereference operator
	ft::vector<std::string>::reverse_iterator reverseit4(empty_vec.rbegin());
	std::cout << "offset dereference operator: " << std::endl;
	std::cout << "reverseit4[6]: " << (reverseit4[6]) << std::endl;

	// equality/inequality operators
	std::cout << "equality operator: " << (it == it2) << std::endl;
	std::cout << "equality operator: " << (it == it3) << std::endl;
	std::cout << "inequality operator: " << (it != it2) << std::endl;
	std::cout << "inequality operator: " << (it != it3) << std::endl;
	

	// relational operator
	std::cout << "relational operator: " << std::endl;
	std::cout << "it2 < it3: " << (it2 < it3) << std::endl;
	std::cout << "it2 > it3: " << (it2 > it3) << std::endl;
	std::cout << "it2 <= it3: " << (it2 <= it3) << std::endl;
	std::cout << "it2 >= it3: " << (it2 >= it3) << std::endl;
	std::cout << "it2 <= it: " << (it2 <= it) << std::endl;
	std::cout << "it2 >= it: " << (it2 >= it) << std::endl;

	/* 
	**	Constructor that need iterators
	*/
	std::cout << "\n---\nconstructors that need iterators\n---" <<std::endl;
	ft::vector<int> first (4, 100);
	std::cout << "range constructor:" <<std::endl;
	ft::vector<int> range_vec (first.begin(),first.end()); 
	ft::vector<int>::iterator range_begin(range_vec.begin());
	ft::vector<int>::iterator range_end(range_vec.end());

	while (range_begin != range_end)
	{
		std::cout << *range_begin << " ";
		range_begin++;
	}
	std::cout << std::endl;

	// copy constructor
	ft::vector<std::string> copy_vec(empty_vec);
	std::cout << "copy constructor:";
	ft::vector<std::string>::iterator copy_begin(copy_vec.begin());
	ft::vector<std::string>::iterator copy_end(copy_vec.end());

	while (copy_begin != copy_end)
	{
		std::cout << " " << *copy_begin;
		copy_begin++;
	}

	/* 
	**	Member Functions Iterators
	*/
	std::cout << "\n---\nmember functions iterators\n---" <<std::endl;
	ft::vector<std::string>::iterator it_begin(empty_vec.begin());
	std::cout << "it_begin: " << *it_begin << std::endl;
	ft::vector<std::string>::iterator it_end(empty_vec.end());
	it_end--;
	std::cout << "it_end--: " << *it_end << std::endl;
	ft::vector<std::string>::const_iterator it_cbegin(empty_vec.begin());
	std::cout << "it_cbegin: " << *it_cbegin << std::endl;
	ft::vector<std::string>::const_iterator it_cend(empty_vec.end());
	std::cout << "vector content:";
	while (it_cbegin != it_cend)
	{
		std::cout << " " << *it_cbegin;
		it_cbegin++;
	}
	std::cout << std::endl;
	it_cend--;
	std::cout << "it_cend--: " << *it_cend << std::endl;
	
	//reverse iterators
	std::cout << "reverse iterators" << std::endl;
	ft::vector<std::string>::reverse_iterator it_rbegin(empty_vec.rbegin());
	std::cout << "it_rbegin: " << *it_rbegin << std::endl;
	ft::vector<std::string>::reverse_iterator it_rend(empty_vec.rend());
	it_rend--;
	std::cout << "it_rend--: " << *it_rend << std::endl;
	ft::vector<std::string>::const_reverse_iterator it_crbegin(empty_vec.rbegin());
	std::cout << "it_crbegin: " << *it_crbegin << std::endl;
	ft::vector<std::string>::const_reverse_iterator it_crend(empty_vec.rend());
	std::cout << "vector content:";
	while (it_crbegin != it_crend)
	{
		std::cout << " " << *it_crbegin;
		it_crbegin++;
	}
	std::cout << std::endl;
	it_cend--;
	std::cout << "it_cend--: " << *it_cend << std::endl;
	

	/* 
	**	Capacity member functions
	*/
	std::cout << "\n---\nCapacity member functions\n---" <<std::endl;
	// size
	std::cout << "size:" << std::endl;
	std::cout << "empty_vec size: " << empty_vec.size() << std::endl;
	std::cout << "other_vec size: " << other_vec.size() << std::endl;
	std::cout << "fill_vec size: " << fill_vec.size() << std::endl;
	std::cout << "first size: " << first.size() << std::endl;
	std::cout << "range_vec size: " << range_vec.size() << std::endl;
	std::cout << "copy_vec size: " << copy_vec.size() << std::endl;
	// max_size
	std::cout << "max_size:" << std::endl;
	std::cout << "empty_vec max_size: " << empty_vec.max_size() << std::endl;
	std::cout << "other_vec max_size: " << other_vec.max_size() << std::endl;
	std::cout << "fill_vec max_size: " << fill_vec.max_size() << std::endl;
	std::cout << "first max_size: " << first.max_size() << std::endl;
	std::cout << "range_vec max_size: " << range_vec.max_size() << std::endl;
	std::cout << "copy_vec max_size: " << copy_vec.max_size() << std::endl;
	

}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:37:44 by aalcara-          #+#    #+#             */
/*   Updated: 2022/05/14 20:31:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

#ifdef _STL //CREATE A REAL STL EXAMPLE
	#include <map>
	#include <stack>
	#include <vector>
	namespace ft = std;
	#define VERSION "stl"
#else
	#include <map.hpp>
	#include <stack.hpp>
	#include <vector.hpp>
	#define VERSION "ft"
#endif

int main(void)
{
	std::cout << "Version: " << VERSION <<std::endl;
	// std::string parsed_arg = argv[1];
	// if (parsed_arg == "vector")
	// 	test_vector();
	test_vector();
	
}
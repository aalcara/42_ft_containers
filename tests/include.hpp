/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:21:22 by aalcara-          #+#    #+#             */
/*   Updated: 2022/05/23 17:17:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_HPP
#define FT_CONTAINERS_HPP

#include <iostream>

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

void	test_vector(void);


#endif

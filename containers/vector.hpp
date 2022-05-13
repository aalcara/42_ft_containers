// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   vector.hpp                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/04/18 18:06:09 by aalcara-          #+#    #+#             */
// /*   Updated: 2022/05/11 17:43:49 by aalcara-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef VECTOR_HPP
// #define VECTOR_HPP

// #include <memory>

// namespace ft
// {
// 	template < class T, class Alloc = std::allocator<T> >
// 	class vector
// 	{
// 		public:

// 			/*=================
// 				MEMBER TYPES
// 			=================*/
// 			typedef T								value_type;
// 			typedef Alloc							allocator_type;
// 			typedef allocator_type::reference		reference;
// 			typedef allocator_type::const_reference	const_reference;
// 			typedef allocator_type::pointer			pointer;
// 			typedef allocator_type::const_pointer	const_pointer;
// 			// iterator
// 			// const_iterator
			
// 			// reverse_iterator
// 			// const_reverse_iterator
// 			typedef ptrdiff_t						difference_type;
// 			typedef size_t							size_type;

// 			/*=================
// 			CONSTRUCTORS
// 			=================*/
// 			//* empty container constructor (default constructor)
// 			//* Constructs an empty container, with no elements.
// 			explicit vector (const allocator_type& alloc = allocator_type())
// 			{
				
// 			}

// 			//* fill constructor
// 			//* Constructs a container with n elements. Each element is a copy of val.
// 			// explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());

// 			//* range constructor
// 			//* Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range, in the same order.
// 			// template <class InputIterator>
// 			// vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());

// 			//* copy constructor
// 			//* Constructs a container with a copy of each of the elements in x, in the same order.
// 			// vector (const vector& x);
		
// 		private:
// 			size_type			_size;
// 			size_type			_capacity;
// 			allocator_type		_alloc;
			
// 	};

// }

// #endif
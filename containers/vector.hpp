/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:06:09 by aalcara-          #+#    #+#             */
/*   Updated: 2022/06/06 18:56:17 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include <cstddef>
#include "random_access_iterator.hpp"

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:

			/*=================
				MEMBER TYPES
			=================*/
			typedef T	value_type;
			typedef Alloc	allocator_type;
			typedef typename allocator_type::reference	reference;
			typedef typename allocator_type::const_reference	const_reference;
			typedef typename allocator_type::pointer	pointer;
			typedef typename allocator_type::const_pointer	const_pointer;
			typedef ft::random_access_iterator<value_type>	iterator;
			// const_iterator
			
			// reverse_iterator
			// const_reverse_iterator
			typedef ptrdiff_t						difference_type;
			typedef size_t							size_type;

			/*=================
			CONSTRUCTORS
			=================*/
			//* empty container constructor (default constructor)
			//* Constructs an empty container, with no elements.
			explicit vector (const allocator_type& alloc = allocator_type())
			{
				_data = NULL;
				_alloc = alloc;
				_size = 0;
				_capacity = 0;
			}

			//* fill constructor
			//* Constructs a container with n elements. Each element is a copy of val.
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			{
				this->_alloc = alloc;
				this->_size = n;
				this->_capacity = n;
				this->_data = _alloc.allocate(this->_size);
				for (size_type i = 0; i < n; i++)
				{
					this->_alloc.construct(&_data[i], val);
				}
			}

			//* range constructor
			//* Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range, in the same order.
			template <class InputIterator>
			vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
			{
				this->_alloc = alloc;
				if (this->_data)
					this->_alloc.deallocate(this->_data, this->size);
				this->_size = last - first;
				this->_capacity = this->_size;
				this->_data = this->_alloc.allocate(this->_size);
				for (size_type i = 0; 0 < this->_size; i++)
				{
					this->_alloc.construct(&this->_data[i], *first);
					first++;
				}

			}

			//* copy constructor
			//* Constructs a container with a copy of each of the elements in x, in the same order.
			// vector (const vector& x);


			/*=================
			ITERATORS
			=================*/
			iterator begin()
			{
				return iterator(this->_data);
			}


			/*=================
			MODIFIERS
			=================*/
			void	push_back(const value_type &val)
			{
				if(this->_size > this->_capacity)
				{
					value_type* tmp = this->_alloc.allocate(this->_size);
					for(size_type i = 0; i < this->_size; i++)
					{
						this->_alloc.construct(&tmp[i], this->_data[i]);
					}
					this->_alloc.deallocate(this->_data, this->_capacity);
					this->_data = tmp;
					this->_capacity += 1;
				}
				this->_alloc.construct(this->_data + this->_size, val);
				this->_size += 1;

				
			}
			
		private:
			value_type*			_data;
			size_type			_size;
			size_type			_capacity;
			allocator_type		_alloc;
			
	};

}

#endif
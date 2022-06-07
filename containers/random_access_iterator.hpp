/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:33:41 by aalcara-          #+#    #+#             */
/*   Updated: 2022/06/06 21:20:55 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

namespace ft
{
	template<typename T>
	class random_access_iterator
	{
		public:
			typedef std::random_access_iterator_tag 	iterator_category;
			typedef std::ptrdiff_t 		difference_type;
			typedef T 				value_type;
			typedef T*				pointer;
			typedef T& 				reference;

		private:
			pointer	_ptr;

		public:
			random_access_iterator(void){}
			random_access_iterator(pointer src): _ptr(src) {}
			random_access_iterator(random_access_iterator const &src)
			{
				*this = src;
			}
			~random_access_iterator(void){}
			random_access_iterator &operator=(random_access_iterator const &MyObj)
			{
				if (this != &MyObj)
					this->_ptr = MyObj._ptr;
				return (*this);
			}

			// equality/inequality operators
			
			bool operator==(random_access_iterator const &MyObj) const
			{
				return (this->_ptr == MyObj._ptr);
			}

			bool operator!=(random_access_iterator const &MyObj) const
			{
				return (this->_ptr != MyObj._ptr);
			}
			
			// dereference

			reference operator*() const
			{
				return (*(this->_ptr));
			}

			pointer operator->() const
			{
				return (&(operator*()));
			}

			// Increment and decrement operators

			random_access_iterator &operator++()
			{
				this->_ptr++;
				return (*this);
			}

			random_access_iterator operator++(int)
			{
				random_access_iterator tmp(*this);
				this->_ptr++;
				return tmp;
			}

			random_access_iterator& operator--()
			{
				this->_ptr--;
				return (*this);
			}

			random_access_iterator operator--(int)
			{
				random_access_iterator tmp(*this);
				this->_ptr--;
				return tmp;
			}

			// arithmetic operator

			random_access_iterator operator+ (difference_type n)
			{
				return (random_access_iterator(this->_ptr + n));
			}

			random_access_iterator operator- (difference_type n)
			{
				return (random_access_iterator(this->_ptr - n));
			}

			// relational operator

			bool operator<(const random_access_iterator &MyObj) const
			{
				return (this->_ptr < MyObj._ptr);
			}

			bool operator>(const random_access_iterator &MyObj) const
			{
				return (this->_ptr > MyObj._ptr);
			}

			bool operator<=(const random_access_iterator &MyObj) const
			{
				return (this->_ptr <= MyObj._ptr);
			}
			
			bool operator>=(const random_access_iterator &MyObj) const
			{
				return (this->_ptr >= MyObj._ptr);
			}

			// compound assignment operations
			random_access_iterator& operator+= (difference_type n)
			{
				this->_ptr += n;
				return (*this);
			}

			random_access_iterator& operator-= (difference_type n)
			{
				this->_ptr -= n;
				return (*this);
			}

			// offset dereference operator
			reference operator[] (difference_type n)
			{
				return (this->_ptr[n]);
			}
	};
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:00:38 by aalcara-          #+#    #+#             */
/*   Updated: 2022/07/18 19:41:03 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft
{
	template <class Iterator>
	class reverse_iterator
	{
	public:
		typedef Iterator iterator_type;
		typedef typename iterator_traits<Iterator>::iterator_category iterator_category;
		typedef typename iterator_traits<Iterator>::value_type value_type;
		typedef typename iterator_traits<Iterator>::difference_type difference_type;
		typedef typename iterator_traits<Iterator>::pointer pointer;
		typedef typename iterator_traits<Iterator>::reference reference;

		reverse_iterator(void){};

		explicit reverse_iterator(iterator_type it) : _iter(it) {};

		reverse_iterator(const reverse_iterator<Iterator> &rev_it)
		{
			*this = rev_it;
		}

		~reverse_iterator(void) {};

		// base
		iterator_type base(void) const
		{
			return (this->_iter);
		}

		//operators
		reference operator*(void) const
		{
			return (*(this->_iter));
		}

		reverse_iterator operator+ (difference_type n)
		{
			return (reverse_iterator(this->_iter - n));
		}

		reverse_iterator operator- (difference_type n)
		{
			return (reverse_iterator(this->_iter + n));
		}

		reverse_iterator &operator++()
		{
			this->_iter--;
			return (*this);
		}

		reverse_iterator operator++(int)
		{
			reverse_iterator tmp(*this);
			this->_iter--;
			return tmp;
		}

		reverse_iterator& operator--()
		{
			this->_iter++;
			return (*this);
		}

		reverse_iterator operator--(int)
		{
			reverse_iterator tmp(*this);
			this->_iter++;
			return tmp;
		}

		reverse_iterator& operator+= (difference_type n)
		{
			this->_iter -= n;
			return (*this);
		}

		reverse_iterator& operator-= (difference_type n)
		{
			this->_iter += n;
			return (*this);
		}

		pointer operator->() const
		{
			return (&(operator*()));
		}

		reference operator[] (difference_type n)
		{
			return (this->_iter[-n]);
		}

	private:
		iterator_type _iter;
	};

	template <class Iterator>
	bool operator== (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() == rhs.base());
	}

	template <class Iterator>
	bool operator!= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() != rhs.base());
	}

	template <class Iterator>
	bool operator< (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() < rhs.base());
	}

	template <class Iterator>
	bool operator<= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator>
	bool operator> (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() > rhs.base());
	}

	template <class Iterator>
	bool operator>= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (lhs.base() >= rhs.base());
	}
}

#endif
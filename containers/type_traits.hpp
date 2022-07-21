/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_traits.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:17:29 by aalcara-          #+#    #+#             */
/*   Updated: 2022/07/20 20:05:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_TRAITS_HPP
#define TYPE_TRAITS_HPP

namespace ft
{
	// enable_if : its have a member_type type (defined only if B is true)
	//can be used as an additional function argument 
	template<bool B, class T = void>
	struct enable_if {};
	
	// Especialization to run when B is true
	template<class T>
	struct enable_if<true, T>
	{
		typedef T type;
	};

	// is_integral
	//checks whether T is an integral type. Provides the member constant value which is equal to true
	//value is the member of constans retur true if T is an integral type otherwise false
	// its inherit from integral_constant
	//T : Type like (for now s bool in our case) and v is the value(true or false in our case)
	template<class T, T v>
	struct integral_constant
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant<T, v> type;
		operator T() {return (v);}
	};
	
	template <class T> struct is_integral: public integral_constant<bool, false> {};
	template<> struct is_integral<bool>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<char>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<wchar_t>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<signed char>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<short int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<long int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<long long int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<unsigned char>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<unsigned short int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<unsigned int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<unsigned long int>: public integral_constant<bool, true> {} ;
	template<> struct is_integral<unsigned long long int>: public integral_constant<bool, true> {} ;

}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:03:09 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 02:20:26 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <fstream>
#include <cmath>


class Fixed
{
	private:
		int fixed_point;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed& f);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& operator=(const Fixed& f);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed& f);
		bool operator<(const Fixed& f);
		bool operator>=(const Fixed& f);
		bool operator<=(const Fixed& f);
		bool operator==(const Fixed& f);
		bool operator!=(const Fixed& f);

		Fixed operator+(const Fixed& f);
		Fixed operator-(const Fixed& f);
		Fixed operator*(const Fixed& f);
		Fixed operator/(const Fixed& f);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& f1, Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator << (std::ostream &out, const Fixed& f);
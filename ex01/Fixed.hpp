/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:56:30 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 02:21:28 by relamine         ###   ########.fr       */
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
};

std::ostream& operator << (std::ostream &out, const Fixed& f);
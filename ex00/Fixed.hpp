/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:56:30 by relamine          #+#    #+#             */
/*   Updated: 2024/11/09 02:40:00 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

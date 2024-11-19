/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:03:15 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 02:57:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& f)
{
	*this = f;
}

Fixed::Fixed(const int num)
{
	this->fixed_point = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
	this->fixed_point = roundf(num * (1 << fractional_bits)); 
}

Fixed& Fixed::operator=(const Fixed& f)
{
	setRawBits(f.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
	return (float(this->fixed_point) / float(1 << fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> fractional_bits);
}

std::ostream& operator << (std::ostream &out, const Fixed& f)
{
	out << f.toFloat();
	return (out);
}


bool Fixed::operator>(const Fixed& f)
{
	return (this->fixed_point > f.getRawBits());
}

bool Fixed::operator<(const Fixed& f)
{
	return (this->fixed_point < f.getRawBits());
}

bool Fixed::operator>=(const Fixed& f)
{
	return (this->fixed_point >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed& f)
{
	return (this->fixed_point <= f.getRawBits());
}

bool Fixed::operator==(const Fixed& f)
{
	return (this->fixed_point == f.getRawBits());
}

bool Fixed::operator!=(const Fixed& f)
{
	return (this->fixed_point != f.getRawBits());
}

Fixed Fixed::operator+(const Fixed& f)
{
	return (this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed& f)
{
	return (this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed& f)
{
	return (this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed& f)
{
	return (this->toFloat() / f.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->fixed_point;
	return (tmp);
}

Fixed Fixed::operator++()
{
	++this->fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->fixed_point;
	return (tmp);
}

Fixed Fixed::operator--()
{
	--this->fixed_point;
	return (*this);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

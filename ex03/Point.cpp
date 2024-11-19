/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:17:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 08:16:49 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(float f1, float f2): x(f1), y(f2) {}

Point::Point(const Point& p): x(p.x), y(p.y) {}

Point& Point::operator=(const Point& p) { (void)p; return (*this); }

Point::~Point(){}

float Point::get_x( void ) const
{
	return (this->x.toFloat());
}

float Point::get_y( void ) const
{
	return (this->y.toFloat());
}
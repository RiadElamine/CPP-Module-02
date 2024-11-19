/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:18:01 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 08:12:57 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(float f1, float f2);
		Point(const Point& p);
		Point& operator=(const Point& p);
		~Point();
		float get_x( void ) const;
		float get_y( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

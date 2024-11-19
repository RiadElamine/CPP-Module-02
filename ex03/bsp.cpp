/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    bsp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:17:56 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 08:12:15 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
	float x1,y1,x2,y2,x3,y3;
	x1 = a.get_x();
	y1 = a.get_y();
	x2 = b.get_x();
	y2 = b.get_y();
	x3 = c.get_x();
	y3 = c.get_y();
	return (abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A = area (a, b, c);
	
	float A1 = area (a, point, c);
	
	float A2 = area (a, point, b);
	
	float A3 = area (point, c, b);
		
	return (A == A1 + A2 + A3);
}
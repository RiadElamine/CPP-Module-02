/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:02:41 by relamine          #+#    #+#             */
/*   Updated: 2024/11/19 08:28:01 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main( void )
{
	Point A (0, 0);
	Point B (10, 30);
	Point C (20, 0);

	Point p_inside (10, 15);
	Point p_outside (30, 15);
	
	std::cout << "is this point (" << p_inside.get_x() << "," << p_inside.get_y() << ") inside the triangle :: " << bsp(A, B, C, p_inside) << std::endl;
	std::cout << "is this point (" << p_inside.get_x() << "," << p_inside.get_y() << ") inside the triangle :: " << bsp(A, B, C, p_outside) << std::endl;
	return 0;
}
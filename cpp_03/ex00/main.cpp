/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:42:07 by jbranco-          #+#    #+#             */
/*   Updated: 2023/12/13 14:47:17 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	var("Pedro");

	var.attack("Someone");
	var.takeDamage(11);
	var.attack("Someone");
	var.beRepaired(5);
}
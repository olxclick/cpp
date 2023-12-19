/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:42:07 by jbranco-          #+#    #+#             */
/*   Updated: 2023/12/19 17:41:40 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	var("lazarooo");

	var.attack("twix");
	var.takeDamage(11);
	var.attack("kitkat");
	var.beRepaired(5);
}
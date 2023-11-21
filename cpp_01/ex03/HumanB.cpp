/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:14 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:57:01 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

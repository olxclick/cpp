/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:09 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:30:13 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon.getType();
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}
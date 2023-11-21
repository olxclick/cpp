/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:18 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:49:02 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <stdio.h>

const std::string& Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string weaponType)
{
	setType(weaponType);
}

Weapon::~Weapon()
{
	
}

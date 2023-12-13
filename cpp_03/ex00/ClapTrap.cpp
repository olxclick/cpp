/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:42:31 by jbranco-          #+#    #+#             */
/*   Updated: 2023/12/13 14:46:50 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor has been called" << std::endl;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Copy Constructor has been called" << std::endl;
	this->name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints >= 1 && this->hitPoints >= 1)
	{
		std::cout << this->name << " has attacked " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << "Not possible to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints || !this->hitPoints)
	{
		std::cout << "ClapTrap" << this->name << " is dead!" << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " has been hit " << " with" << amount << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints >= 1 && this->hitPoints >= 1)
	{	
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " has repaired itself" << "and now has " << this->hitPoints << std::endl; 
		this->energyPoints -= 1;
	}
	else
		std::cout << "Can't repair!" << std::endl;
}

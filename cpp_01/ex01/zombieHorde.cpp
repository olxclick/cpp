/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:58:36 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 13:02:30 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::nameZombie(std::string name)
{
	this->name = name;
}

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *myHorde = new Zombie[n];

	for(int i = 0; i < n; i++)
		myHorde[i].nameZombie(name);
	return (myHorde);
}
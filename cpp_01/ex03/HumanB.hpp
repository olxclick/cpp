/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:06 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:57:05 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class	HumanB{

private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	~HumanB();
	void	attack();
};
#endif
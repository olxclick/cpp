/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:20 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:49:08 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class	Weapon
{

private:
	std::string type;
public:
	const std::string &getType() const;
	void setType(std::string type);
	Weapon(std::string weaponType);
	~Weapon();
};
#endif
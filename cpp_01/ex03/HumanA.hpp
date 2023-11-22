/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:11 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 12:11:55 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class	HumanA{

private:
	Weapon *weapon;
	std::string name;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
};
#endif
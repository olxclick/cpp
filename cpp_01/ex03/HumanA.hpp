/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:53:11 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 15:22:59 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class	HumanA{

private:
	std::string weapon;
	std::string name;

public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();
	void	attack();
};
#endif
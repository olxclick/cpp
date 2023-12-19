/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:43:11 by jbranco-          #+#    #+#             */
/*   Updated: 2023/12/19 17:57:41 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap& operator = (const ScavTrap& other);
	void	guardGate();
};

#endif
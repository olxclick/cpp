/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:24:26 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:44:33 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

class Zombie{
private:
	std::string name;
	void	announce(void);
public:
	Zombie(std::string name);
	~Zombie();
};

void	randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
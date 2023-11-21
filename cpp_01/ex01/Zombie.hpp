/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:24:26 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 13:02:20 by jbranco-         ###   ########.fr       */
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
public:
	void	announce(void);
	Zombie();
	~Zombie();
	void	nameZombie(std::string name);
};
Zombie *zombieHorde(int n, std::string name);


#endif
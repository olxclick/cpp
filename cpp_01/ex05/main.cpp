/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:13:08 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 15:02:59 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	progInfo()
{
	std::cout << "Harl will complain with the following levels:" << std::endl;
	std::cout << "{DEBUG, INFO, WARNING, ERROR}" << std::endl;
}

int main(void)
{
	Harl		guy;
	std::string	level;

	progInfo();
	while (true)
	{
		std::cout << "Enter a level: ";
		getline(std::cin, level);
		if (std::cin.eof())
		{
			clearerr(stdin);
			break ;
		}
		guy.complain(level);
	}
	return (0);
}
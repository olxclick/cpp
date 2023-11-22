/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:35:22 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 16:20:41 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		guy;

	if (argc == 2)
	{
		const std::string	&level = argv[1];
		guy.filter(level);
		
	}
	else
		std::cout << "Not enough arguments" << std::endl;
	return (0);
}
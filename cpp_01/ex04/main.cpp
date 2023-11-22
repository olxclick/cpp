/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:14:40 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 12:54:26 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

std::string	getVar(std::string str)
{
	std::string	input;

	while (true)
	{
		std::cout << str;
		getline(std::cin, input);
		if (!input.empty() || !std::cin.eof() || str[0] != '\n')
			break ;
		clearerr(stdin);
		std::cin.clear();
		std::cout << std::endl;
	}
	return (input);
}

int	main()
{
	std::string	filename = getVar("File name: ");
	std::string	s1 = getVar("First str: ");
	std::string	s2 = getVar("Second str: ");

	readFromFile(filename, s1, s2);
	return (0);
}
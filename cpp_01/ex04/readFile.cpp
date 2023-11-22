/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:31:25 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 13:24:26 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

std::string	checkString(std::string line, std::string s1, std::string s2)
{
	size_t	pos = line.find(s1);

	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1);
	}
	return (line);
}

void	readFromFile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename);
	std::ofstream outputFile(filename.append(".replace"));

	if (file.is_open() && outputFile.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			line = checkString(line, s1, s2);
			outputFile << line << std::endl;
		}
		outputFile.close();
        	file.close();
	}
	else
		std::cerr << "Unable to handle files." << std::endl;
}
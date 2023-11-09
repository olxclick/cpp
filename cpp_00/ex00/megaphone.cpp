/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:47:33 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/08 16:06:41 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{	
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < strlen(argv[i]); j++)
				std::cout << char(toupper(argv[i][j]));
		}
	}
	std::cout<<std::endl;
	return 0;
}
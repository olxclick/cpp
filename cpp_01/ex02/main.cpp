/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:41:50 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/21 14:49:28 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string myStr = "HI THIS IS BRAIN";
	std::string *stringPTR = &myStr;
	std::string &stringREF = myStr;

	std::cout << "Original string_add: " << &myStr << std::endl;
	std::cout << "PTR string_add: " << stringPTR << std::endl;
	std::cout << "REF string_add: " << &stringREF << std::endl;

	std::cout << "Original string: " << myStr << std::endl;
	std::cout << "PTR string: " << myStr << std::endl;
	std::cout << "REF string: " << myStr << std::endl;
}
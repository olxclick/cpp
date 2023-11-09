/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:12:04 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/09 14:14:02 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook{
private:
	Contact contacts[8];
public:
	void add_contact();
	void requirements() const;
	void view_contacts();
	void search();
	int read_index();
	Phonebook();
};

#endif
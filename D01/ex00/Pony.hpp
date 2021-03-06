/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:11:18 by obouykou          #+#    #+#             */
/*   Updated: 2021/01/31 16:08:54 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony
{
	std::string 	name;
	std::string		mainColor;
	int				height;
	
public:
	Pony(void);
	Pony(std::string);
	~Pony(void);
	void			setName(std::string name);
	std::string		getName(void);
	void			setHeight(int);
	int				getHeight(void);
	void			setMainColor(std::string color);
	std::string		getMainColor(void);
};

#endif // !PONY_H

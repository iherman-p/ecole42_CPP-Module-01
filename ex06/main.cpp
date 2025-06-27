/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:59:36 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/27 13:23:36 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

int main(int argc, char *argv[])
{
	Harl	best_friend;
	std::map<std::string, int> complaints;

	if (argc != 2)
	{
		std::cout << "invalid use" << std::endl;
		return (1);
	}
	complaints["DEBUG"] = 1;
	complaints["INFO"] = 2;
	complaints["WARNING"] = 3;
	complaints["ERROR"] = 4;

	std::map<std::string, int>::iterator it = complaints.find(std::string(argv[1]));
	if (it == complaints.end())
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	switch (it->second)
	{
		case 1:
			best_friend.complain("DEBUG");
		case 2:
			best_friend.complain("INFO");
		case 3:
			best_friend.complain("WARNING");
		case 4:
			best_friend.complain("ERROR");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:59:36 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/27 16:05:16 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

int main(int argc, char *argv[])
{
	Harl	best_friend;
	int		complaint_level(0);
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
		return (1);
	while (complaint_level < 4 && levels[complaint_level].compare(std::string(argv[1])) != 0)
		complaint_level++;
	switch (complaint_level)
	{
		case 0:
			best_friend.complain("DEBUG");
		case 1:
			best_friend.complain("INFO");
		case 2:
			best_friend.complain("WARNING");
		case 3:
		{
			best_friend.complain("ERROR");
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:29:40 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/27 13:00:43 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>
#include <iostream>

void	Harl::debug(void)
{
	std::cout << "[.] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
				<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[!] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" 
				<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[!!] I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
				<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[!!!] This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

/* Public */
void	Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)()> complaints;
	complaints["DEBUG"] = &Harl::debug;
	complaints["INFO"] = &Harl::info;
	complaints["WARNING"] = &Harl::warning;
	complaints["ERROR"] = &Harl::error;
	
	std::map<std::string, void (Harl::*)()>::iterator it = complaints.find(level);
	if (it != complaints.end())
		(this->*(it->second))();
	else
		std::cout << "[?] What are you saying? Stop mumbling, I can't understand you!" << std::endl;
}

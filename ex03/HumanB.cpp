/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:31 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/25 11:57:49 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::attack()
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their fists" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
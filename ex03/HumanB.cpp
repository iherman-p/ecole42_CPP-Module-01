/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:31 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/05 16:29:34 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string &name)
	: _name(name), _weapon("fists")
{
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon &new_weapon)
{
	_weapon = new_weapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:47:23 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/25 10:34:25 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return new Zombie(name);
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int		i(0);

	horde = new Zombie[N];
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
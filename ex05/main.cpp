/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:59:36 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/26 18:02:22 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl best_friend;

	best_friend.complain("DEBUG");
	best_friend.complain("INFO");
	best_friend.complain("WARNING");
	best_friend.complain("ERROR");
	best_friend.complain("Kiss me sloppy style");
}
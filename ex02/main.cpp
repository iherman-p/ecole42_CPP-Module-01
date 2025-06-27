/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:48:41 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/25 10:55:57 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl
				<< stringPTR << std::endl
				<< &stringREF << std::endl;
	
	std::cout << string << std::endl
				<< *stringPTR << std::endl
				<< stringREF <<std::endl;
}
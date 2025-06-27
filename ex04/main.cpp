/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:13:58 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/26 17:23:59 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	ft_error_msg(std::string msg, int error_code)
{
	std::cout << msg << std::endl;
	return (error_code);
}

std::string	get_replaced_text(std::ifstream &file, std::string replacee, std::string replacement)
{
	std::string		buffer;
	std::string		modified_string;
	size_t			i;

	while (std::getline(file, buffer))
	{
		i = 0;
		while(i < buffer.size())
		{
			if (replacee.compare(buffer.substr(i, replacee.size())) == 0)
			{
				buffer = buffer.substr(0, i) + replacement
						+ buffer.substr((i + replacee.size()), buffer.size() - (i + replacee.size()));
				i += replacee.size();
			}
			else
				i++;
		}
		modified_string = modified_string + buffer + '\n';
	}
	return (modified_string);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (ft_error_msg("Incorrect amount of arguments", 1));
	std::ifstream	file(argv[1]);
	std::ofstream	new_file((std::string(argv[1]) + ".replace").c_str());

	if (!new_file || !file)
		return (ft_error_msg("Failed to open or create files", 2));
	new_file << get_replaced_text(file, std::string(argv[2]), std::string(argv[3]));
	file.close();
}
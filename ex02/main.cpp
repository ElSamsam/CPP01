/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 01:12:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/23 01:12:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Addresses :" << std::endl
			  << &str << std::endl
			  << stringPTR << std::endl
			  << &stringREF << std::endl << std::endl
			  << "Values :" << std::endl
			  << str << std::endl
			  << *stringPTR << std::endl
			  << stringREF << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:51:53 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/20 18:54:15 by saperrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	std::cout << "Constructor for " << this->name << " called" << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Destructor for " << this->name << " called" << std::endl;
	return;
}

void	Zombie::announce ( void ) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

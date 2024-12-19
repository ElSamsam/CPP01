/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:23:54 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/19 19:22:25 by saperrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {

	Zombie*	zombie = Zombie::newZombie("Jeff");
	Zombie	randomChump;
	randomChump.randomChump("José");
	zombie->announce();
	delete zombie;
	return 0;
}

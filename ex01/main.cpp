/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:51:51 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/20 19:34:11 by saperrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
int main(int argc, char **argv) {

	if (argc != 3) {
		std::cout << "./MoarBrainz [N] [name]" << std::endl;
		return 1;
	}
	Zombie* zombieLeader = Zombie::zombieHorde(atoi(argv[1]), argv[2]);
	for (int i = 0; i < atoi(argv[1]); i++)
		(zombieLeader + i)->announce();
	delete[] zombieLeader;
	return 0;
}

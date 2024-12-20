/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:52:08 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/20 19:33:43 by saperrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name) {

	Zombie* zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		(zombieHorde + i)->name = name;
	return zombieHorde;
}

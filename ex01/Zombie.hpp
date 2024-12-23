/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:51:55 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/20 18:53:47 by saperrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {

public :

		Zombie( void );
		~Zombie( void );

		static Zombie* zombieHorde( int N, std::string name );

		void	announce( void );

private :

		std::string name;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:25:43 by saperrie          #+#    #+#             */
/*   Updated: 2024/12/19 19:18:27 by saperrie         ###   ########.fr       */
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

		static Zombie* newZombie( std::string name );
		void	randomChump( std::string name );

		void	announce( void );

private :

		std::string name;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:44:34 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/31 20:06:19 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	public:
		std::string const	type;
		std::string	const	name;

		Zombie(std::string const the_type, std::string const the_name) : type(the_type), name(the_name)
		{}
		~Zombie(){}
	
		void	annonce(void) const;
};

#endif
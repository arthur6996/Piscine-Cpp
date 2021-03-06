/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:57:33 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 13:37:55 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(std::string his_name);
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const & cpy);
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const & cpy);
		void	NinjaShoebox(ClapTrap &partner);
		void	NinjaShoebox(FragTrap const & partner);
		void	NinjaShoebox(ScavTrap & partner);
		void	NinjaShoebox(NinjaTrap const & partner);
};

#endif
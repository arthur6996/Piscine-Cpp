/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:22:39 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/16 11:03:17 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	Robot("Jean-Jacques");

	Robot.meleeAttack("Charles");
	Robot.rangedAttack("Charles-Henry");

	Robot.takeDamage(20);
	Robot.takeDamage(1000);
	Robot.takeDamage(1000);

	Robot.beRepaired(30);
	Robot.beRepaired(150);
	Robot.beRepaired(150);

	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");
	Robot.vaulthunter_dot_exe("Charles-Henry-François");

	std::cout << std::endl << std::endl;
	ScavTrap	Opener("Pierre-Yves");

	Opener.meleeAttack("Charles");
	Opener.rangedAttack("Charles-Henry");

	Opener.takeDamage(20);
	Opener.takeDamage(1000);
	Opener.takeDamage(1000);

	Opener.beRepaired(30);
	Opener.beRepaired(150);
	Opener.beRepaired(150);

	Opener.challengeNewComer("Charles-Henry-François");
	Opener.challengeNewComer("Charles-Henry-François");
	Opener.challengeNewComer("Charles-Henry-François");


}
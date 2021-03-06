/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 20:28:05 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 11:52:16 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "generator.hpp"

int		main(void)
{
	Base *p;
	int	i = 4;
	while (i > 0)
	{
		p = generator();
		identify_from_pointer(p);
		identify_from_reference(*p);
		std::cout << std::endl;
		delete p;
		i--;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 16:34:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/20 01:05:46 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const &type);
		std::string const& getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
		virtual ~AMateria();
};

#endif

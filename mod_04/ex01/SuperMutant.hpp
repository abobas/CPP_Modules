/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:31:13 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 14:52:00 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <string>

class SuperMutant: public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const &other);
        SuperMutant& operator = (SuperMutant const &other);
        void takeDamage(int damage);
        virtual ~SuperMutant();
};

#endif

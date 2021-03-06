/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:11:20 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:12:36 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <ostream>

class Victim
{
    protected:
        std::string name;
    public:
        Victim(std::string name);
        Victim(Victim const &other);
        Victim& operator = (Victim const &other);
        std::string getName() const;
        virtual void getPolymorphed() const;
        virtual ~Victim();
};

std::ostream& operator << (std::ostream &out, Victim const &src);

#endif

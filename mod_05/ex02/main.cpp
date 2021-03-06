/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:11:57 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat joe("Joe", 3);
			ShrubberyCreationForm a("home");
			PresidentialPardonForm b("Donald Trump");
			RobotomyRequestForm c("alien planet");
			std::cout << joe << a << b << c;
			joe.signForm(a);
			joe.executeForm(a);
			joe.signForm(b);
			joe.executeForm(b);
			joe.signForm(c);
			joe.executeForm(c);
			
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat harry("Harry", 150);
			ShrubberyCreationForm a("home");
			PresidentialPardonForm b("Donald Trump");
			RobotomyRequestForm c("alien planet");
			harry.signForm(a);
			harry.executeForm(a);
			harry.signForm(b);
			harry.executeForm(b);
			harry.signForm(c);
			harry.executeForm(c);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

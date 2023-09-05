/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:03:28 by ahammout          #+#    #+#             */
/*   Updated: 2023/07/27 21:39:20 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Bureaucrat.hpp"

//---***------------------------------------- CONSTRUCTORS ---------------------------------***---//

Bureaucrat::Bureaucrat() : name("Random Bureaucrat"), grade(150)
{
    std::cout << "▷ Bureaucrat: " << this->name << " default constructor called" << std::endl;
    if (this->grade <= 0)
        throw   GradeTooHighException();
    if (this->grade > 150)
        throw   GradeTooLowException();
}

Bureaucrat::Bureaucrat(int gr, std::string n) : name(n), grade(gr)
{
    std::cout << "▷ Bureaucrat: " << this->name << " parametered constructor called" << std::endl;
    if (this->grade <= 0)
        throw   GradeTooHighException();
    if (this->grade > 150)
        throw   GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "◁ Bureaucrat: " << this->name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &SRC): name(SRC.getName()), grade(SRC.getGrade())
{
    std::cout << "▷ Bureaucrat: " << this->name << " copy constructor called" << std::endl;
    *this = SRC;
}

//---***------------------------------------- OVERLOADING OPERATORS ---------------------------------***---//

Bureaucrat& Bureaucrat::operator=(Bureaucrat &RightHand)
{
    if (RightHand.getGrade() <= 0)
        throw   GradeTooHighException();
    if (RightHand.getGrade() > 150)
        throw   GradeTooLowException();
    this->grade = RightHand.getGrade();
    return(*this);
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &REF)
{
    output << "▶▶ " << REF.getName() << " bureaucrat grade " << REF.getGrade();
    return (output);
}

//---***------------------------------ EXCEPTION METHODS --------------------------***---//

const char*     Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Exception: Bureaucrat grade is to high");
}

const char*    Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Exception: Bureaucrat grade is too low");
}

//---***------------------------------ GETTERS --------------------------***---//

int Bureaucrat::getGrade()
{
    return (this->grade);
}

const   std::string Bureaucrat::getName()
{
    return (this->name);
}

//---***------------------------------ BUREAUCRAT METHODS --------------------------***---//

void    Bureaucrat::incrGrade()
{
    grade--;
    if (grade <= 0)
        throw   GradeTooHighException();
}

void    Bureaucrat::decrGrade()
{
    grade++;
    if (grade > 150)
        throw   GradeTooLowException();
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout <<  "√: " << this->getName() << " Signed " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &ex)
    {
        std::cerr <<  "╳: " << this->getName() << " couldn't sign " << form.getName() << " because his " << ex.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "╳: unexpected error" << std::endl;
    }
}

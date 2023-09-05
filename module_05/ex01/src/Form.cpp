/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:50:17 by ahammout          #+#    #+#             */
/*   Updated: 2023/07/27 19:04:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Form.hpp"

//---***------------------------------------- CONSTRUCTORS ---------------------------------***---//

Form::Form() : _name("Random Form"), _signature(false), _sgrade(1), _exgrade(5)
{   
    std::cout << "▷ Form: " << _name << " default constructor called" << std::endl;
}

Form::Form(std::string n, bool _si, int _sg, int _exg): _name(n), _signature(_si), _sgrade(_sg), _exgrade(_exg)
{
    std::cout << "▷ Form: " << _name << " parametered constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "◁ Form: " << _name << " destructor called" << std::endl;
}

Form::Form(Form &SRC): _name(SRC._name), _signature(SRC._signature), _sgrade(SRC._sgrade), _exgrade(SRC._exgrade)
{
    std::cout << "▷ Form: " << _name << " copy constructor called" << std::endl;
    *this = SRC;
}

//---***------------------------------------- OVERLOADING OPERATORS ---------------------------------***---//

Form&   Form::operator=(const Form &RightHand)
{
    this->_signature = RightHand.getSignature();
    return (*this);
}

std::ostream    &operator<<(std::ostream &output, Form &REF)
{
    output << "▶▶ name ▶ " << REF.getName() << "| Signature ▶ " <<  REF.getSignature() << "| Sign grade ▶ " << REF.getSgrade() << "| Execute grade ▶ " << REF.getExGrade() << std::endl;
    return (output);
}

//---***------------------------------ EXCEPTION METHODS --------------------------***---//

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

//---***------------------------------ GETTERS --------------------------***---//

std::string    Form::getName() const
{
    return(this->_name);
}

bool    Form::getSignature() const
{
    return (this->_signature);
}

int   Form::getSgrade() const
{
    return (this->_sgrade);
}

int   Form::getExGrade() const
{
    return (this->_exgrade);
}

//---***------------------------------ FORM METHODS --------------------------***---//

void    Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() > this->getSgrade())
        throw GradeTooLowException();
    this->_signature = true;
}

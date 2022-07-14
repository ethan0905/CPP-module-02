/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:33 by esafar            #+#    #+#             */
/*   Updated: 2022/07/14 17:21:52 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0) {
    
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::Fixed( Fixed const & rhs ) {
    
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
    
    return ;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;

    return ;
}

int Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    
    return (this->_n);
}

void    Fixed::setRawBits( int const raw ) {

    this->_n = raw;
    return ;
}

void    Fixed::operator=( Fixed const &rhs ) {

    this->_n = rhs.getRawBits();

    // return *this;
}
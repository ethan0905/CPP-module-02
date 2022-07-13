/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:33 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 18:46:45 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0) {
    
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::Fixed( int n ) {
    
    _n = n;
    std::cout << "Copy constructor called" << std::endl;

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
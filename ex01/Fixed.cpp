/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:33 by esafar            #+#    #+#             */
/*   Updated: 2022/07/18 13:00:29 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <bitset>

Fixed::Fixed( void ) : _n(0) {
    
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::Fixed( const int n ) {
    
    std::cout << "Int constructor called" << std::endl;
    this->_n =  n << this->_fractionalBits;
   
    // //print _n in bits
    // std::bitset<32> x(this->_n);
    // std::cout << x << '\n';
    
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

int     Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    
    return (this->_n);
}

void    Fixed::setRawBits( int const raw ) {

    this->_n = raw;
    return ;
}

int   Fixed::toInt( void ) const {

    // //print _n in bits
    std::cout << "===toInt conversion===" << std::endl;
    std::bitset<32> x(this->_n >> this->_fractionalBits);
    std::cout << x << '\n';
    
    return (this->_n >> this->_fractionalBits);
}

float   Fixed::toFloat( void ) const {

    //print _n in bits
    std::cout << "===toFloat conversion===" << std::endl;
    std::bitset<32> x(this->_n / (1 << this->_fractionalBits));
    std::cout << x << '\n';
    
    return (this->_n / (1 << this->_fractionalBits));
}

Fixed   &Fixed::operator=( Fixed const &rhs ) {

    std::cout << "Copy assignement operator called" << std::endl;
    this->_n = rhs.getRawBits();

    return *this;
}

std::ostream    &operator<<( std::ostream &o, Fixed const  &rhs) {

    o << rhs.toFloat();
    return (o);
}

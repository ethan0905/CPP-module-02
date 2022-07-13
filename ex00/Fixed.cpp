/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:33 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 17:43:19 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0) {
    
    return ;
}

Fixed::~Fixed() {

    return ;
}

int Fixed::getRawBits( void ) const {

    return (this->_n);
}

void    Fixed::setRawBits( int const raw ) {

    this->_n = raw;
    return ;
}

Fixed   &   Fixed::operator=( Fixed const & rhs ) {

    this->_n = getRawBits();

    return *this;
}
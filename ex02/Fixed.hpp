/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:27 by esafar            #+#    #+#             */
/*   Updated: 2022/07/18 19:04:37 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    public:
    
        Fixed( void );
        Fixed( int n );
        Fixed( float f );
        Fixed( Fixed const & rhs );
        ~Fixed( void );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        int   toInt( void ) const;
        float   toFloat( void ) const;

        Fixed   &operator=( Fixed const &rhs );
        bool operator>( Fixed const &rhs)const;
        bool operator<( Fixed const &rhs)const;

    private:

        int _n;
        static  const    int    _fractionalBits = 8;
};

std::ostream    &operator<<( std::ostream &o, Fixed const  &rhs);

#endif
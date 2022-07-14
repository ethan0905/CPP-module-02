/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:27 by esafar            #+#    #+#             */
/*   Updated: 2022/07/14 17:38:56 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    public:
    
        Fixed( void );
        Fixed( Fixed const & rhs );
        ~Fixed( void );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        Fixed   &operator=( Fixed const & rhs );
        
    private:

        int _n;
        static  const    int    _fractionalBits = 8;
};

#endif
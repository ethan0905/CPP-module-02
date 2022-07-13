/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:27 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 17:41:08 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    public:
    
        Fixed( void );
        ~Fixed( void );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        Fixed   &   operator=( Fixed const & rhs );
        
    private:

        int _n;
        static  const    int    _b;
};

#endif
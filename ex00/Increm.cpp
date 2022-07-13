/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Increm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:47:14 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 18:14:15 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// using namespace std;
  
class Fixed {

   public:

        Fixed(void);
        Fixed(int n);
        ~Fixed(void);
        
        // Fixed( int n ){
        
        //     _i = n;
        // }
       
       void operator++( void ); 
       void afficher( void );

   private:  
      int _i;  
};

Fixed::Fixed( int n ){

    _i = n;
    return ;
}

Fixed::~Fixed( void ){

    return ;
}

void    Fixed::operator++( void ) {
    
    _i = _i + 1;
    return ;  
}

void Fixed::afficher( void ) {
    
    std::cout << "Compteur = " << _i << std::endl;   
    return ;
}

int main()  
{  
    Fixed c(42);  

    ++c;  // appel de la fonction "void operator ++()" 
    c.afficher();  
    return 0;  
}  
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Increm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:47:14 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 18:35:37 by esafar           ###   ########.fr       */
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


class Personne {

   public:
   
   // Constructeur paramétré
    Personne(std::string n, int a);
   ~Personne(void);
   
   // Surcharge de l'opérateur d'affectation
    void operator=(const Personne &p);
   void afficher();
   
   private:
      std::string nom;            
      int age;           
};

Personne::Personne(std::string n, int a) {
        nom = n;
        age = a;
}

Personne::~Personne(void){

    return ;
}

void Personne::operator=(const Personne &p) { 
        nom = p.nom;
        age = p.age;
}
    
void Personne::afficher() {
      std::cout << "Le nom de la personne est :" << nom << std::endl;
      std::cout << "L'age de la personne est :" << age << std::endl;
}

int main()
{
  // Crée deux objets Personne
   Personne p1("Alex", 25);
   Personne p2("Bob", 30); 
   
   std::cout << "****** Personne 1 ******" << std::endl; 
   p1.afficher();
   std::cout << "****** Personne 2 ******" << std::endl; 
   p2.afficher();
   // utiliser l'opérateur d'affectation
   p1 = p2;
   
   std::cout << "****** Aprés l'affectation ******" << std::endl; 
   p1.afficher();
   return 0;
}


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

// int main()  
// {  
//     Fixed c(42);  

//     ++c;  // appel de la fonction "void operator ++()" 
//     c.afficher();  
//     return 0;  
// }  
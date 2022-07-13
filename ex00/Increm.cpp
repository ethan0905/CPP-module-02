/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Increm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:47:14 by esafar            #+#    #+#             */
/*   Updated: 2022/07/13 17:49:43 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
  
class Count {

   public:  
       Count(int n){
        _i = n;
       }  
       void operator ++() {   
          _i = _i+1;   
       }  
       void afficher() {   
           cout << "Compteur = " << _i << endl;   
       }  

   private:  
      int _i;  
};
  
int main()  
{  
    Count c(42);  
    ++c;  // appel de la fonction "void operator ++()" 
    c.afficher();  
    return 0;  
}  
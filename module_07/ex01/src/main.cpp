/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:17:39 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/17 22:46:38 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/iter.hpp"

// ------------ AWS CLASS ----------------/

class Awesome
{
    public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    
    private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// ------------- Test TEMPLATES -------------/

template< typename T >
void print( T const & x ){
    std::cout << x << std::endl;
    return;
}

template <class T>
void    addOne(T const & x ){
    T newElemnt;

    newElemnt = x + 1;
    std::cout << newElemnt << '\n';
}

//------------------ tests --------------------/

int main() {
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
    int tab2[] = { 16, 88, 15, -15, 44 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];

    iter( tab, 5, addOne );
    std::cout << "------------------------------------" << '\n';
    iter( tab2, 5, addOne );

    return 0;
}
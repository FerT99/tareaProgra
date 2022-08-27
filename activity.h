// =================================================================
//
// File: activity.h
// Author: Fernanda Torres
// Date: 26/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================

 unsigned int sumaIterativa(unsigned int n) {
    suma = 0;
    int n;

    cout << "Ingresa un número: ";
    cin >> n;
        for (int i = 0; i <= suma.length; i++) {
            suma += i;
            return suma;
        }
    }


// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
    suma = 0;
    if( n <= 0 ) {
        return 0;
    }
    return n + suma(n-1);
}


// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
    suma = 0;
	if (i <= n;) {
        suma += i;
        return suma;
    }
}

#endif /* ACTIVITY_H */

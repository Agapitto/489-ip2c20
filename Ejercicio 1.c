#include<stdio.h> // prinf y scanf

// Parte A: Calcular promedio, buscar máximo, buscar mínimo.

// Parte B: Calcular los dos elementos que sumados de 2020.

// Parte C: TAREA --> Ordenar el vector de menor a mayor y de mayor a menor. Metodo burbuja.

void main () {

    // 200 elementos
    int num[] = {1974, 1902, 1356, 1724, 1550, 1870, 1436, 1945, 1640, 1766, 1508, 1802, 1495, 1837, 131, 1754, 1296, 1627, 1768, 1451, 1252, 1566, 1611, 1531, 1868, 1745, 1894, 1799, 1948, 1930, 1400, 2003, 1777, 1279, 472, 1474, 1787, 1406, 1522, 1646, 1865, 1581, 1609, 1705, 1383, 1276, 1613, 1190, 1856, 1528, 1091, 1540, 1720, 1824, 1734, 1919, 1681, 1686, 1344, 1644, 1670, 1710, 1708, 1458, 1728, 1972, 1630, 1995, 1763, 1935, 451, 1392, 1990, 14, 1893, 1437, 1632, 1933, 1887, 1975, 1453, 1897, 2005, 2008, 1959, 1716, 1635, 1619, 1994, 1674, 1942, 1817, 1825, 196, 769, 1065, 1662, 1079, 1574, 1554, 1621, 1857, 1312, 1544, 2001, 1991, 1602, 1669, 1982, 1309, 1556, 1855, 1284, 1641, 1786, 735, 1921, 1661, 1934, 1552, 1012, 1748, 1782, 1631, 1607, 1659, 1997, 1600, 1594, 1798, 1405, 1790, 1993, 1960, 1717, 999, 1687, 1771, 1977, 1809, 1884, 1795, 1639, 1565, 1299, 1643, 1700, 2002, 1823, 1369, 1572, 1657, 1683, 1966, 1606, 1792, 1756, 1936, 1718, 2009, 1711, 1461, 1638, 1645, 1914, 1963, 1546, 1846, 1737, 1788, 1589, 1860, 1830, 1905, 1571, 1989, 1780, 1878, 1767, 1776, 1727, 1582, 1769, 1040, 694, 1327, 1623, 1688, 1694, 1932, 2000, 1969, 1590, 1425, 1917, 1324, 1852, 1753, 1743, 1551};
    int promedio = 0;
    int maximo = num[0]; // En C, Javascirpt, Python, java, arrancan con indice 0.
    int minimo = num[0];
    int res1 = 0;
    int primerElemento = 0;
    int suma = 0;
    int m = 0;
    int n = 0;

    // Parte A: Promedio: 1636
    for(int x = 0; x < 200; x++) {
        promedio = promedio + num[x];
        res1 = promedio / (x+1);
    }
    printf("Promedio: %i\n", res1);

    // Parte A: Máximo: 2009
    for(int y = 0; y < 200; y++) {
        if(maximo < num[y]) {
            maximo = num[y];
        }
    }

    printf("El valor maximo es: %i\n", maximo);

    // Parte A: Mínimo: 14
    for(int z = 0; z < 200; z++) {
        if(minimo > num[z]) {
            minimo = num[z];
        }
    }

    printf("El valor minimo es: %i\n", minimo);

    // Parte B

    // 1° bucle
    for(int a = 0; a < 200; a++){
        primerElemento = num[a];
        // Primero agarro el 1° elemento del array para comprobar si alguno de los otros junto a ese, suman "2020"
        //Agarro 1974 y me fijo contra todos si alguno suma 2020
        // 2° bucle
        for(int w = 0; w < 200; w++){
                int suma = num[w] + primerElemento;
            /*if(suma == 2020){
                // Si el resultado es 2020...
                printf("Eureka! %i\n", primerElemento * num[w]);
            }*/

            // Operador ternario '?:'
            suma == 2020 ? printf("Eureka! %i\n", primerElemento * num[w]) : 0;

        }
    }

    // Parte C: Ordenar el vector de mayor a menor y de menor a mayor.

    // Menor a mayor.
    for(int e = 0; e < 200; e++) {
        for(int f = 0; f < 200 - 1; f++){
            if (num[e] < num[f]) {
                m = num[e];
                num[e] = num[f];
                num[f] = m;
            }
        }
    }

    // Mayor a menor.
    for(int e = 0; e < 200; e++) {
        for(int f = 0; f < 200 - 1; f++) {
            if (num[e] > num[f]) {
                n = num[e];
                num[e] = num[f];
                num[f] = n;
            }
        }
    }

    // printf("a: %i", a); // no anda porque A vive en el ambito del primer bucle

    return;
}


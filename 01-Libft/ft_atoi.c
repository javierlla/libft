/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:48:14 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/22 11:59:06 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int         ft_atoi(const char *str)
{


/*Comenzamos creando tres variables. El primero es lo que sostendrá nuestro
* resultado que se va a devolver. Usamos largo porque está garantizado para
* ser capaz de almacenar, al menos, valores que se encuentran dentro del rango de
* -2147483647 y 2147483647. Sign será lo que usemos para convertir el int
* negativo en el caso de que sea un número negativo el que se pone en el
* string. Lo tenemos como largo, por lo que podemos multiplicar nuestro resultado por él en el final. Luego tenemos un int sin signo i, que será el contador de nuestro string. Para poder compensar una cadena increíblemente larga usamos un iunsigned int para poder usar su rango positivo extendido tiene más de un signed int. Los pondremos todos a 0 excepto nuestro signo que establecemos en 1 para usar en función de la aparición de un negativo símbolo en nuestra cadena*/
   size_t	res;
   size_t	sign;
   unsigned int	i;


   res = 0;
   sign = 1;
   i = 0;
/*Lo primero que queremos que haga nuestra función es asegurarnos de omitir cualquier
* tipo de espacio que se puede encontrar al principio del string.*/
   while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
       || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
       i++;
/*Una vez pasado el espacio adicional, si existe, estamos comprobando si hay
* es un símbolo negativo al comienzo del número que convertiremos.
 si vemos un símbolo negativo o un símbolo positivo, ajustamos en consecuencia. Si
 es negativo establecemos nuestro signo igual a -1 para multiplicar nuestro resultado cuando
 lo devolvemos.*/
   if (str[i] == '-' || str[i] == '+')
   {
       if (str[i] == '-')
           sign = -1;
       i++;
   }
/*Aquí convertimos nuestra cadena de caracteres de char a int siempre y cuando
* son números. Si el personaje en el que nos encontramos actualmente es un número,
* lo convirtió a su valor numérico ascii. Para el primer carácter res
* siempre se establece actualmente en 0. Multiplicamos 10 inmediatamente por nuestro res para
* configure la ubicación de los dígitos donde debería estar. Luego restamos el
* valor numérico del carácter 0 en la tabla ascii de nuestro actual
* número de carácter. Esto lo establece en su valor numérico ascii. Nosotros entonces
* Comience nuestro bucle de nuevo y continúe hasta que lleguemos a un carácter que no sea un
* número.*/
   while (str[i] >= '0' && str[i] <= '9')
   {
       res = res * 10 + str[i] - '0';
       i++;
   }
/*Por último, devolvemos el valor res multiplicado por el valor del signo para devolver el
* número en función de si fue negativo o no. NOTA: Tenemos int en
* paréntesis para emitir el resto * inicie sesión en un int para que pueda devolverse como
* un int.*/
   return ((int)(res * sign));
}
int main(void)
{
   char *s = " 98764 987";
   printf("%d %d", ft_atoi(s), atoi(s));
   return (0);

int main(void)
{
	int val;
    char strn1[] = "+-2546";
	val = ft_atoi(strn1);
    printf("String value = %s\n", strn1);
    printf("Integer value = %d\n", val);
 
    char strn2[] = "123GeeksforGeeks123";
    val = ft_atoi(strn2);
    printf("String value = %s\n", strn2);
    printf("Integer value = %d\n", val);
 
    return (0);	
}

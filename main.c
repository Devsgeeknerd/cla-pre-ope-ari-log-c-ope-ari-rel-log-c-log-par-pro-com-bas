#include <stdio.h>
#include <stdlib.h>

int main()
{ // Os operadores "*" e "/" tem precedência entre "+" e "-" ou seja, não faz na ordem que lemos.
    printf("%d", 4 + 5 * 9);
    // Operadores entre parenteses tem precedência entre "*" e "/".
    printf("%d", (4 + 5) * 9);
    // O operador "&&" tem a maior precedência entre todos eles.
    // O operador "||" tem precedência sobre o "!".
    // Ordem quando não utilizamos parenteses: "&&", "||" e "!".
    printf("%d", 20 == 20 || 5 == 5 && 10 > 10);
    // Agora ele é executado na ordem que esta escrito.
    printf("%d", (20 == 20 || 5 == 5) && 10 > 10);
}

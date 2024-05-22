
int main() {
    // Declaramos las variables
    int entero;
    float flotante;
    char caracter;

    // Mensaje de bienvenida
    printf("Bienvenido al programa de entrada de datos en C.\n");

    // Aqui solicitamos entrada al usuario
    printf("Por favor ingresa un número entero: ");
    scanf("%d", &entero);

    printf("Ahora ingresa un número decimal (flotante): ");
    scanf("%f", &flotante);

    printf("Por último, ingresa un carácter: ");
    scanf(" %c", &caracter); // En esta parte agregamos un espacio antes de %c para evitar problemas con el buffer

    // Mostramos los valores ingresados junto con mensajes descriptivos
    printf("\nValores ingresados:\n");
    printf("Número entero: %d\n", entero);
    printf("Número decimal (flotante): %.2f\n", flotante); // Mostrar solo 2 decimales
    printf("Carácter: %c\n", caracter);

   
    return 0;
}
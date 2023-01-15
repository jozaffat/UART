
#include "lib/include.h"

char *cadena(char delim, int *ptr){
    char L;
    static char array[50];
    int B = 0;
 L = readChar();  
    while (L != delim){
        array[B] = L;
        L = readChar();
        B++;
    }
    *ptr = strlen(array);
    return &array[0];
}

char *inversion(char *nom, int length){
    static char inv[50];
    int c = 0;
    int idx = 0; 
    for (int i = length; i > 0; i--){
        inv[c] = *(nom + (i -1));
       inv[c + 1] = idx + '0';
        idx ++; 
        c = c + 2;
    }
    inv[c - 1] = '\n'; 
    return &inv[0];
}

int main(void)
{
    uint16_t valor = 0;
    char c='5'; 
 
    Configurar_PLL(_40MHZ);  //Confiuracion de velocidad de reloj
    //Configurar_UART0();//Yo FCLK 20MHZ Baudrate 9600

    //Experimento 1
    //  Configurar_UART1(); //Jorge,Alberto,Navarro,Saul,Fabela -fclk 25MHZ Baud-rate 57600
    //  Configurar_UART7(); //Angel,Fernanda,Sonia,Aleidis,Monse -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART4(); //Argelia,Roxana,Yesica,Vanesa,Christian,Abiu -fclk 10MHZ Baud-rate 4800
    //  Configurar_UART2(); //Brizet,Monse,Luis,Majo,Alonso -fclk 40MHZ Baud-rate 115200
    //  Configurar_UART3(); //Jesus,Yesica,Carlos,Dulce,Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
    //  Configurar_UART2(); //Andrea,Avila,Pamela,Paulina -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART5(); //Hector,Cecilia,Carolina,Jozzafat -fclk 40MHZ Baud-rate 28800
    Configurar_GPIO();
    Configurar_UART5();

    int longit; 
    longit = 0; 
    while(1){
char *inicial = cadena('.', &longit);
    char *inv = inversion(inicial, longit);
    printString(inv);
    }
    
    
    
}

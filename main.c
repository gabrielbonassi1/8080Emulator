#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>


/*Definindo data structures que são uteis para o codigo*/

typedef struct ConditionCodes {
    /*Condition bits*/
    uint8_t z:1; //zero bit
    uint8_t s:1; //sign bit
    uint8_t p:1; //parity bit
    uint8_t cy:1; //carry bit
    uint8_t ac:1; //aux carry bit
    uint8_t pad:3;
} ConditionCodes;

typedef struct State8080 {
    //Registers    
    uint8_t    a;    
    uint8_t    b;    
    uint8_t    c;    
    uint8_t    d;    
    uint8_t    e;    
    uint8_t    h;    
    uint8_t    l;    
    uint16_t    sp;    
    uint16_t    pc;    
    uint8_t     *memory;    
    struct      ConditionCodes      cc;    
    uint8_t     int_enable;    
} State8080; 


//Instrucoes nao implementadas
void UnimplementedInstruction(State8080* state)    
{    
    //pc will have advanced one, so undo that    
    printf ("Error: Unimplemented instruction\n");    
    exit(1);    
} 
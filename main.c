#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "structs.h" 


//Instrucoes nao implementadas
void UnimplementedInstruction(State8080* state)    
{    
    //pc will have advanced one, so undo that    
    printf ("Error: Unimplemented instruction\n");    
    exit(1);    
} 
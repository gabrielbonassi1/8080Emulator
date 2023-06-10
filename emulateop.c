#include "structs.h"

void EmulateOp (State8080* state) {
    unsigned char *opcode = &state->memory[state->pc];

    switch (*opcode)
    {
        case 0x00: break;            //NOP
        case 0x01:                   //LXI B, word
            state->c = opcode[1];
            state->b = opcode[2];
            state->pc += 2;
            break;
        case 0x02:                   //STAX B
            
            break;
        case 0x03:
    }
}
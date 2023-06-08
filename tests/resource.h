#ifndef RESOURCE_H
#define RESOURCE_H


const int ReceiveProgramSize = 3;
const char *ping_program =
    "hello \r\n"
    "world";


const char *ReceiveProgram[ReceiveProgramSize] ={
    "hello",
    "world"
}
#endif
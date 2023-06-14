#ifndef RESOURCE_H
#define RESOURCE_H

const int ReceiveProgramSize = 30;
const char *ping_program =
    "\r\n"
    "world";

const char *ReceiveProgram[ReceiveProgramSize] = {
    "hello",
    "from nagasaki",
    "world"};

#endif
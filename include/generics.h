#ifndef GENERICS_H
#define GENERICS_H

#include <stdint.h>
#include <stdio.h>

typedef enum {
    INT8,
    INT16,
    INT32,
    INT64,
    CHAR,
    U8,
    U16,
    U32,
    U64,
    FLOAT,
    DOUBLE,
    STRING,
} Types;

typedef struct {
    Types type;

    union {
        int8_t int8;
        int16_t int16;
        int32_t int32;
        int64_t int64;
        float low_precison_float;
        double double_precision_float;
        char character;
        char* string;
        uint8_t u8;
        uint16_t u16;
        uint32_t u32;
        uint64_t u64;
    };
} T;

void println(T value);
#endif //GENERICS_H

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

static void println(T value) {
    switch (value.type) {
        case INT8:
            printf("%d\n", value.int8);
            break;
        case INT16:
            printf("%d\n", value.int16);
            break;
        case INT32:
            printf("%d\n", value.int32);
            break;
        case U8:
            printf("%u\n", value.u8);
            break;
        case U16:
            printf("%u\n", value.u16);
            break;
        case U32:
            printf("%u\n", value.u32);
            break;
        case U64:
            printf("%llu\n", (unsigned long long) value.u64);
            break;
        case INT64:
            printf("%lld\n", value.int64);
            break;
        case CHAR:
            printf("%c\n", value.character);
            break;
        case FLOAT:
            printf("%f\n", value.low_precison_float);
            break;
        case DOUBLE:
            printf("%lf\n", value.double_precision_float);
            break;
        case STRING:
            printf("%s\n", value.string);
            break;
        default:
            printf("Unknown type\n");
    }
}
#endif //GENERICS_H

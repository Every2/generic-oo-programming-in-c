#include "generics.h"

void println(T value) {
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

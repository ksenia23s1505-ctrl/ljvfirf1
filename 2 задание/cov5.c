#include <stdio.h>
#include <stdint.h> 

int main(void) {
    long long values_int8 = (long long)INT8_MAX - INT8_MIN + 1;
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", 
           sizeof(int8_t), INT8_MIN, INT8_MAX, values_int8);

    unsigned long long values_uint8 = (unsigned long long)UINT8_MAX - 0 + 1;
    printf("UINT8: size=%zu, min=0, max=%u, values=%llu\n", 
           sizeof(uint8_t), UINT8_MAX, values_uint8);

    long long values_int16 = (long long)INT16_MAX - INT16_MIN + 1;
    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", 
           sizeof(int16_t), INT16_MIN, INT16_MAX, values_int16);

    unsigned long long values_uint16 = (unsigned long long)UINT16_MAX - 0 + 1;
    printf("UINT16: size=%zu, min=0, max=%u, values=%llu\n", 
           sizeof(uint16_t), UINT16_MAX, values_uint16);

    long long values_int32 = (long long)INT32_MAX - INT32_MIN + 1;
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", 
           sizeof(int32_t), INT32_MIN, INT32_MAX, values_int32);

    unsigned long long values_uint32 = (unsigned long long)UINT32_MAX - 0 + 1;
    printf("UINT32: size=%zu, min=0, max=%lu, values=%llu\n", 
           sizeof(uint32_t), UINT32_MAX, values_uint32);

    return 0;
}
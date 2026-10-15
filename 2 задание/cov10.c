#include <stdio.h>
#include <stdint.h> 

int main(void) {
   
    int packet_id;
    unsigned int temp_status; 
    uint8_t status_code;
    float voltage;
    uint16_t checksum;

    scanf("%x %o %f", &packet_id, &temp_status, &voltage);

    status_code = (uint8_t)temp_status;
    checksum = packet_id + status_code;

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %d\n", status_code);
    printf("STATUS_CHAR: %c\n", status_code);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %d\n", checksum);

    return 0;
}
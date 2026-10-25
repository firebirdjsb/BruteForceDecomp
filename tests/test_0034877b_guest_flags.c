#include <stdint.h>
#include <stdio.h>
/* Original 0x00348857 ORs 0x80 into the HIGH byte of the guest
 * return flags. This is only a host-C11 scalar conformance check. */
static uint16_t guest_high_byte_or(uint16_t value)
{
    return (uint16_t)(value | UINT16_C(0x8000));
}
int main(void)
{
    for (unsigned value = 0; value <= UINT16_MAX; ++value) {
        uint16_t got = guest_high_byte_or((uint16_t)value);
        if (got != (uint16_t)(value | 0x8000u) ||
            (got & 0x7fffu) != (value & 0x7fffu) ||
            (got & 0x8000u) == 0u) {
            fprintf(stderr, "guest flag mismatch at %04x\n", value);
            return 1;
        }
    }
    puts("PASS: 65536 guest return flag patterns");
    return 0;
}

/* Verify raw f64 guest DWORD extraction without Xbox runtime claims. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define CHECK(c) do { if (!(c)) {fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#c);return 1;} } while(0)
static double from_words(uint32_t low,uint32_t high) {
    uint64_t bits=(uint64_t)low | ((uint64_t)high<<32);
    double value;
    memcpy(&value,&bits,sizeof value);
    return value;
}
static void to_words(double value,uint32_t *low,uint32_t *high) {
    uint64_t bits;
    memcpy(&bits,&value,sizeof bits);
    *low=(uint32_t)bits;
    *high=(uint32_t)(bits>>32);
}
int main(void) {
    const uint64_t words[]={
        UINT64_C(0),UINT64_C(0x8000000000000000),
        UINT64_C(0x3ff0000000000000),UINT64_C(0xbff8000000000000),
        UINT64_C(0x4024800000000000),UINT64_C(0x7fefffffffffffff),
        UINT64_C(0x7ff0000000000000),UINT64_C(0xfff0000000000000),
        UINT64_C(0x0000000000000001)
    };
    for(unsigned i=0;i<sizeof words/sizeof words[0];++i) {
        uint32_t lo=(uint32_t)words[i],hi=(uint32_t)(words[i]>>32);
        double d=from_words(lo,hi);
        uint32_t actual_lo=0,actual_hi=0;
        to_words(d,&actual_lo,&actual_hi);
        CHECK(lo==actual_lo && hi==actual_hi);
    }
    double d=from_words(0,0x40248000);
    CHECK(d==10.25);
    CHECK((float)d==10.25f);
    /* A numeric double-to-integer conversion is not a guest word copy. */
    uint32_t hi=0,lo=0;
    to_words(d,&lo,&hi);
    CHECK(lo==0 && hi==0x40248000);
    CHECK((uint32_t)d!=hi);
    puts("PASS: exact guest IEEE-754 double storage and both raw 32-bit words");
    return 0;
}

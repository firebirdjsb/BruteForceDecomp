/* XBE 0x0021409D MOV BYTE [EBP-0x14],CL followed on one path
 * by 0x002140A9 MOV EAX,DWORD [EBP-0x14].
 * This tests a 32-bit guest stack word, not the draft's x64 pointer ABI.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHECK(x) do {++checks;if(!(x)){fprintf(stderr,"FAIL line %d\n",__LINE__);exit(1);}}while(0)
static unsigned checks;
static uint32_t guest_store_then_load(uint32_t original, uint8_t cl) {
    uint32_t saved = original;
    /* Guest original x86 is little-endian. Byte aliasing remains defined
     * through unsigned char; the other three guest bytes are untouched. */
    ((unsigned char *)&saved)[0]=cl;
    return saved;
}
int main(void) {
    for(uint32_t seed=0;seed<4096u;seed++) {
        const uint32_t original=(seed*UINT32_C(0x9e3779b9))^UINT32_C(0x6b15c893);
        const uint8_t cl=(uint8_t)(seed*37u);
        const uint32_t actual=guest_store_then_load(original,cl);
        CHECK(actual==((original&UINT32_C(0xffffff00))|cl));
        CHECK(((actual^original)&UINT32_C(0xffffff00))==0);
        CHECK((actual&UINT32_C(0xff))==cl);
    }
    /* The original globals at 0x407064 and 0x407068 are read via
     * FLD/FMul m32fp, NOT by loading pointer-to-float values. */
    const uint32_t word=UINT32_C(0x3f800000);
    float operand=0.f;
    memcpy(&operand,&word,4);
    CHECK(operand==1.f);
    printf("PASS 00213FC0 guest low-byte preservation: %u assertions\n",checks);
    return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8066F33FAC9D0D9BAA4B6ABB27B2A7320DE5406A81F104138B66B42CE6891A3C
 * Entry: 0x002c96d0, Ghidra index: 10140, label: FUN_002c96d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "../../contracts/bf_002c96d0_object_operations.h"
/* 0x2c96d1 loads stack argument 1; 0x2c96fc loads argument 2 into EDI;
 * 0x2c9700 binds ECX to argument 1, and RET 8 consumes both arguments.
 * Host output binds only the observed object writes, not an Xbox ABI bridge.
 * At least 0x5a8 output bytes are required. No whole-object initialization. */
void *FUN_002c96d0(void *param_1, uint32_t param_2)
{
  unsigned char *output = (unsigned char *)param_1;
  uint32_t zero = 0;
  unsigned block;
  for (block = 0; block != 21; ++block) {
    unsigned char *record = output + 0x68u + block * 0x40u;
    /* Only this fixed-target call is specialized: 0x2c96e0..0x2c96ea
     * calls 0x0001fe40(record,0x10,3,0x0006eef0). The complete ten-byte
     * callback sets EAX=ECX, writes DWORD [ECX+0xc]=0, then RET. 0x1fe60
     * binds ECX to successive records with 0x10-byte stride. Therefore
     * the three callback writes are exactly +0xc, +0x1c and +0x2c.
     * This does not change the generic 0x0001fe40 or other callbacks. */
    memcpy(record + 0x0c, &zero, 4);
    memcpy(record + 0x1c, &zero, 4);
    memcpy(record + 0x2c, &zero, 4);
    /* 0x2c96ef: one more DWORD clear at +0x3c; last ends at +0x5a8. */
    memcpy(record + 0x3c, &zero, 4);
  }
  bf_002c9670_produce(output, param_2);
  /* 0x2c9709 returns the same receiver; other guest registers/flags and
   * fault behavior are outside this host-memory operation contract. */
  return param_1;
}

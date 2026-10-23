/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37B1ADA8F55B9D8D277F01DA5A3611FFDE9C1DD8CDDCA26A20808BFAAA925D03
 * Entry: 0x000d4460, Ghidra index: 2649, label: FUN_000d4460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x000d4479: fcomp m32fp [0x003c05fc], a four-byte float.
 * Original file bits 0x40800000 (4.0f); symbol linkage remains ABI_UNVERIFIED. */
extern float DAT_003c05fc;
undefined4 FUN_000d4460(void)

{
  int in_ECX;
  
  if (((0.0 < *(float *)(in_ECX + 0x7dc)) &&
      (*(float *)(in_ECX + 0x7dc) < DAT_003c05fc != (*(float *)(in_ECX + 0x7dc) == DAT_003c05fc)))
     && ((*(byte *)(in_ECX + 0x260) & 8) != 0)) {
    return 1;
  }
  return 0;
}

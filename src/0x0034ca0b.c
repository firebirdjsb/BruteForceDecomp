/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8294F294B3F4A5D9FD6BFC5DA042B9349C2B53D1DCB1D6F169829897B48649E
 * Entry: 0x0034ca0b, Ghidra index: 12980, label: FUN_0034ca0b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034ca0b(undefined4 *param_1)

{
  byte bVar1;
  uint *in_ECX;
  
  if ((~(*in_ECX >> 7) & 1) == 0) {
    bVar1 = (byte)*in_ECX;
    if ((bVar1 & 0xc0) == 0x80) {
      *param_1 = 0xffff;
    }
    else if ((bVar1 & 0xe0) == 0xc0) {
      *param_1 = 0xffffff;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      *param_1 = 0xf0;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    *param_1 = 0xff;
  }
  return;
}

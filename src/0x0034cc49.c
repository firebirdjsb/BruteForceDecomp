/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B04C0F2316558820B7EFBE9D6C0502764399637EDACFB2C5097039EAC711C09C
 * Entry: 0x0034cc49, Ghidra index: 12986, label: FUN_0034cc49
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034cc49(void)

{
  int *in_ECX;
  
  if (3 < ((byte)in_ECX[2] & 7)) {
    return (*(ushort *)(in_ECX + 1) - 0x18) + *in_ECX;
  }
  return ((uint)in_ECX[2] >> 0x12 & 0x3c) + 0x18 + *in_ECX;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64671DBE97239A2A2750B0C9546F20E3E2DEAD594A08C695080C842C347BB41A
 * Entry: 0x00129430, Ghidra index: 3738, label: FUN_00129430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00129430(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x834);
  if (((bVar1 & 8) == 0) && (*(byte *)(in_EAX + 0x834) = bVar1 | 8, (bVar1 & 5) == 0)) {
    FUN_00129530();
    return;
  }
  return;
}

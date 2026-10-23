/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60996264FC4974E7CA1C618E5A3D4D105E3D6D467EA5E902D66D174B1ECAE45D
 * Entry: 0x001294a0, Ghidra index: 3741, label: FUN_001294a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001294a0(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x834);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
    return;
  }
  *(byte *)(in_EAX + 0x834) = bVar1 | 3;
  FUN_00129530();
  return;
}

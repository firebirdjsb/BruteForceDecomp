/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D97BFA692D8A1C8C5472689A0142096B1E05E53F6051C222929D197CDFEA87E
 * Entry: 0x00234c90, Ghidra index: 7810, label: FUN_00234c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00234c90(void)

{
  byte *in_EAX;
  uint uVar1;
  uint uVar2;
  byte *in_EDX;
  
  do {
    uVar1 = (uint)*in_EAX;
    in_EAX = in_EAX + 1;
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)*in_EDX;
    in_EDX = in_EDX + 1;
    if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}

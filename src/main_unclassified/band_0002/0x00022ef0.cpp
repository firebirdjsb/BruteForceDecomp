/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18ACCF9011A116A058A6A8346E8089372A72AC9B3E5A4C9987382021644A1913
 * Entry: 0x00022ef0, Ghidra index: 211, label: FUN_00022ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00022ef0(void)

{
  uint uVar1;
  uint uVar2;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 0x88);
  uVar2 = uVar1 >> 0x14 & 7;
  if (uVar2 == 0xffffffff) {
    *(uint *)(in_EDX + 0x88) = uVar1 | 0x700000;
    return uVar1 >> 0x10 & 0xffffff01;
  }
  *(uint *)(in_EDX + 0x88) = uVar1 | 0x700000;
  return (uint)(uVar2 != 0);
}

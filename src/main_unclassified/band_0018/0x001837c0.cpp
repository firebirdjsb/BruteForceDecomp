/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9360E2E775EDF9C2C60CBCE94BF6399D1F2C7BF565581A462A290D76E3731C8
 * Entry: 0x001837c0, Ghidra index: 5203, label: FUN_001837c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001837c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EDX;
  
  puVar1 = (undefined4 *)(in_EDX + 0x7c);
  iVar2 = 2;
  do {
    puVar1[2] = 0x4800;
    *puVar1 = 0;
    puVar1[1] = 1;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(in_EDX + 0xab) = 1;
  *(undefined1 *)(in_EDX + 0xaa) = 1;
  *(undefined4 *)(in_EDX + 0xa0) = 0xffffffff;
  *(undefined1 *)(in_EDX + 0xac) = 0;
  *(undefined4 *)(in_EDX + 0xa4) = 0;
  return;
}

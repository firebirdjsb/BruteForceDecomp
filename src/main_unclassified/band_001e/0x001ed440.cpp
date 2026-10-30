/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9FFEC270EF3B40F292AF354AE6F2977D02E8EAEB53301ADA72F3B62EF0DA098
 * Entry: 0x001ed440, Ghidra index: 6931, label: FUN_001ed440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed440(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EDX;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(in_EDX + 0x16c);
  iVar4 = 8;
  do {
    puVar3[-2] = 0xffffffff;
    iVar2 = 0x20;
    puVar1 = puVar3;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = puVar3 + 0x166;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

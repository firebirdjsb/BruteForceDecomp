/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71E098C4FA3118FDEC520A751FC03EF2AF0F9FC9D72E99729CCCCAD05D3521D8
 * Entry: 0x001ed360, Ghidra index: 6928, label: FUN_001ed360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ed360(void)

{
  int iVar1;
  int in_EDX;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)(in_EDX + 0xb0);
  iVar3 = 4;
  do {
    puVar4 = puVar2;
    for (iVar1 = 9; puVar4 = puVar4 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
    }
    *puVar2 = 0xffffffff;
    puVar2[-1] = 9;
    puVar2 = puVar2 + 0xb;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

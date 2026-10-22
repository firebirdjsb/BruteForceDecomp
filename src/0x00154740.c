/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5F70EB5176B5A4997265C2F5C769BCC063C7490112BF3E334563C533063E4D0
 * Entry: 0x00154740, Ghidra index: 4444, label: FUN_00154740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00154740(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_EDX;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(in_EDX + 0x60);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0x3f800000;
    puVar4 = puVar4 + 1;
  }
  piVar1 = *(int **)(in_EDX + 0x54);
  for (piVar2 = *(int **)(in_EDX + 0x50); piVar2 != piVar1; piVar2 = piVar2 + 2) {
    *(int *)(in_EDX + 0x60 + *piVar2 * 4) = piVar2[1];
  }
  return;
}

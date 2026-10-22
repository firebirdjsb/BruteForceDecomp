/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B9B96F619CDFB4A83FF726FF7BF007BCC6D5F2B104E6F2AC046DA269231F27E
 * Entry: 0x00258e30, Ghidra index: 8489, label: FUN_00258e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258e30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *in_EDX;
  uint *unaff_EBX;
  int *piVar5;
  uint local_4;
  
  piVar5 = in_EDX;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  for (uVar2 = unaff_EBX[2]; (*unaff_EBX <= uVar2 && (uVar2 < unaff_EBX[1]));
      uVar2 = *(uint *)(uVar2 + 4)) {
    in_EDX[2] = in_EDX[2] + 1;
    local_4 = *(uint *)(uVar2 + 0x10) & 0x3ffffff;
    puVar4 = (uint *)(in_EDX + 3);
    if ((uint)in_EDX[3] <= local_4) {
      puVar4 = &local_4;
    }
    in_EDX[3] = *puVar4;
    *in_EDX = *in_EDX + (*(uint *)(uVar2 + 0x10) & 0x3ffffff);
  }
  for (piVar5 = (int *)unaff_EBX[3]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    iVar3 = in_EDX[1];
    in_EDX[4] = in_EDX[4] + 1;
    iVar1 = *piVar5;
    in_EDX[1] = iVar3 + iVar1;
    in_EDX[1] = (piVar5[3] & 0xfffU) + iVar3 + iVar1;
  }
  return;
}

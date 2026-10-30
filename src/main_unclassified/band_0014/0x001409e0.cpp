/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0D8CACB6BAEBF6E3A9DB51112B8DF31F1E55800FAD53F699F6E0CBDA66B9247
 * Entry: 0x001409e0, Ghidra index: 4087, label: FUN_001409e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001409e0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int unaff_EBX;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(unaff_EBX + 8);
  if (in_ECX != (int *)0x0) {
    piVar1 = *(int **)(in_ECX[2] + 0xbec);
    iVar2 = (**(code **)(*in_ECX + 0x40))();
    fVar4 = (float10)(**(code **)(*piVar1 + 0x24))(iVar2 + 0x24);
    if (((float10)45.0 < fVar4) && ((*(byte *)(unaff_EBX + 0x48) & 0x10) != 0)) {
      return 0;
    }
    if (((float10)15.0 < fVar4) && ((*(byte *)(unaff_EBX + 0x48) & 8) != 0)) {
      iVar3 = iVar3 + -1;
    }
  }
  return iVar3;
}

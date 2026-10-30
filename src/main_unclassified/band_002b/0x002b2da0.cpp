/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7D14B01DF2BBDB2FF9F86A681DF936CD8F792F1DD8E90BACFAEDD53C10F746D
 * Entry: 0x002b2da0, Ghidra index: 9751, label: FUN_002b2da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b2da0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  
  iVar3 = *(int *)(in_EAX + 0x1c);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    piVar1 = (int *)(*(short *)(iVar3 + 0x18) + 0x44 + iVar3);
    iVar4 = *(short *)(iVar3 + 0x18) + iVar3;
    iVar3 = iVar2;
    if ((*(int *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x90) + 0x1d0) !=
         *(int *)(*(int *)(*piVar1 + 0x90) + 0x1d0)) &&
       (FUN_002c1860(iVar4), (*(uint *)(iVar4 + 0x14) & 0xc000) == 0)) {
      FUN_002c0220(iVar4,0,2);
    }
  }
  return;
}

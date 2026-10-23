/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BE0C4D071114D36CBC029E68ED38FD923792DA3632BE33BFED30EEBFD2797F3
 * Entry: 0x00081430, Ghidra index: 1522, label: FUN_00081430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00081430(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (in_ECX != 0) {
    iVar3 = *(int *)(in_ECX + 0xc4c);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x14) != 0x159bec67)) {
      iVar3 = 0;
    }
    iVar3 = *(int *)(iVar3 + 0x1c);
    if (iVar3 != 0) {
      uVar1 = *(uint *)(iVar3 + 4);
      if (uVar1 == 0) {
        return 0;
      }
      if (uVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar3 + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 != 0) {
        iVar6 = 0;
        uVar4 = 1;
        do {
          if (in_EDX < 1) {
            return iVar2;
          }
          if (uVar4 < uVar1) {
            uVar5 = uVar4 + 1;
            iVar6 = iVar6 + 4;
            if (uVar4 < uVar1) {
              iVar2 = *(int *)(iVar6 + *(int *)(iVar3 + 8));
            }
            else {
              iVar2 = 0;
            }
            iVar2 = *(int *)(iVar2 + 4);
          }
          else {
            iVar2 = 0;
            uVar5 = uVar4;
          }
          in_EDX = in_EDX + -1;
          uVar4 = uVar5;
        } while (iVar2 != 0);
      }
    }
  }
  return 0;
}

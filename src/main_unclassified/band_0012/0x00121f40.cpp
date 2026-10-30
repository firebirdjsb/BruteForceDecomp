/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99C4301639F7BE2D45C53ACD1266D3F27D4D045392BA4731C0931B0C542ECA8E
 * Entry: 0x00121f40, Ghidra index: 3660, label: FUN_00121f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00121f40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = param_2;
  iVar1 = *(int *)(param_2 + 0x110);
  if ((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x59c), iVar2 != 0)) {
    if (*(int *)(iVar2 + 4) != 0) {
      if (*(int *)(iVar2 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(iVar2 + 8);
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 != 0) {
        param_2 = 0;
        uVar6 = 1;
        do {
          if ((((iVar5 != param_1) && ((*(byte *)(iVar5 + 0x70) & 1) == 0)) &&
              (*(char *)(*(int *)(iVar5 + 0xc) + 0x294 + iVar1) != '\0')) &&
             ((cVar4 = (**(code **)(**(int **)(iVar5 + 0x5a4) + 0x94))(iVar1,iVar3), cVar4 != '\0'
              && (cVar4 = (**(code **)(**(int **)(iVar5 + 0x5a4) + 0x80))(iVar1,iVar3),
                 cVar4 != '\0')))) {
            return iVar5;
          }
          if (*(uint *)(iVar2 + 4) <= uVar6) {
            return 0;
          }
          param_2 = param_2 + 4;
          if (uVar6 < *(uint *)(iVar2 + 4)) {
            iVar5 = *(int *)(param_2 + *(int *)(iVar2 + 8));
          }
          else {
            iVar5 = 0;
          }
          iVar5 = *(int *)(iVar5 + 4);
          uVar6 = uVar6 + 1;
        } while (iVar5 != 0);
      }
    }
  }
  return 0;
}

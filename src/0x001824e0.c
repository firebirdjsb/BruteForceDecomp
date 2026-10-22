/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1978E262BAB8D622FFF362B900AAFB69BFC03816A8A13783A79D7F505611E4D9
 * Entry: 0x001824e0, Ghidra index: 5176, label: FUN_001824e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001824e0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x40) + iVar3 * 4);
      if (((piVar1[0xe] != 0) && (piVar1[0xb] == param_2)) && ((*(byte *)(piVar1 + 7) & 0x10) != 0))
      {
        if ((char)param_3 == '\0') {
          cVar2 = -1;
        }
        else {
          cVar2 = '\x01';
        }
        cVar2 = (char)piVar1[10] + cVar2;
        *(char *)(piVar1 + 10) = cVar2;
        if (cVar2 < '\0') {
          *(undefined1 *)(piVar1 + 10) = 0;
        }
        (**(code **)(*piVar1 + 0x38))(param_3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

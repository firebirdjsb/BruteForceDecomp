/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CBBBB7E637175B7D4EA77BDCB6861588BD5E74001FA33C31A83826B72DA333A
 * Entry: 0x00182470, Ghidra index: 5175, label: FUN_00182470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00182470(int param_1,undefined4 param_2)

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
      if ((piVar1[0xe] != 0) && ((*(byte *)(piVar1 + 7) & 0x10) != 0)) {
        if ((char)param_2 == '\0') {
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
        (**(code **)(*piVar1 + 0x38))(param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return 1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F35F01E7DC253204E8B500EB1AEBC19EEB07FE8A3804C66E91E4D352E876DC2A
 * Entry: 0x00182750, Ghidra index: 5180, label: FUN_00182750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00182750(void)

{
  int *piVar1;
  char cVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(unaff_EBX + 0x40) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_EBX + 0x44) - *(int *)(unaff_EBX + 0x40) >> 2;
  }
  iVar4 = 0;
  if (iVar3 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(*(int *)(unaff_EBX + 0x40) + iVar4 * 4);
    if ((((piVar1[0xe] != 0) && (cVar2 = (**(code **)(*piVar1 + 0x20))(), cVar2 != '\0')) &&
        (piVar1[0xb] == 3)) && ((*(byte *)(piVar1 + 7) & 2) == 0)) {
      local_4 = local_4 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar3);
  return local_4;
}

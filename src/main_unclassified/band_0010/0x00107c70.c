/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E07C0A1F31038855B3BB1EBC7A00815BCEA7D8D8A39E680B2B581D7826907732
 * Entry: 0x00107c70, Ghidra index: 3374, label: FUN_00107c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00107c70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x30);
    iVar3 = *(int *)(iVar4 + 0x2c);
    *param_2 = 0;
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      cVar2 = FUN_00107a90(param_1,iVar3);
      if (cVar2 != '\0') {
        *param_3 = *param_3 + 1;
      }
      cVar2 = FUN_00107b20(param_1,iVar3);
      if (cVar2 != '\0') {
        *param_2 = *param_2 + 1;
      }
    }
    iVar1 = *(int *)(iVar4 + 0x40);
    for (iVar4 = *(int *)(iVar4 + 0x3c); iVar4 != iVar1; iVar4 = iVar4 + 0x18) {
      cVar2 = FUN_00107a90(param_1,iVar4);
      if (cVar2 != '\0') {
        *param_3 = *param_3 + 1;
      }
      cVar2 = FUN_00107b20(param_1,iVar4);
      if (cVar2 != '\0') {
        *param_2 = *param_2 + 1;
      }
    }
  }
  return;
}

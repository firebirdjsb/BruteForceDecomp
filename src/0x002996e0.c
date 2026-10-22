/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72A37F69C9B6D79B068EC3EDEF59E44C3325BA23D1EEB8AF9763C4B9C7A76FE3
 * Entry: 0x002996e0, Ghidra index: 9380, label: FUN_002996e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_constant_table_overflow_004040a8[];
int FUN_002996e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_EBX;
  int iVar6;
  
  iVar1 = *unaff_EBX;
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 < 0x14) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar3 + -0x14;
  }
  iVar3 = iVar3 + -1;
  if (iVar6 <= iVar3) {
    piVar5 = (int *)(iVar3 * 0x10 + *(int *)(iVar1 + 8));
    do {
      if ((*piVar5 == -1) && (*(double *)(piVar5 + 2) == (double)CONCAT44(param_2,param_1))) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      piVar5 = piVar5 + -4;
    } while (iVar6 <= iVar3);
  }
  uVar2 = FUN_00294b10(0x10,s_constant_table_overflow_004040a8);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  puVar4 = (undefined4 *)(*(int *)(*unaff_EBX + 8) + iVar3 * 0x10);
  *puVar4 = 0xffffffff;
  puVar4[2] = param_1;
  puVar4[3] = param_2;
  return iVar3;
}

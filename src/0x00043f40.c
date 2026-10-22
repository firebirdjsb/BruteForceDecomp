/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A5321837F0536951E148AEB3CED7E4F1AF47F79AD935995784D4A6FC203E6CB
 * Entry: 0x00043f40, Ghidra index: 528, label: FUN_00043f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00043f40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c [11];
  
  iVar1 = param_1;
  iVar3 = *(int *)(param_1 + 0x434);
  if (iVar3 != *(int *)(param_1 + 0x438)) {
    param_1 = iVar3 + 8;
    do {
      if ((*(int *)(param_1 + -4) == 0) || (iVar2 = FUN_000388b0(), iVar2 == 0)) {
        FUN_00045180(local_38,param_1);
        FUN_0001d590(iVar1 + 0x430,param_1);
        *(int *)(iVar1 + 0x438) = *(int *)(iVar1 + 0x438) + -8;
      }
      else {
        puVar4 = local_2c;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_34 = 0;
        local_33 = 0;
        local_32 = 0;
        local_31 = 0;
        local_30 = 0;
        local_2f = 0;
        FUN_00043000();
        iVar3 = iVar3 + 8;
        param_1 = param_1 + 8;
      }
    } while (iVar3 != *(int *)(iVar1 + 0x438));
  }
  return;
}

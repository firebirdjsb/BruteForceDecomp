/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F54A3A8C6DBA33E01893A732D5FD1C1E7122D04B5C0F2744ABC84D237258075
 * Entry: 0x001781c0, Ghidra index: 4962, label: FUN_001781c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
int FUN_001781c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [6];
  byte bStack_8;
  
  uVar1 = param_1;
  if ((char)unaff_ESI[0xb] != '\0') {
    local_20[1] = 0;
    piVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_30 = 0;
    local_2c = 1;
    local_28 = 2;
    local_24 = FUN_00178090();
    FUN_00357290(4,&local_30);
    iVar2 = FUN_003574b0(uVar1,0x4000);
    local_20[0] = iVar2;
    if (iVar2 != 0) {
      local_20[1] = FUN_002383b0();
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI[10]);
      bStack_8 = bStack_8 | 2;
      local_20[1] = param_1;
      if (param_2 == (undefined4 *)0x0) {
        param_1 = 0;
        (**(code **)(*DAT_00469b54 + 0x1c))(&stack0x00000000,&param_1);
        local_20[2] = 0;
        local_20[3] = 0;
        local_20[4] = 0;
        local_20[5] = param_1;
      }
      else {
        local_20[2] = *param_2;
        local_20[3] = param_2[1];
        local_20[4] = param_2[2];
        local_20[5] = param_2[3];
      }
      bStack_8 = bStack_8 & 0xfe;
      if (((char)unaff_ESI[0xb] != '\0') && (3 < *(int *)(iVar2 + 0xf0))) {
        FUN_003590f0(iVar2,0,&stack0xffffffc4,2);
        FUN_003590f0(iVar2,1,&stack0xffffffc4,1);
        FUN_003590f0(iVar2,2,&stack0xffffffc4,2);
        FUN_003590f0(iVar2,local_28,&stack0xffffffc4,1);
      }
      iVar2 = unaff_ESI[1];
      unaff_ESI[1] = iVar2 + 1;
      unaff_ESI[10] = iVar2 + 1;
      FUN_00178380();
      return unaff_ESI[10];
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x26c))();
  }
  return 0;
}

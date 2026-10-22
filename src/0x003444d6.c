/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 715EBE0A0F5B53440412AB18B34963E16CBCFD0A5E72D334CD599E3A54CF0A63
 * Entry: 0x003444d6, Ghidra index: 12736, label: FUN_003444d6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b13f8;
undefined4 FUN_003444d6(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = FUN_00343a65(param_1,param_2,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00343af7(param_1,&param_2,0), iVar3 != 0)) {
    pbVar2 = *(byte **)(param_1 + 0x24);
    bVar1 = *pbVar2;
    if (param_2 == 1) {
      *param_3 = (uint)bVar1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    else if (param_2 == 2) {
      *param_3 = (uint)CONCAT11(bVar1,pbVar2[1]);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
    }
    else if (param_2 == 3) {
      *param_3 = (uint)CONCAT21(CONCAT11(bVar1,pbVar2[1]),pbVar2[2]);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 3;
    }
    else {
      if (param_2 != 4) {
        FUN_00343377(param_1,(param_2 == 0) - 0x3ec);
        return 0;
      }
      *param_3 = CONCAT31(CONCAT21(CONCAT11(bVar1,pbVar2[1]),pbVar2[2]),pbVar2[3]);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
    }
    if ((bVar1 & 0x80) != 0) {
      *param_3 = *param_3 | *(uint *)(&DAT_004b13f8 + param_2 * 4);
    }
    return 1;
  }
  return 0;
}

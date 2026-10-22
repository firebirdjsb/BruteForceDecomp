/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE961BC3B4CA3BFEC5D1EC296A55DC8E2BCDD5996C8914D7CB0E7CCB5120CCC7
 * Entry: 0x002c1860, Ghidra index: 10034, label: FUN_002c1860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443de8;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002c1860(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *local_81c;
  undefined4 local_818;
  undefined1 auStack_814 [12];
  undefined4 local_808;
  undefined4 local_4;
  
  iVar2 = *(int *)(*(int *)(param_1[10] + 0x14) + 0x120);
  if (param_1[0x1c] == iVar2) {
    return 4;
  }
  iVar5 = 0;
  param_1[0x1c] = iVar2;
  local_808 = 0;
  local_81c = param_1;
  local_4 = 0;
  local_818 = 0x14;
  do {
    while( true ) {
      iVar2 = (*(code *)(&DAT_00443de8)
                        [(int)*(short *)(((local_81c[5] ^ 0x100U) >> 8 & 3) * 0x1c + 0x32 +
                                        (int)local_81c) +
                         *(short *)(((uint)local_81c[5] >> 8 & 3) * 0x1c + 0x32 + (int)local_81c) *
                         4])(&local_81c);
      piVar1 = local_81c;
      if (iVar2 == 1) {
        param_1[5] = param_1[5] & 0xffff3fff;
        return 1;
      }
      param_1[5] = param_1[5] & 0xffff7fffU | 0x4000;
      if (iVar2 == 2) goto LAB_002c19a2;
      if (iVar2 == 3) break;
      _DAT_00000000 = 0;
    }
    iVar4 = ((uint)local_81c[5] >> 8 & 3) * 0x1c;
    if (*(short *)(iVar4 + 0x32 + (int)local_81c) != 5) {
      iVar4 = ((local_81c[5] ^ 0x100U) >> 8 & 3) * 0x1c;
    }
    uVar3 = FUN_002c2530(auStack_814);
    iVar5 = iVar5 + 1;
    *(undefined4 *)((int)piVar1 + iVar4 + 0x2c) = uVar3;
    *(undefined2 *)((int)piVar1 + iVar4 + 0x32) = 2;
  } while (iVar5 < 2);
LAB_002c19a2:
  if (((param_1[5] & 0x3000U) != 0x1000) && ((param_1[5] & 0x3c0000U) != 0x100000)) {
    (**(code **)(*param_1 + 0x14))();
  }
  return iVar2;
}

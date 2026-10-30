/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB59ACD5E87FCB1BF8B94D5E3FF0D8A6BDCD652CD8E2F1226C5A96BDC4E46D6D
 * Entry: 0x00358df0, Ghidra index: 13161, label: FUN_00358df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b168c;
undefined4 FUN_00358df0(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) ||
     (((*(int *)(param_1 + 0x270) == 0 && (*(int *)(param_1 + 0xfc) == 0)) ||
      (*(int *)(param_1 + 0x1c) != 0)))) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x280);
  if (iVar4 == 0) {
    FUN_00357180();
    iVar4 = *(int *)(param_1 + 0x280);
  }
  if (*(int *)(param_1 + 0x2f8) != 0) {
    FUN_00356f00(param_1);
  }
  iVar2 = FUN_0035b1a0();
  if (*(int *)(param_1 + 0x27c) != 0) {
    *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (iVar2 - *(int *)(param_1 + 0x27c));
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  FUN_00358d90();
  if ((*(int *)(param_1 + 0xfc) == 0) &&
     ((*(int *)(param_1 + 0x2f8) == 0 || (*(int *)(param_1 + 0x2a0) != 0)))) {
    if (*(uint *)(param_1 + 0x14) != 0) {
      lVar1 = (((ulonglong)(uint)((*(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x284)) * 1000) *
               (ulonglong)*(uint *)(param_1 + 0x18)) / (ulonglong)*(uint *)(param_1 + 0x14) &
              0xffffffff) * (ulonglong)*(uint *)(*(int *)(param_1 + 0x300) + 0x68);
      uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar4 = (iVar2 - *(int *)(param_1 + 0x338)) - iVar4;
      if (iVar4 < (int)uVar3) goto LAB_00358fa6;
      uVar3 = iVar4 - uVar3;
      if (*(int *)(param_1 + 0x288) < (int)uVar3) {
        if (*(int *)(param_1 + 0x2f8) == 0) {
          *(int *)(param_1 + 0x280) = iVar2;
          *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x270) + -1;
        }
        else {
          *(uint *)(param_1 + 0x338) = uVar3;
          *(int *)(param_1 + 0x33c) =
               (int)(((ulonglong)uVar3 * (ulonglong)*(uint *)(param_1 + 0x18)) /
                    (ulonglong)*(uint *)(param_1 + 0x14));
        }
      }
      if (*(uint *)(param_1 + 0x338) < *(uint *)(param_1 + 0x33c)) {
        *(undefined4 *)(param_1 + 0x338) = 0;
        return 0;
      }
      *(uint *)(param_1 + 0x338) = *(uint *)(param_1 + 0x338) - *(uint *)(param_1 + 0x33c);
    }
    return 0;
  }
LAB_00358fa6:
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar4 = FUN_0035ad70(DAT_004b168c,param_1 + 0x20c);
    if (iVar4 != 0) {
      (**(code **)(param_1 + 0x120))(param_1 + 0x110);
      FUN_0035ae30(DAT_004b168c,param_1 + 0x20c);
    }
  }
  return 1;
}

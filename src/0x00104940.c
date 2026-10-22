/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5D5C0EB1588A511BE909A48F05938CF8C732070780948A4969D241576FF864D
 * Entry: 0x00104940, Ghidra index: 3325, label: FUN_00104940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t _DAT_003c0604;
extern uint32_t _DAT_003c0608;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00104940(float param_1)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  
  bVar5 = ~*(byte *)(in_EAX + 0x114) & 1;
  iVar3 = in_EAX;
  if (bVar5 == 0) {
    iVar3 = *(int *)(in_EAX + 0x104);
    if (iVar3 < *(int *)(in_EAX + 0x10c)) {
      iVar3 = iVar3 + 1;
      *(int *)(in_EAX + 0x104) = iVar3;
      iVar1 = *(int *)(in_EAX + 4 + iVar3 * 4);
      if (iVar1 != 0) {
        iVar3 = *(int *)(in_EAX + 0x84 + iVar3 * 4);
        if (iVar3 == 0) {
          iVar3 = FUN_002ea01d(0x38);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_0008dc50();
          }
          *(int *)(in_EAX + 0x84 + *(int *)(in_EAX + 0x104) * 4) = iVar3;
        }
        if ((*(byte *)(in_EAX + 0x114) & 4) == 0) {
          iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x174))(iVar1,iVar3);
        }
        else {
          iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x170))();
        }
      }
    }
    else {
      bVar5 = 1;
    }
  }
  param_1 = param_1 + *(float *)(in_EAX + 0x110);
  *(float *)(in_EAX + 0x110) = param_1;
  if (bVar5 != 0) {
    uVar6 = (ushort)(param_1 < _DAT_003c0608) << 8 |
            (ushort)(isnan(param_1) || isnan(_DAT_003c0608)) << 10 |
            (ushort)(param_1 == _DAT_003c0608) << 0xe;
    if ((param_1 < _DAT_003c0608 != 0 || (param_1 == _DAT_003c0608) != 0) ||
       (uVar6 = (ushort)(param_1 < _DAT_003c0604) << 8 |
                (ushort)(isnan(param_1) || isnan(_DAT_003c0604)) << 10 |
                (ushort)(param_1 == _DAT_003c0604) << 0xe, param_1 >= _DAT_003c0604)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar3 >> 0x10),uVar6) >> 8),bVar5);
    }
  }
  if (((_DAT_003c0608 < param_1) && (piVar2 = *(int **)(in_EAX + 0x118), piVar2 != (int *)0x0)) &&
     ((*(byte *)(piVar2 + 10) & 4) == 0)) {
    *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) | 4;
    (**(code **)(*piVar2 + 0x28))();
  }
  uVar4 = FUN_00104bd0();
  return uVar4 & 0xffffff00;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A175F868B300669873E826F7E7236E04CF180CAB94B6417A8B299054FDF2EA0D
 * Entry: 0x0013b250, Ghidra index: 3982, label: FUN_0013b250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0013b250(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  while (param_2 < in_EAX) {
    iVar9 = (in_EAX + -1) / 2;
    cVar6 = FUN_00135d60();
    if (cVar6 == '\0') break;
    iVar3 = *(int *)(param_1 + iVar9 * 8 + 4);
    iVar1 = in_EAX * 8;
    in_EAX = iVar9;
    if (*(int *)(param_1 + iVar1 + 4) != iVar3) {
      FUN_0008f6a0(iVar3);
    }
  }
  uVar5 = param_4;
  uVar7 = *(uint *)(param_1 + 4 + in_EAX * 8);
  puVar2 = (undefined4 *)(param_1 + in_EAX * 8);
  if (uVar7 != param_4) {
    if (uVar7 != 0) {
      FUN_0008f6e0();
    }
    puVar2[1] = uVar5;
    if (uVar5 == 0) {
      return;
    }
    if ((uVar5 & 1) == 0) {
      uVar7 = uVar5 * 0x19660d + 0x3c6ef35f >> 0x15;
      *puVar2 = *(undefined4 *)(&DAT_00414da0 + uVar7 * 4);
      *(undefined4 **)(&DAT_00414da0 + uVar7 * 4) = puVar2;
    }
  }
  if (((uVar5 != 0) && ((uVar5 & 1) == 0)) &&
     (uVar7 = uVar5 * 0x19660d + 0x3c6ef35f >> 0x15, piVar8 = (int *)(&DAT_00414da0 + uVar7 * 4),
     *(int *)(&DAT_00414da0 + uVar7 * 4) != 0)) {
    while (piVar4 = (int *)*piVar8, piVar4 != &param_3) {
      piVar8 = piVar4;
      if (*piVar4 == 0) {
        return;
      }
    }
    *piVar8 = *(int *)*piVar8;
  }
  return;
}

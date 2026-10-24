/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC5EC807CBC58B7372CDCAD8D1942CD4DF0398C8761684D0E81F5F2499B5FE0A
 * Entry: 0x0013b050, Ghidra index: 3980, label: FUN_0013b050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0013b050(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar3 = param_2;
  iVar4 = local_14;
  while( true ) {
    iVar9 = iVar3 * 2 + 2;
    if (param_3 <= iVar9) break;
    local_14 = 0x13b083;
    cVar5 = FUN_00135d60();
    if (cVar5 != '\0') {
      iVar9 = iVar3 * 2 + 1;
    }
    uVar7 = *(uint *)(param_1 + 4 + iVar3 * 8);
    puVar1 = (undefined4 *)(param_1 + iVar3 * 8);
    uVar6 = *(uint *)(param_1 + 4 + iVar9 * 8);
    iVar3 = iVar9;
    iVar4 = local_14;
    if (uVar7 != uVar6) {
      if (uVar7 != 0) {
        local_14 = 0x13b0a2;
        FUN_0008f6e0();
      }
      puVar1[1] = uVar6;
      iVar4 = local_14;
      if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
        uVar7 = uVar6 * 0x19660d + 0x3c6ef35f >> 0x15;
        *puVar1 = *(undefined4 *)(&DAT_00414da0 + uVar7 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar7 * 4) = puVar1;
      }
    }
  }
  if ((iVar9 == param_3) &&
     (local_14 = *(int *)(param_1 + -4 + param_3 * 8), *(int *)(param_1 + 4 + iVar3 * 8) != local_14
     )) {
    local_18 = 0x13b0fa;
    FUN_0008f6a0();
    iVar4 = local_14;
  }
  local_14 = iVar4;
  uVar7 = param_5;
  local_20 = param_6;
  local_1c = param_7;
  local_18 = param_8;
  /* 0x0013B134 writes DL only to byte [EAX+0x0C] in the guest
   * 16-byte stack record; upper three bytes are not overwritten.
   * TODO ABI_UNVERIFIED: guest stack high bytes and indirect calls. */
  ((uint8_t *)&local_14)[0] = (uint8_t)param_9;
  local_24 = 0;
  if ((param_5 != 0) && (local_24 = param_5, (param_5 & 1) == 0)) {
    uVar6 = param_5 * 0x19660d + 0x3c6ef35f >> 0x15;
    local_28 = *(undefined4 *)(&DAT_00414da0 + uVar6 * 4);
    *(undefined4 **)(&DAT_00414da0 + uVar6 * 4) = &local_28;
  }
  FUN_0013b250(param_1,param_2);
  if (((uVar7 != 0) && ((uVar7 & 1) == 0)) &&
     (uVar7 = uVar7 * 0x19660d + 0x3c6ef35f >> 0x15, piVar8 = (int *)(&DAT_00414da0 + uVar7 * 4),
     *(int *)(&DAT_00414da0 + uVar7 * 4) != 0)) {
    while (piVar2 = (int *)*piVar8, piVar2 != &param_4) {
      piVar8 = piVar2;
      if (*piVar2 == 0) {
        return;
      }
    }
    *piVar8 = *(int *)*piVar8;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3A0BCB2ABEEA70C80F34E660F3EEC541B8F00CA103A593547D9455B8F14C6A0
 * Entry: 0x00298a10, Ghidra index: 9364, label: FUN_00298a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00298a10(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_30;
  undefined4 local_28 [2];
  double local_20;
  undefined4 local_18;
  double local_10;
  
  if (*(int *)(DAT_00469888 + 0x14) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 0x10) + 1;
    if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10) == -3))
    goto LAB_00298a55;
  }
  FUN_00295240();
LAB_00298a55:
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10;
  }
  uVar1 = *(undefined4 *)(iVar3 + 8);
  FUN_00296d20();
  iVar3 = FUN_002ebf10();
  if ((1 < *(int *)(DAT_00469888 + 0x14)) && (iVar2 = *(int *)(DAT_00469888 + 0x10) + 2, iVar2 != 0)
     ) {
    if ((*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar2 * 0x10) != -1) &&
       (iVar2 = FUN_00292690(), iVar2 != 0)) {
      FUN_00295240();
    }
    FUN_002899f0();
  }
  iVar2 = FUN_002ebf10();
  if (0 < iVar3) {
    local_20 = (double)iVar2;
    local_28[0] = 0xffffffff;
    FUN_00293c90(local_28);
    FUN_00289d40();
    if (iVar2 < iVar3) {
      local_28[0] = 0xffffffff;
      local_18 = 0xffffffff;
      local_30 = iVar2;
      do {
        local_30 = local_30 + 1;
        local_20 = (double)local_30;
        FUN_00293c90(local_28);
        local_10 = (double)iVar2;
        FUN_00293f40();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    FUN_002927e0(uVar1,iVar3 + -1);
    local_10 = (double)iVar3;
    local_18 = 0xffffffff;
    FUN_00293f40();
  }
  return;
}

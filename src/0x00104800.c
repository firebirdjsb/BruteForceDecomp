/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 812A4CBFEE86584D018313EEDA4D634D44A1893DFF84DB8915B9D24B499E92D7
 * Entry: 0x00104800, Ghidra index: 3324, label: FUN_00104800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039e240;
void FUN_00104800(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  piVar2 = &local_20;
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x130) != 0) && (*(int *)(param_1 + 0x124) != 0)) {
    local_20 = 0;
    if (param_2 < 10) {
      if (-1 < param_2) {
        piVar2 = &param_2;
      }
    }
    else {
      piVar2 = &DAT_0039e240;
    }
    iVar1 = *piVar2;
    local_4 = 7;
    local_8 = 0;
    local_18 = local_18 & 0xffff0000;
    param_2 = 0x1b08e866;
    uVar3 = FUN_001e97c0();
    uVar3 = FUN_002eaa70(uVar3);
    FUN_000876a0(local_1c,uVar3);
    FUN_000fb6e0(1,10);
    if (0 < iVar1) {
      do {
        param_2 = 0;
        iVar4 = FUN_00104b60(&param_2);
        if (iVar4 != 0) {
          FUN_0008e0d0(param_2);
        }
        FUN_000fb6e0(1,10);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    FUN_0010a7d0();
    if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18);
    }
  }
  return;
}

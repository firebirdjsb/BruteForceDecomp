/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FC5BF2C7A5B6352FA1AF97B8A27E3DE5264F49D93D78BB0E97DC2FD3A8DC6AA
 * Entry: 0x001045a0, Ghidra index: 3322, label: FUN_001045a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039e240;
void FUN_001045a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  piVar2 = &local_20;
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x130) != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
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
    param_2 = -0x6bf90df;
    uVar3 = FUN_001e97c0();
    uVar3 = FUN_002eaa70(uVar3);
    FUN_000876a0(local_1c,uVar3);
    FUN_000fb6e0(1,10);
    if (0 < iVar1) {
      do {
        uVar3 = FUN_0008e3e0();
        FUN_002eaa70(uVar3);
        FUN_0008ed00();
        FUN_000fb6e0(1,10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_0010a7d0();
    if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18);
    }
  }
  return;
}

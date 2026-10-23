/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2509C63C67897F9EDF5B68FE2C6EA60F25D3DFFD1A6F80ED93DBA8774FC9F6C0
 * Entry: 0x00105550, Ghidra index: 3340, label: FUN_00105550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038dc80;
extern uint32_t DAT_0040cc18;
extern uint32_t DAT_0040cd20;
void FUN_00105550(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float fStack0000000c;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_8 = 0;
  local_18 = local_18 & 0xffff0000;
  local_4 = 7;
  uVar1 = FUN_001e97c0();
  uVar1 = FUN_002eaa70(uVar1);
  FUN_000876a0(local_1c,uVar1);
  FUN_002eaa70(&DAT_0040cd20);
  FUN_0008ed00();
  puVar2 = &DAT_0038dc80;
  do {
    fStack0000000c = 0.0;
    if (param_2 + 4 != 0) {
      fVar3 = (float10)FUN_0008e620(param_2,*puVar2,param_2 + 4);
      fStack0000000c = (float)fVar3;
    }
    FUN_0008e0d0(fStack0000000c);
    FUN_002eaa70(&DAT_0040cc18);
    FUN_0008ed00();
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x38dc94);
  FUN_0010a7d0();
  if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return;
}

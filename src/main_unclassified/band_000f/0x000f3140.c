/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0E0EF8EDFF5F286B0A35CC499DF4028EF8342A8E099437CC0DE33C7A06D5810
 * Entry: 0x000f3140, Ghidra index: 3037, label: FUN_000f3140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000f3140(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  if (in_EAX != (int *)0x0) {
    iVar2 = (**(code **)(*in_EAX + 4))();
    if (iVar2 == 4) {
      uStack_4 = 7;
      uStack_8 = 0;
      uStack_18 = (undefined4 *)((uint)uStack_18._2_2_ << 0x10);
      FUN_00087940(auStack_1c,0,0xffffffff);
      puVar3 = uStack_18;
      if (uStack_4 < 8) {
        puVar3 = &uStack_18;
      }
      uVar1 = FUN_00102300(puVar3,*(undefined4 *)(param_1 + 0x248),param_2);
      if (7 < uStack_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_18);
      }
      return uVar1;
    }
  }
  return 0;
}

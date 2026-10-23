/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47D6FD5E8A09256878B3796606F5CDF30BC88BA8228A4E5624439E026DCE5BD6
 * Entry: 0x0029e410, Ghidra index: 9474, label: FUN_0029e410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029e410(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int *piStack_14;
  
  piStack_14 = param_1;
  piStack_18 = (int *)0x29e41e;
  (**(code **)(*param_1 + 0xc))();
  iVar1 = *param_1;
  piStack_18 = param_1;
  uStack_1c = 0x29e42a;
  uStack_1c = (**(code **)(*param_1 + 0x30))();
  piStack_20 = param_1;
  piStack_24 = (int *)0x29e42f;
  (**(code **)(iVar1 + 0x34))();
  piStack_24 = param_1;
  puStack_28 = (undefined1 *)0x29e435;
  iVar1 = (**(code **)(*param_1 + 0x38))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      puStack_28 = &stack0xfffffff4;
      (**(code **)(*param_1 + 0x20))(param_1,iVar2);
      (**(code **)(*param_1 + 0x24))(param_1,iVar2,&uStack_1c);
      (**(code **)(*param_1 + 0x14))(param_1,piStack_24,&puStack_28);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E31469EF9D9508F286DA37460A38F4BEC1841740F136F8120AA7288ED2780C79
 * Entry: 0x003479b2, Ghidra index: 12869, label: FUN_003479b2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_003479b2(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_1f0 [404];
  undefined4 local_5c;
  undefined2 uStack_58;
  undefined2 local_56;
  
  if (DAT_0040f5b4 != 0) {
    if ((param_1 == 0) && (iVar1 = FUN_00350130(0), iVar1 == 0)) {
      return 1;
    }
    FUN_00347918(local_1f0);
    FUN_00350130(local_1f0);
    if (param_2 != 0) {
      local_5c = 0;
      uStack_58 = 0;
      local_56 = 0;
    }
    FUN_00347871(local_1f0);
  }
  return 1;
}

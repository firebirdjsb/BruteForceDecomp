/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D34A17FBE26DE60213453DAEE791824C12CAB99F4B159435643C30AA558CE8FE
 * Entry: 0x0035434a, Ghidra index: 13108, label: FUN_0035434a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035434a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0035359e(param_1,*(undefined4 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x4a),
                       *(undefined2 *)(param_1 + 0x48),0,0,0x38,(uintptr_t)0x0035360fU);
  if (iVar1 == 0) {
    uVar2 = 0x80072747;
  }
  else {
    FUN_003540f2(param_1,iVar1,0x11,0);
    uVar2 = 0;
  }
  return uVar2;
}

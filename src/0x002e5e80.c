/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B30D6D5A3C896CF3728BC839076AD92A1E197585A0D1A81F3AC15393AF91FE5B
 * Entry: 0x002e5e80, Ghidra index: 10492, label: FUN_002e5e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386738;
undefined4 FUN_002e5e80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined **local_20 [6];
  int local_8;
  int *local_4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_002e8c40();
    piVar1 = (int *)(param_2 * 0x268 + 0x38 + in_ECX);
    local_20[0] = &PTR_FUN_00386738;
    local_8 = param_1;
    local_4 = piVar1;
    uVar2 = FUN_002e7f50(0,local_20,1,1);
    FUN_002e4880(0);
    if (param_1 == 3) {
      (**(code **)(*piVar1 + 0x18))();
    }
    FUN_002e8b80();
  }
  return uVar2;
}

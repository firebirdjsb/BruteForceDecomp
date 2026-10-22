/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEC1EF73E3517EEADB8267850EFDF6BB12829D32FC89DBAB6D08DDD498FFC73F
 * Entry: 0x00036560, Ghidra index: 358, label: FUN_00036560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00036560(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  undefined4 local_4;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_00038eb0(local_14,uVar2,puVar1);
  if (local_c != local_8) {
    FUN_00038f50(local_c);
  }
  FUN_00038fd0(&param_1,local_c,local_8);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

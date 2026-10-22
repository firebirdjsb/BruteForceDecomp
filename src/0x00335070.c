/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBC36CC54438FFC469DECF114FAF845A8C83A1A898EFAA154B76C57AB5767206
 * Entry: 0x00335070, Ghidra index: 12421, label: FUN_00335070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00335070(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14c) != 0) {
      FUN_00330c53(*(int *)(param_1 + 0x14c));
    }
    if (*(int *)(param_1 + 0x150) != 0) {
      FUN_0033c53d(*(int *)(param_1 + 0x150));
    }
    if (*(int *)(param_1 + 0x148) != 0) {
      FUN_00330c53(*(int *)(param_1 + 0x148));
    }
    FUN_0033e8c3(param_1 + 0x10);
    if (*(int *)(in_ECX + 0x12c4) == param_1) {
      *(int *)(in_ECX + 0x12c4) = 0;
    }
    thunk_FUN_0033e986(param_1,0x8044);
  }
  return;
}

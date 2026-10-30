/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F31472A9036EF420B069377576FB80BF7B43FEEE1B98DDA24048145ACA42082F
 * Entry: 0x00045180, Ghidra index: 535, label: FUN_00045180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00045180(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    uVar1 = *(uint *)(param_2 + 4);
    if (uVar1 != param_4[1]) {
      if (param_4[1] != 0) {
        FUN_0008f6e0();
      }
      param_4[1] = uVar1;
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
        *param_4 = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = param_4;
      }
    }
    param_2 = param_2 + 8;
    param_4 = param_4 + 2;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}

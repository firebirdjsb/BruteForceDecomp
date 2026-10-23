/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4423F20758D929804C9D281C3E10BA833F60694D5761BD05002F4FA8D01E7882
 * Entry: 0x0013f400, Ghidra index: 4051, label: FUN_0013f400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f2e0;
extern uint32_t PTR_FUN_0039c308;
void FUN_0013f400(undefined4 *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_0001d590(param_1 + 0xd,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1[0xe]);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_00137dc0();
  *param_1 = &PTR_FUN_0039c308;
  DAT_0041f2e0 = DAT_0041f2e0 + -1;
  if (param_1[6] != 0) {
    FUN_0008f6e0();
  }
  if (param_1[4] != 0) {
    FUN_0008f6e0();
  }
  return;
}

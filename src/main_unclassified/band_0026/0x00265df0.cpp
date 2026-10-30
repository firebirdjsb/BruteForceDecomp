/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4670D250234039816588DF84279045BB3A889D8C21CCD809BF53604D335D4BCA
 * Entry: 0x00265df0, Ghidra index: 8732, label: FUN_00265df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003927e0;
void FUN_00265df0(undefined4 *param_1)

{
  if (param_1[0x4f] != 0) {
    param_1[0x4f] = param_1[0x4f] + -1;
  }
  if (param_1[0x4f] == 0) {
    param_1[0x4f] = 1;
    *param_1 = PTR_FUN_003927e0;
    if (param_1[0x43] != -1) {
      XAPILIB__CloseHandle(param_1[0x43]);
      param_1[0x43] = 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC8CF9626B0D34447D9B3D9CC8DA0355828A50ED58B3C8434CF7A3C113389F7F
 * Entry: 0x00056cd0, Ghidra index: 838, label: FUN_00056cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_003a3f80;
void FUN_00056cd0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a3f80;
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[2] != 0) {
    FUN_0008f6e0();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BF1126F63E184FCC49F14159C349E72B7173C3F3B2BCA6C58ABAC993DCDDD48
 * Entry: 0x001027c0, Ghidra index: 3276, label: FUN_001027c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e310;
void FUN_001027c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039e310;
  FUN_00102d50();
  if (in_ECX[0x24] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x24]);
  }
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  if (in_ECX[0x1f] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1f]);
  }
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  FUN_00109490();
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F03A6DC6939F7BB57020243064F93D3EB84FAD5EAB524EA1F0DD616BCD341B8F
 * Entry: 0x002b33d0, Ghidra index: 9760, label: FUN_002b33d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e84c;
void FUN_002b33d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038e84c;
  if (in_ECX[4] != 0) {
    if (in_ECX[3] == 0) {
      *(undefined4 *)(in_ECX[4] + 0x18) = in_ECX[2];
    }
    else {
      *(undefined4 *)(in_ECX[3] + 8) = in_ECX[2];
    }
    if (in_ECX[2] != 0) {
      *(undefined4 *)(in_ECX[2] + 0xc) = in_ECX[3];
    }
  }
  in_ECX[5] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

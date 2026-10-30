/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78EA93FCBE943E419F0CE1ADBDEFA6DB23762B9F6B25E39F8FCDFCAC6D656B7D
 * Entry: 0x00105c50, Ghidra index: 3350, label: FUN_00105c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e208;
extern uint32_t PTR_LAB_0039e3a0;
void FUN_00105c50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039e208;
  if (7 < (uint)in_ECX[0x17]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x12]);
  }
  in_ECX[0x17] = 7;
  in_ECX[0x16] = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  if (7 < (uint)in_ECX[8]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[3]);
  }
  in_ECX[7] = 0;
  in_ECX[8] = 7;
  *(undefined2 *)(in_ECX + 3) = 0;
  *in_ECX = &PTR_LAB_0039e3a0;
  return;
}

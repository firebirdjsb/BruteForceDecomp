/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F38FF0892F49C3FD1F9A6D3D133E0428C558CEAE942BBB790C4C90A83304102
 * Entry: 0x001fde70, Ghidra index: 7218, label: FUN_001fde70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003953d8;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fde70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003953d8;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

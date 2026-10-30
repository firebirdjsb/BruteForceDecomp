/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2135BF718F492E90AFCB61BBEBB96BF01C8A9BB2D9FB1BBEE3EFAA74C21210DB
 * Entry: 0x001faa90, Ghidra index: 7094, label: FUN_001faa90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003965a8;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396458;
extern uint32_t PTR_LAB_00396470;
extern uint32_t PTR_LAB_003967a8;
extern uint32_t PTR_LAB_003967b8;
void FUN_001faa90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003965a8;
  in_ECX[2] = PTR_LAB_00396470;
  in_ECX[3] = PTR_LAB_003967b8;
  in_ECX[0x10] = PTR_LAB_00396458;
  in_ECX[0x11] = PTR_LAB_003967a8;
  in_ECX[0x1f] = PTR_LAB_0039644c;
  FUN_001f8b30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

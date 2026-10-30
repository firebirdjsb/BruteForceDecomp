/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F49D03F9FCEA95AB26104FDC4F0BE41635375921E1801E7D120AA0043BF303
 * Entry: 0x0010cd40, Ghidra index: 3481, label: FUN_0010cd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e020;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_0010cd40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039e020;
  FUN_0010a120();
  FUN_0010a120();
  *in_ECX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}

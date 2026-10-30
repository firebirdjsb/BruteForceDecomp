/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 555D666AB20152721C8E3F820367545C0B80A635090B94A624468D9C56BCC290
 * Entry: 0x002240e0, Ghidra index: 7612, label: FUN_002240e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394858;
void FUN_002240e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00394858;
  if ((undefined4 *)in_ECX[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x17])(1);
    in_ECX[0x17] = 0;
  }
  if (in_ECX[0x14] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x14]);
  }
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  if (in_ECX[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x10]);
  }
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  return;
}

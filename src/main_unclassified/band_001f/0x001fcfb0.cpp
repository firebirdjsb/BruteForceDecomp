/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB5D7162974749956F8E99547B57174A904EAA521F286A62D92A919F99E8E870
 * Entry: 0x001fcfb0, Ghidra index: 7181, label: FUN_001fcfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395d50;
extern uint32_t PTR_LAB_00395d24;
extern uint32_t PTR_LAB_00395d34;
void FUN_001fcfb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00395d50;
  in_ECX[2] = &PTR_LAB_00395d34;
  in_ECX[3] = &PTR_LAB_00395d24;
  FUN_002063c0(in_ECX,1);
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

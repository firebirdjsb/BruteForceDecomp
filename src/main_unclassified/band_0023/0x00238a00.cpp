/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3798E1169B5F320AEC309519D4684F99E9DABDDC19044B3D7257AED8F9E30920
 * Entry: 0x00238a00, Ghidra index: 7883, label: FUN_00238a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394140;
extern uint32_t PTR_LAB_003a3890;
void FUN_00238a00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394140;
  if (in_ECX[2] != 0) {
    *(undefined4 *)(in_ECX[2] + 0x10) = 0;
  }
  *in_ECX = PTR_LAB_003a3890;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 073408CF23013B5360A8158A64367189A74747A3B80C5631AE43AAF408226BF9
 * Entry: 0x00062450, Ghidra index: 1055, label: FUN_00062450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3890;
void FUN_00062450(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[4] != 0) {
    D3D8LTCG__D3DResource_Release(in_ECX[4]);
    in_ECX[4] = 0;
  }
  *in_ECX = &PTR_LAB_003a3890;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

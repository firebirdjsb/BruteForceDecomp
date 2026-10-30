/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7D594F3F1D53A2F1CEF940D0E7D4E8BD8E06CA6C00AB6AA36138D2C128FE696
 * Entry: 0x001e8f80, Ghidra index: 6851, label: FUN_001e8f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396ca8;
void FUN_001e8f80(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00396ca8;
  FUN_001e9000();
  piVar1 = (int *)in_ECX[4];
  if ((*piVar1 != 0x3e5) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

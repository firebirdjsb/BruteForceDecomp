/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4ED8566F3A58869F3CB854A9A400BF8A049D1AEA5CECF148D94362B611E2F909
 * Entry: 0x0026c8b0, Ghidra index: 8769, label: FUN_0026c8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0026c8b0(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0026c8d0(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

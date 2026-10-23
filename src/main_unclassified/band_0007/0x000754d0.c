/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5525448AEF3DD676DC602FAC133169DD7717923B0FF4E1953CC14DDC402AAA3
 * Entry: 0x000754d0, Ghidra index: 1346, label: FUN_000754d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000754d0(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_000754d0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}

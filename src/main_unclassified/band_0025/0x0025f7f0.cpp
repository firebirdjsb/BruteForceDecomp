/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFE5EA94FC044E6A1E31121DAF77505642179D91CA979F9F75BBE94E20471601
 * Entry: 0x0025f7f0, Ghidra index: 8607, label: FUN_0025f7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025f7f0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0025f7f0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}

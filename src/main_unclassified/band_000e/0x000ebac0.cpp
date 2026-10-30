/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86EFC7C58449DFDA6447E47F2E098EEC6ABB9515139A4F6896EFCC3100363DA4
 * Entry: 0x000ebac0, Ghidra index: 2903, label: FUN_000ebac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebac0(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

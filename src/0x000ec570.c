/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 443CA99AFAB29E398F9AE098908C90BA34E2C41413CB0D891469CCA9C2E4954A
 * Entry: 0x000ec570, Ghidra index: 2929, label: FUN_000ec570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec570(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E29EA56A12DB897267570604381CBC05848FCE7CCE2F3DA2FA702E5BBD624D02
 * Entry: 0x00312cac, Ghidra index: 11980, label: FUN_00312cac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00312cac(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00311b20();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}

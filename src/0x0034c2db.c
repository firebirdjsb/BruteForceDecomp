/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 429D2FDE694DB4FCE0B36BB35A31531D2DE9311CCCDFC2A6E43220B0C7CA1B89
 * Entry: 0x0034c2db, Ghidra index: 12952, label: FUN_0034c2db
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c2db(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    in_ECX[1] = param_1;
  }
  *in_ECX = param_1;
  return;
}

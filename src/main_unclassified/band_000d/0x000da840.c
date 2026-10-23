/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E8BFAC6130CFF71B2A4C3EAB79D795FC0B62DA6021DFAE0A78076B69BD245A9
 * Entry: 0x000da840, Ghidra index: 2693, label: FUN_000da840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000da840(int *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  iVar1 = 0;
  if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 != 0)) {
    FUN_000da880(in_ECX,iVar1,1);
    FUN_000da8f0(in_ECX);
  }
  return iVar1;
}

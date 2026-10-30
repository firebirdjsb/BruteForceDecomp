/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 501ECC694E2B6D8B62520A925A33014C1091DB0B4084A93CE8DA5A8D7278F99D
 * Entry: 0x0034dd0a, Ghidra index: 13011, label: FUN_0034dd0a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034dd0a(byte *param_1)

{
  int iVar1;
  byte *in_ECX;
  
  while( true ) {
    if ((*in_ECX == 0) || (*param_1 == 0)) {
      return 1;
    }
    if ((*in_ECX != *param_1) || (iVar1 = __strnicmp(in_ECX + 1,param_1 + 1,*in_ECX), iVar1 != 0))
    break;
    in_ECX = in_ECX + *in_ECX + 1;
    param_1 = param_1 + *param_1 + 1;
  }
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2006A5253D6C80C85615ECD0934475A6F17CDE434DA0D0D47EF320DFCD373BC5
 * Entry: 0x000fdb40, Ghidra index: 3174, label: FUN_000fdb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdb40(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  unaff_EBX[3] = param_1[3];
  unaff_EBX[4] = param_1[4];
  FUN_000fdba0();
  FUN_0010bc40();
  unaff_EBX[10] = param_1[10];
  unaff_EBX[0xb] = param_1[0xb];
  unaff_EBX[0xc] = param_1[0xc];
  return;
}

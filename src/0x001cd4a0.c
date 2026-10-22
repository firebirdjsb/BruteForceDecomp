/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D2697CC862551600DF8827CFAC855D895ADE70E8A27638AB770A6F3228161F2
 * Entry: 0x001cd4a0, Ghidra index: 5973, label: FUN_001cd4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd4a0(undefined4 *param_1)

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
  FUN_000fdba0();
  return;
}

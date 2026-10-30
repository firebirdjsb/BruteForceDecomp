/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 248B06BB8A16AA510F202A7B91D91EF4416F611521EC07A2EEC7C091DEE393D6
 * Entry: 0x000fdc90, Ghidra index: 3177, label: FUN_000fdc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdc90(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  unaff_EBX[3] = param_1[3];
  unaff_EBX[4] = param_1[4];
  unaff_EBX[5] = 0;
  FUN_000fdba0();
  FUN_001e0dd0(unaff_EBX + 6);
  return;
}

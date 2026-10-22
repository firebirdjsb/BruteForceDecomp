/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3E8833712E92A21B550641CB248D0B1875AA461940D8772DA27296109BE6A1A
 * Entry: 0x001c95f0, Ghidra index: 5829, label: FUN_001c95f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c95f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  puVar2 = param_1 + 3;
  puVar3 = unaff_EBX + 3;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  unaff_EBX[0x43] = param_1[0x43];
  unaff_EBX[0x44] = param_1[0x44];
  FUN_001e0dd0(unaff_EBX + 0x45);
  FUN_001e0dd0(unaff_EBX + 0x49);
  return;
}

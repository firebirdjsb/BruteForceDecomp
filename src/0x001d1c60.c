/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7811F0BA74F863123EA24E07A6160C04894DF960226D3453239A09B6840C0594
 * Entry: 0x001d1c60, Ghidra index: 6289, label: FUN_001d1c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1c60(undefined4 *param_1)

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
  FUN_0010bc40();
  FUN_0010bc40();
  return;
}

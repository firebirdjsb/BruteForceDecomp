/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4ED6322EB65D56170A83AB9A266C1621435EB904255C332E3FF047CD9C009F2A
 * Entry: 0x001666b0, Ghidra index: 4718, label: FUN_001666b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001666b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *unaff_EBX = *param_1;
  iVar1 = 5;
  puVar2 = param_1;
  puVar3 = unaff_EBX;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  unaff_EBX[6] = param_1[6];
  unaff_EBX[7] = param_1[7];
  FUN_00166810(unaff_EBX + 8);
  unaff_EBX[0x7a] = param_1[0x7a];
  unaff_EBX[0x7b] = param_1[0x7b];
  unaff_EBX[0x7c] = param_1[0x7c];
  unaff_EBX[0x7d] = param_1[0x7d];
  unaff_EBX[0x7e] = param_1[0x7e];
  unaff_EBX[0x7f] = param_1[0x7f];
  unaff_EBX[0x80] = param_1[0x80];
  unaff_EBX[0x81] = param_1[0x81];
  unaff_EBX[0x82] = param_1[0x82];
  unaff_EBX[0x83] = param_1[0x83];
  unaff_EBX[0x84] = param_1[0x84];
  FUN_001667c0();
  unaff_EBX[0x127] = param_1[0x127];
  unaff_EBX[0x128] = param_1[0x128];
  unaff_EBX[0x129] = param_1[0x129];
  FUN_001668b0();
  return;
}

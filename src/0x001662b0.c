/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBF1D563DFECC3B00583AD8156DF11AB53BF0A612000733B5D71B820CF1AE2FC
 * Entry: 0x001662b0, Ghidra index: 4712, label: FUN_001662b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001662b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  
  *unaff_EBX = *param_1;
  iVar2 = 5;
  puVar1 = param_1;
  puVar4 = unaff_EBX;
  while( true ) {
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    *puVar4 = *puVar1;
  }
  unaff_EBX[6] = param_1[6];
  unaff_EBX[7] = param_1[7];
  FUN_00166410(unaff_EBX + 8);
  puVar1 = unaff_EBX + 0x7b;
  unaff_EBX[0x7a] = param_1[0x7a];
  iVar2 = 0x1ec - (int)puVar1;
  iVar3 = 4;
  do {
    *puVar1 = *(undefined4 *)((int)param_1 + iVar2 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_EBX[0x7f] = param_1[0x7f];
  unaff_EBX[0x80] = param_1[0x80];
  puVar1 = unaff_EBX + 0x81;
  iVar2 = 0x204 - (int)puVar1;
  iVar3 = 4;
  do {
    *puVar1 = *(undefined4 *)((int)param_1 + iVar2 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_001663a0(unaff_EBX + 0x85);
  unaff_EBX[0x127] = param_1[0x127];
  unaff_EBX[0x128] = param_1[0x128];
  unaff_EBX[0x129] = param_1[0x129];
  FUN_001664b0(unaff_EBX + 0x12a);
  return;
}

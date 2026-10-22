/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7A8DB2EE524B02469D470B2D2291ABCA242B65C071C74877886EB8D099A712F
 * Entry: 0x00103ff0, Ghidra index: 3310, label: FUN_00103ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103ff0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x80) = param_2;
  piVar1 = *(int **)(unaff_ESI + 0x9c);
  *(int *)(unaff_ESI + 0x7c) = param_1;
  piVar1[5] = param_1;
  (**(code **)(*piVar1 + 0x1c))();
  piVar1 = *(int **)(unaff_ESI + 0x9c);
  piVar1[6] = *(int *)(unaff_ESI + 0x80);
  (**(code **)(*piVar1 + 0x1c))();
  iVar2 = *(int *)(unaff_ESI + 0x9c);
  uVar3 = *(undefined4 *)(unaff_ESI + 0x7c);
  *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(unaff_ESI + 0x80);
  *(undefined4 *)(iVar2 + 0x80) = uVar3;
  piVar1 = *(int **)(unaff_ESI + 0xa4);
  piVar1[5] = *(int *)(unaff_ESI + 0x7c);
  (**(code **)(*piVar1 + 0x1c))();
  piVar1 = *(int **)(unaff_ESI + 0xa4);
  piVar1[6] = *(int *)(unaff_ESI + 0x80);
  (**(code **)(*piVar1 + 0x1c))();
  iVar2 = *(int *)(unaff_ESI + 0xa4);
  uVar3 = *(undefined4 *)(unaff_ESI + 0x7c);
  *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(unaff_ESI + 0x80);
  *(undefined4 *)(iVar2 + 0x80) = uVar3;
  return;
}

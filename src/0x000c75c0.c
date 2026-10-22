/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42F7E3B869EE764E95412184F5FB9810C814ED2FCA6309F260C4CAB9D059191C
 * Entry: 0x000c75c0, Ghidra index: 2449, label: FUN_000c75c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c75c0(void)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  puVar4 = &local_4;
  local_4 = 0x146a96d3;
  (**(code **)(*unaff_ESI + 0x30))(&local_4);
  uVar5 = 0xc626fd5;
  FUN_000ca2f0(unaff_ESI);
  FUN_000ca360(puVar4,uVar5);
  *(byte *)(*(int *)(unaff_ESI[0x1a] + 0x2c) + 0x3b) =
       *(byte *)(*(int *)(unaff_ESI[0x1a] + 0x2c) + 0x3b) | 0x10;
  pbVar1 = (byte *)(*(int *)(unaff_ESI[0x1b] + 0x2c) + 0x3b);
  *pbVar1 = *pbVar1 | 0x10;
  if (((*(int *)(unaff_ESI[10] + 8) != 0) &&
      (iVar2 = *(int *)(*(int *)(unaff_ESI[10] + 8) + 0xe0), iVar2 != 0)) &&
     (piVar3 = *(int **)(iVar2 + 0x5a4), piVar3 != (int *)0x0)) {
    uVar5 = (**(code **)(*piVar3 + 0x4c))();
    FUN_001e97c0(puVar4,uVar5);
    FUN_000ca210();
  }
  return;
}

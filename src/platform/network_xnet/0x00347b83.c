/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACCDD73522530BAC3D6FB692C30BAB3DECC7CBE440F821C723952FAE3CC08EB1
 * Entry: 0x00347b83, Ghidra index: 12877, label: FUN_00347b83
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00347b83(int *param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  piVar1 = *(int **)(in_ECX + 0xac0);
  uVar3 = (uint)*(ushort *)(in_ECX + 0xacc);
  do {
    if (uVar3 == 0) {
      return (int *)0x0;
    }
    uVar3 = uVar3 - 1;
    iVar2 = 2;
    bVar6 = true;
    piVar4 = piVar1;
    piVar5 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return piVar1;
    }
    piVar1 = piVar1 + 0x3d;
  } while( true );
}

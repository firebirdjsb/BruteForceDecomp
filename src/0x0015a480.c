/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32C0EA733071BEBC673111E939E0478C1E551B6EC6C416EBA3DEC0A933153B54
 * Entry: 0x0015a480, Ghidra index: 4513, label: FUN_0015a480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015a480(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  iVar4 = (**(code **)(*param_1 + 0x40))();
  uVar1 = *(undefined4 *)(iVar4 + 0x2c);
  uVar2 = *(undefined4 *)(iVar4 + 0x28);
  uVar3 = *(undefined4 *)(iVar4 + 0x24);
  FUN_0015a140();
  unaff_ESI[1] = uVar2;
  *unaff_ESI = uVar3;
  unaff_ESI[2] = uVar1;
  return;
}

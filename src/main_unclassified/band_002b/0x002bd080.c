/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F79EF035E4E782E859E37D0E12D106E8983637A5001FF4F89D56E794B984EB9A
 * Entry: 0x002bd080, Ghidra index: 9937, label: FUN_002bd080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd080(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  uVar3 = (uint)*(ushort *)(unaff_EBX + 0x52);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    uVar1 = *(undefined4 *)(*(int *)(unaff_EBX + 0x54) + uVar3 * 4);
    local_18 = *(int *)(unaff_EBX + 0xc);
    local_14 = uVar1;
    FUN_002bcaf0(*(undefined4 *)(local_18 + 0xc),&local_18);
    iVar2 = *(int *)(unaff_EBX + 0xc);
    uVar4 = (uint)*(ushort *)(iVar2 + 0x136);
    local_c = uVar1;
    local_10 = iVar2;
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      (**(code **)(**(int **)(*(int *)(iVar2 + 0x138) + uVar4 * 4) + 0xc))(&local_10);
    }
  }
  return;
}

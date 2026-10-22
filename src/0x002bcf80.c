/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 963FB53BB9C4A5AD87D398AAF7BCE0E0F90F5901DBF7B3EA0287556944FE7CAA
 * Entry: 0x002bcf80, Ghidra index: 9936, label: FUN_002bcf80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002bcf80(void)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  int local_1c;
  float fStack_18;
  float local_14;
  float local_10;
  int local_c;
  
  iVar3 = *(ushort *)(in_EAX + 0x52) - 1;
  while (-1 < iVar3) {
    iVar3 = iVar3 + -1;
    *(undefined1 *)(*(int *)(*(int *)(in_EAX + 0x54) + 4 + iVar3 * 4) + 0x70) = 1;
  }
  FUN_002bb1e0(in_EAX);
  local_c = *(int *)(in_EAX + 0xc);
  local_1c = *(int *)(local_c + 0x108);
  fStack_18 = *(float *)(local_c + 0x10c);
  fVar7 = (float10)*(double *)(local_c + 0x110) - (float10)*(double *)(local_c + 0x108);
  local_14 = (float)fVar7;
  if (fVar7 <= (float10)1e-10) {
    local_10 = 1e+10;
  }
  else {
    local_10 = (float)((float10)1.0 / fVar7);
  }
  FUN_002bafd0();
  uVar4 = FUN_002c5dc0();
  uVar5 = (uint)*(ushort *)(in_EAX + 0x52);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    fVar1 = *(float *)(*(int *)(in_EAX + 0x54) + uVar5 * 4);
    local_1c = *(int *)(in_EAX + 0xc);
    fStack_18 = fVar1;
    FUN_002bcb50(*(undefined4 *)(local_1c + 0xc),&local_1c);
    fVar2 = *(float *)(in_EAX + 0xc);
    uVar6 = (uint)*(ushort *)((int)fVar2 + 0x136);
    local_10 = fVar1;
    local_14 = fVar2;
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      (**(code **)(**(int **)(*(int *)((int)fVar2 + 0x138) + uVar6 * 4) + 8))(&local_14);
    }
  }
  return uVar4;
}

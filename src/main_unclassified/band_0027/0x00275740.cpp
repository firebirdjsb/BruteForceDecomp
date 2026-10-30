/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CEC98A2F2D86D0CD3CDC76E431B843F7172B8DE7648393FFCF22465ED3D5BF7
 * Entry: 0x00275740, Ghidra index: 8888, label: FUN_00275740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00275740(int *param_1)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_38 [9];
  undefined4 uStack_14;
  
  piVar2 = param_1;
  piVar3 = aiStack_38;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 4;
  if (*param_1 == 4) {
    *(int *)(in_ECX + 0x48) = param_1[10];
    uStack_14 = 0x27578d;
    FUN_002757c0();
  }
  else {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}

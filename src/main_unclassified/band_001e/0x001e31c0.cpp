/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0284B24594221CA62E07030D13B81028D3F6206E91ED1F0077C8953C064B81C
 * Entry: 0x001e31c0, Ghidra index: 6764, label: FUN_001e31c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e31c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
  piVar1 = piVar3;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar1 = (int *)*piVar3;
  }
  iVar2 = FUN_000e0b20(0,piVar1,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 < 0) {
    FUN_001e3140();
  }
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    iVar2 = param_2 + 4;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(param_2 + 0x14));
  if (iVar2 < 0) {
    FUN_001e3140();
  }
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar3 = (int *)*piVar3;
  }
  iVar2 = FUN_000e0b20(0,piVar3,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 < 0) {
    FUN_001e3140();
  }
  return;
}

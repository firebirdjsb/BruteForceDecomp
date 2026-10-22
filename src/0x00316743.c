/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8132243AD6811DAB929F04467BCD93F0B789363C7980A82537020320F79435E1
 * Entry: 0x00316743, Ghidra index: 12149, label: FUN_00316743
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316743(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_00317503(1);
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar1 = FUN_003148cf(0x61645344,*(int *)(*(int *)(in_ECX + 0x88) + 0xb8) * 0x30,1);
    *(int *)(in_ECX + 200) = iVar1;
    if (-1 < (int)((-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e)) {
      uVar4 = 0;
      if (*(int *)(*(int *)(in_ECX + 0x88) + 0xb8) != 0) {
        do {
          piVar2 = (int *)(*(int *)(in_ECX + 200) + iVar3);
          *piVar2 = in_ECX + 0xb8;
          piVar2[1] = *(int *)(in_ECX + 0xbc);
          *(int **)(in_ECX + 0xbc) = piVar2;
          *(int **)piVar2[1] = piVar2;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x30;
        } while (uVar4 < *(uint *)(*(int *)(in_ECX + 0x88) + 0xb8));
      }
      if ((*(byte *)(*(int *)(in_ECX + 0x88) + 10) & 4) == 0) {
        FUN_0031841f();
        return;
      }
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 647400ACE77BA8C1326D420409F23AA5C1E5A02CD8E3C42946AFFE8EDD14A9D0
 * Entry: 0x002713d0, Ghidra index: 8811, label: FUN_002713d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002713d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar1 = *(int **)(in_EAX + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,(undefined4 *)(in_ECX + 8));
    if (*(int *)(in_EAX + 4) != 0) {
      FUN_00061eb0();
      puVar4 = (undefined4 *)FUN_00039510();
      uVar2 = puVar4[2];
      uVar3 = puVar4[1];
      *(undefined4 *)(in_ECX + 8) = *puVar4;
      *(undefined4 *)(in_ECX + 0xc) = uVar3;
      *(undefined4 *)(in_ECX + 0x10) = uVar2;
    }
  }
  return;
}

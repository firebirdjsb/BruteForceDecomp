/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86118BE990AE9FA7B0875FD2D77A5840C9759346AB4620B7886D047C14CE38C1
 * Entry: 0x00109940, Ghidra index: 3412, label: FUN_00109940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00109940(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  
  piVar4 = (int *)FUN_001098f0();
  if (piVar4 != (int *)0x0) {
    fVar1 = *(float *)(in_ECX + 0x18);
    piVar4[5] = (int)(float)(int)*(float *)(in_ECX + 0x14);
    (**(code **)(*piVar4 + 0x1c))();
    piVar4[6] = (int)(float)(int)fVar1;
    (**(code **)(*piVar4 + 0x1c))();
    iVar5 = FUN_001098f0();
    if (iVar5 != 0) {
      uVar2 = *(undefined4 *)(iVar5 + 0x88);
      uVar3 = *(undefined4 *)(iVar5 + 0x8c);
      iVar5 = FUN_001098f0();
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x88) = uVar2;
        *(undefined4 *)(iVar5 + 0x8c) = uVar3;
        FUN_0010ab60();
      }
    }
  }
  return 1;
}

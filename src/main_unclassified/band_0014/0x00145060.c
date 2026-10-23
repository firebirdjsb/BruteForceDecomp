/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D47F81377DE3E1AFE898E428703A1C2F2692AD5C84BEED0536BFB49492663B4
 * Entry: 0x00145060, Ghidra index: 4185, label: FUN_00145060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145060(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(in_EAX + 0x2c) == 0) {
    iVar2 = FUN_000120f0();
    uVar1 = *(undefined4 *)(iVar2 + 8);
    iVar2 = 0;
    piVar3 = (int *)FUN_00160da0(0xffffffff,1);
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 8))(uVar1);
      if (iVar2 != 0) {
        FUN_000da880(uVar1,iVar2,1);
        FUN_000da8f0(uVar1);
      }
    }
    if (*(int *)(in_EAX + 0x2c) != iVar2) {
      FUN_0008f6a0(iVar2);
    }
  }
  if (*(int *)(in_EAX + 0x2c) != 0) {
    iVar2 = *(int *)(*(int *)(in_EAX + 0x2c) + 0x148);
    iVar4 = FUN_000120f0();
    if (iVar2 != iVar4) {
      FUN_000120f0();
      FUN_0006ff00();
    }
  }
  return;
}

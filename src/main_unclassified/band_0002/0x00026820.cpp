/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28ED611037743F8F4E115E5D8E3BC4480485DFD1189B3F065753C132670490CD
 * Entry: 0x00026820, Ghidra index: 266, label: FUN_00026820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00026820(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(in_EAX + 0x10);
  iVar1 = *(int *)(in_EAX + 4);
  if ((((*(int *)(iVar1 + 0x14 + iVar5 * 0x18) != 0) && (-1 < (int)(iVar5 + 1U))) && (iVar1 != 0))
     && ((iVar5 + 1U < (uint)((*(int *)(in_EAX + 8) - iVar1) / 0x18) &&
         (*(int *)(iVar1 + 0x2c + iVar5 * 0x18) != 0)))) {
    piVar4 = (int *)FUN_00023420();
    iVar5 = (**(code **)(*piVar4 + 0x3c))();
    if (iVar5 == 6) {
      iVar5 = *(int *)(*(int *)(in_EAX + 4) + 0x14 + *(int *)(in_EAX + 0x10) * 0x18);
      uVar6 = FUN_000120f0();
      piVar2 = *(int **)(iVar5 + 0x3c);
      if ((piVar2 != (int *)0x0) && (*(int *)(piVar2[3] + 4) == 0x1f)) {
        (**(code **)(*piVar2 + 0x138))(uVar6);
      }
      (**(code **)(*(int *)(iVar5 + 8) + 4))();
      (**(code **)(piVar4[2] + 4))();
      cVar3 = FUN_000410a0(0x3f4ccccd);
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + 0x924) = 0x3fc00000;
        **(undefined4 **)(param_1 + 0x1a8) = 1;
        FUN_000124f0(0x3f000000);
      }
      return 1;
    }
  }
  return 0;
}

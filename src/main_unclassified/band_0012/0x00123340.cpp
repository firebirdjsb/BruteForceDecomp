/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C57B0CB2B1FF4DF208EF501CD5EC08AE7A97966A9A618DA0179BAD2F6F33ABF3
 * Entry: 0x00123340, Ghidra index: 3672, label: FUN_00123340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00123340(int param_1)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  if ((int)in_EAX < 0) {
    in_EAX = *(uint *)(param_1 + 0x770);
    do {
      iVar3 = *(int *)(param_1 + 0xc) + 0x33c;
      if (2 < in_EAX) {
        FUN_001297e0(iVar3);
      }
      if ((*(uint *)(iVar3 + (in_EAX >> 5) * 4) & 1 << ((byte)in_EAX & 0x1f)) != 0)
      goto LAB_0012339d;
      in_EAX = in_EAX + 1;
      if (in_EAX == 3) {
        in_EAX = 0;
      }
    } while (in_EAX != *(uint *)(param_1 + 0x770));
    in_EAX = 0xffffffff;
LAB_0012339d:
    *(uint *)(param_1 + 0x770) = in_EAX + 1;
    if (2 < (int)(in_EAX + 1)) {
      *(undefined4 *)(param_1 + 0x770) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x76c) = 0;
  if (-1 < (int)in_EAX) {
    if (*(int *)(param_1 + 0x760 + in_EAX * 4) == -1) {
      uVar2 = FUN_00130180(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x760 + in_EAX * 4) = uVar2;
    }
    if (*(int *)(param_1 + 0x760 + in_EAX * 4) != 0) {
      cVar1 = FUN_00117210();
      if (cVar1 != '\0') {
        FUN_0012e9d0();
        *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x760 + in_EAX * 4);
        return 1;
      }
    }
  }
  return 0;
}

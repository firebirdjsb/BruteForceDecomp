/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5377EF756FE568654CB903F94E03DB08A737261D60F8714FD3E49404092743F
 * Entry: 0x00385abc, Ghidra index: 13678, label: FUN_00385abc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00385abc(void)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_5;
  
  local_14 = 0;
  iVar1 = *(int *)(in_EDX + 0x10);
  local_10 = in_EDX;
  local_5 = KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(iVar1 + 0x10) & 2) == 0) {
    iVar3 = FUN_00384f75();
    if ((*(byte *)(iVar1 + 0x10) & 4) != 0) {
      *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfb;
      if (*(int *)(iVar1 + 0x1c) == iVar3) {
        KfLowerIrql();
        local_18 = 0xffffffff;
        local_1c = 0xffffd8f0;
        KeDelayExecutionThread(0,0,&local_1c);
        local_5 = KeRaiseIrqlToDpcLevel();
      }
      iVar3 = FUN_00384f75();
    }
    if (((*(byte *)(iVar1 + 0x10) & 1) == 0) || (*(char *)(iVar1 + 0x24) == *(char *)(iVar1 + 0x25))
       ) {
      iVar4 = iVar3 + 1;
      if ((*(byte *)(in_EDX + 0x18) & 1) == 0) {
        iVar4 = *(int *)(in_EDX + 0x14);
        iVar3 = iVar4 - (iVar3 + 1);
        if ((iVar3 < 0) || (0x400 < iVar3)) {
          uVar6 = 0xc0000b00;
          goto LAB_00385bbb;
        }
      }
      iVar5 = (int)((ulonglong)
                    (byte)((*(byte *)(iVar1 + 0x24) - *(char *)(iVar1 + 0x25)) +
                          *(char *)(iVar1 + 0x26)) %
                   (ulonglong)(longlong)(int)(uint)*(byte *)(iVar1 + 0x24));
      iVar3 = *(int *)(iVar1 + 0x2c);
      do {
        *(short *)(iVar3 + iVar5 * 0x40) = (short)iVar4;
        iVar3 = *(int *)(iVar1 + 0x2c);
        iVar4 = iVar4 + 1 + (*(byte *)(iVar3 + 3 + iVar5 * 0x40) & 7);
        uVar2 = (ulonglong)(iVar5 + 1) % (ulonglong)(longlong)(int)(uint)*(byte *)(iVar1 + 0x24);
        iVar5 = (int)uVar2;
      } while ((char)uVar2 != *(char *)(iVar1 + 0x26));
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) & 0xbf;
      *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 2;
      *(int *)(iVar1 + 0x28) = iVar4;
      uVar6 = local_14;
      in_EDX = local_10;
    }
    else {
      uVar6 = 0xc0001000;
    }
  }
  else {
    uVar6 = 0xc0000e00;
  }
LAB_00385bbb:
  KfLowerIrql();
  *(undefined4 *)(in_EDX + 4) = uVar6;
  FUN_00380eda(in_EDX);
  return uVar6;
}

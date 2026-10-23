/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A47FAFD75901D225B05ECBF95B701581D5478F3754F46BB32C6AB59C2FBA5838
 * Entry: 0x00200b70, Ghidra index: 7254, label: FUN_00200b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00200b70(int param_1)

{
  undefined4 *puVar1;
  int *in_EAX;
  int iVar2;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  byte bStack_4;
  
  iVar2 = *(int *)(in_EAX[3] + 4);
  if ((iVar2 != 3) && (iVar2 == 0x11)) {
    FUN_0021c3e0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    return;
  }
  if (((uint)in_EAX & -(uint)((*(byte *)((int)in_EAX + 0x26) & 0x40) != 0)) != 0) {
    if (*(int *)(in_EAX[3] + 0x14c) != 0) {
      puVar1 = (undefined4 *)in_EAX[0x18];
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          in_EAX[0x18] = 0;
        }
        in_EAX[0x18] = 0;
      }
      FUN_00222f60();
      fStack_58 = (float)in_EAX[0x14] + 1.0;
      uStack_5c = 1;
      iVar2 = (**(code **)(*in_EAX + 0x40))();
      uStack_28 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_2c = *(undefined4 *)(iVar2 + 0x28);
      uStack_30 = *(undefined4 *)(iVar2 + 0x24);
      uStack_14 = *(undefined4 *)(iVar2 + 0x28);
      uStack_10 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_18 = *(undefined4 *)(iVar2 + 0x24);
      bStack_4 = bStack_4 & 0xfc;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_44 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      FUN_00012000(1,auStack_60);
      return;
    }
    FUN_000cdbc0(in_EAX);
  }
  FUN_000db3e0(in_EAX);
  return;
}

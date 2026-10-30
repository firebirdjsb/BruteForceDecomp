/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EA7ECA73BF1B239D34508C9C9A3E496C1740DE6BFB56927149509F49AAEEAEB
 * Entry: 0x000ae7c0, Ghidra index: 2088, label: FUN_000ae7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ae7c0(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  int *piStack_60;
  int *piStack_4c;
  int aiStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char cStack_c;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) != 0) ||
     (piVar5 = (int *)(**(code **)(*param_1 + 0xec))(), piVar5 == (int *)0x0)) {
    return 0;
  }
  piStack_60 = (int *)0xae808;
  (**(code **)(*piVar5 + 0x9c))();
  uVar2 = (uint)piStack_4c >> 8;
  piStack_4c = (int *)((uint)piStack_4c & 0xffffff00);
  if ((*(int *)(param_1[3] + 4) == 3) && (param_1[0x167] == *(int *)(param_2 + 0x59c))) {
    piStack_4c = (int *)CONCAT31((int3)uVar2,1);
  }
  piStack_60 = (int *)0xae835;
  iVar6 = (**(code **)(*param_1 + 0x40))();
  piStack_60 = piStack_4c;
  cVar3 = FUN_000b0940(in_EAX,iVar6 + 0x24,aiStack_44);
  if (cVar3 == '\0') {
    if ((*(int *)(param_1[3] + 4) == 3) && (param_1[0x167] == *(int *)(param_2 + 0x59c))) {
      FUN_000ae360();
      piStack_60 = (int *)0x40400000;
      FUN_000b0ad0();
      FUN_000b0550();
      FUN_000b0550();
      fStack_30 = (float)param_1[0x43] * 0.5;
      aiStack_44[0] = 0xff;
      if ((0.0 < fStack_30) &&
         (fVar7 = (float10)FUN_000b19e0(fStack_30), (float10)fStack_30 - fVar7 < (float10)0.5)) {
        aiStack_44[0] = aiStack_44[0] >> 6;
      }
      FUN_000c86d0();
      aiStack_44[1] = 0;
      FUN_000b0f50(&piStack_60);
      FUN_000b0550();
      FUN_000aef00(aiStack_44[2]);
    }
  }
  else {
    piStack_60 = aiStack_44;
    cVar3 = FUN_000b0670();
    if (cVar3 != '\0') {
      piStack_60 = &iStack_28;
      FUN_000b0550();
      uStack_34 = aiStack_44[2];
      fStack_30 = (float)uStack_38;
      /* Original 0x000AE884 LEA EDX,[ESP+0x18] addresses the
       * existing three-DWORD vector at entry ESP-0x44, after
       * SUB ESP,0x4C and four saved guest registers. That is
       * aiStack_44, already populated by the preceding 0x000B0550
       * call and also used by 0x000B0940. 0x000AE888 pushes that
       * exact pointer; FUN_000B0770 samples float lanes 0 and 2.
       * Keep the original raw 32-bit storage; native alias/ABI
       * verification remains separate (ABI_UNVERIFIED). */
      iStack_20 = FUN_000b0770(in_EAX,(float *)aiStack_44);
      cVar3 = FUN_000ae360(in_EAX);
      if (cVar3 == '\0') {
        uStack_18 = *(undefined4 *)(in_EAX + 0xa4);
      }
      else {
        uStack_18 = *(undefined4 *)(in_EAX + 0xa0);
      }
      uStack_14 = 0x3f800000;
      fVar1 = (float)param_1[0x43] * 0.5;
      if ((fVar1 <= 0.0) ||
         (fVar7 = (float10)FUN_000b19e0(fVar1), (float10)0.5 <= (float10)fVar1 - fVar7)) {
        if ((*(byte *)((int)param_1 + 0x71) & 1) == 0) {
          FUN_000bb220(0xa3a1fbd);
        }
        bVar4 = *(byte *)((int)param_1 + 0x71) | 1;
      }
      else {
        iStack_20 = iStack_20 >> 6;
        bVar4 = *(byte *)((int)param_1 + 0x71) & 0xfe;
      }
      *(byte *)((int)param_1 + 0x71) = bVar4;
      if (cStack_c != '\0') {
        iStack_24 = 0xb4;
        iStack_28 = 0xb4;
        iStack_2c = 0xb4;
        FUN_000aef00(param_2);
        FUN_000b0f20();
        return 1;
      }
      (**(code **)(*(int *)(param_2 + 0x1b4) + 0x9c))();
      cVar3 = FUN_0004b960();
      if (cVar3 == '\0') {
        cVar3 = FUN_000a8520();
        if (cVar3 != '\0') {
          if (*(char *)((int)param_1 + 0x7a) == '\x06') {
            iStack_28 = 0x14;
            iStack_24 = 0x28;
            iStack_2c = 100;
            FUN_000b0f20();
            return 1;
          }
          iStack_28 = 0x28;
          iStack_24 = 0x5a;
          iStack_2c = 200;
          FUN_000b0f20();
          return 1;
        }
        iStack_24 = 0x46;
        iStack_28 = 0x46;
        iStack_2c = 0x46;
      }
      else {
        if (*(char *)((int)param_1 + 0x7a) == '\x06') {
          iStack_2c = 0x28;
          iStack_24 = 0x14;
          iStack_28 = 100;
        }
        else {
          iStack_2c = 0x5a;
          iStack_24 = 0x28;
          iStack_28 = 200;
        }
        if (*(int *)(param_1[3] + 4) == 3) {
          if (param_1[0x167] == *(int *)(param_2 + 0x59c)) {
            FUN_000aef00(param_2);
          }
          iVar6 = iStack_28;
          cVar3 = FUN_000c86d0();
          if (cVar3 != '\0') {
            iStack_2c = iVar6;
            iStack_24 = iVar6;
            FUN_000b0f20();
            return 1;
          }
        }
      }
      FUN_000b0f20();
      return 1;
    }
  }
  return 0;
}

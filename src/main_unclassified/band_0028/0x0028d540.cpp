/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01E792F691111EC858005AD4DE3871097596322C441EDA325977D33B08EC1706
 * Entry: 0x0028d540, Ghidra index: 9193, label: FUN_0028d540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028d540(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  undefined4 *puVar6;
  int unaff_ESI;
  float10 fVar7;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  fVar7 = (float10)FUN_0028d480(param_1);
  iVar1 = *(int *)(unaff_ESI + 0x18);
  iVar5 = in_EAX * 0xc;
  local_28 = *(undefined4 *)(iVar5 + -4 + iVar1);
  local_2c = *(undefined4 *)(iVar5 + -8 + iVar1);
  local_30 = *(undefined4 *)(iVar5 + -0xc + iVar1);
  local_34 = *(undefined4 *)(iVar5 + 8 + iVar1);
  local_38 = *(undefined4 *)(iVar5 + 4 + iVar1);
  local_3c = *(undefined4 *)(iVar5 + iVar1);
  local_40 = *(undefined4 *)(iVar5 + 0x14 + iVar1);
  local_44 = *(undefined4 *)(iVar5 + 0x10 + iVar1);
  local_48 = *(undefined4 *)(iVar5 + 0xc + iVar1);
  fVar4 = (float)in_EAX;
  puVar6 = (undefined4 *)(iVar1 + (in_EAX * 3 + 6) * 4);
  local_50 = puVar6[1];
  local_4c = puVar6[2];
  local_54 = *puVar6;
  if (in_EAX < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  FUN_0028b860(unaff_ESI,&local_30,&local_3c,&local_48,&local_54,fVar4 * *(float *)(unaff_ESI + 0xc)
               ,&local_18);
  fVar4 = (float)(in_EAX + 1);
  if (in_EAX + 1 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  FUN_0028b860(unaff_ESI,&local_30,&local_3c,&local_48,&local_54,fVar4 * *(float *)(unaff_ESI + 0xc)
               ,&local_24);
  puVar6 = (undefined4 *)
           FUN_00277d10(local_18,local_14,local_10,local_24,local_20,local_1c,(float)fVar7);
  uVar2 = puVar6[2];
  uVar3 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  return;
}

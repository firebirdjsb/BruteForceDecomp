/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BB4C8C78894327D0D54A2A0364920F72BBCCFADA96CB4C4699DBDEA220C3622
 * Entry: 0x0028d8e0, Ghidra index: 9195, label: FUN_0028d8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028d8e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int in_EAX;
  undefined4 *puVar5;
  int unaff_ESI;
  float10 fVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  undefined1 local_10 [16];
  
  if (*(char *)(unaff_ESI + 0x5d) != '\0') {
    fVar6 = (float10)FUN_0028d480(param_1);
    fVar4 = (float)in_EAX;
    puVar5 = (undefined4 *)(in_EAX * 0x10 + *(int *)(unaff_ESI + 0x28));
    local_54 = puVar5[-1];
    local_58 = puVar5[-2];
    local_5c = puVar5[-3];
    local_60 = puVar5[-4];
    local_44 = puVar5[3];
    local_48 = puVar5[2];
    local_4c = puVar5[1];
    local_50 = *puVar5;
    local_34 = puVar5[7];
    local_38 = puVar5[6];
    local_3c = puVar5[5];
    local_40 = puVar5[4];
    puVar5 = (undefined4 *)((in_EAX + 2) * 0x10 + *(int *)(unaff_ESI + 0x28));
    local_64 = puVar5[3];
    local_68 = puVar5[2];
    local_6c = puVar5[1];
    local_70 = *puVar5;
    if (in_EAX < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    puVar5 = (undefined4 *)FUN_0028e5f0(local_10,&local_70,fVar4 * *(float *)(unaff_ESI + 0xc));
    local_14 = puVar5[3];
    local_18 = puVar5[2];
    local_1c = puVar5[1];
    local_20 = *puVar5;
    fVar4 = (float)(in_EAX + 1);
    if (in_EAX + 1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    puVar5 = (undefined4 *)FUN_0028e5f0(local_10,&local_70,fVar4 * *(float *)(unaff_ESI + 0xc));
    local_24 = puVar5[3];
    local_28 = puVar5[2];
    local_2c = puVar5[1];
    local_30 = *puVar5;
    puVar5 = (undefined4 *)FUN_00233b10(local_10,&local_20,&local_30,(float)fVar6);
    uVar1 = puVar5[3];
    uVar2 = puVar5[2];
    uVar3 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = uVar2;
    param_2[3] = uVar1;
  }
  return;
}

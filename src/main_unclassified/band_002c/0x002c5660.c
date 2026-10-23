/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C65C0BB414E868C24D9BCC97FEF7810A7DE6204FB08D752C3E15F7F97E15DBD3
 * Entry: 0x002c5660, Ghidra index: 10066, label: FUN_002c5660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c5660(float *param_1,float param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float fStack_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  if ((*param_3 & 0xc) == 0) {
    param_1[0x19] = (float)param_3;
    param_1[0x18] = param_2;
  }
  else {
    param_1[0x18] = (float)param_3;
    param_1[0x19] = param_2;
  }
  uVar1 = *(undefined8 *)((int)param_1[0x19] + 0xb0);
  uVar2 = *(undefined8 *)((int)param_1[0x18] + 0xb0);
  *param_1 = *(float *)((int)param_1[0x19] + 0xac) - *(float *)((int)param_1[0x18] + 0xac);
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  fVar4 = (float10)FUN_002b6500(param_1);
  param_1[0xc] = (float)fVar4;
  local_14 = 0;
  fVar3 = param_1[0x18];
  local_1c = *(float *)((int)fVar3 + 0x110) * *(float *)((int)fVar3 + 0xa0) +
             *(float *)((int)fVar3 + 0x114) * *(float *)((int)fVar3 + 0xa4) +
             *(float *)((int)fVar3 + 0x10c) * *(float *)((int)fVar3 + 0x9c);
  fStack_18 = *(float *)((int)fVar3 + 0x120) * *(float *)((int)fVar3 + 0xa0) +
              *(float *)((int)fVar3 + 0x124) * *(float *)((int)fVar3 + 0xa4) +
              *(float *)((int)fVar3 + 0x11c) * *(float *)((int)fVar3 + 0x9c);
  local_4 = 0;
  local_20 = *(float *)((int)fVar3 + 0x9c) * *(float *)((int)fVar3 + 0xfc) +
             *(float *)((int)fVar3 + 0x100) * *(float *)((int)fVar3 + 0xa0) +
             *(float *)((int)fVar3 + 0x104) * *(float *)((int)fVar3 + 0xa4);
  fVar3 = param_1[0x19];
  local_c = *(float *)((int)fVar3 + 0x110) * *(float *)((int)fVar3 + 0xa0) +
            *(float *)((int)fVar3 + 0x114) * *(float *)((int)fVar3 + 0xa4) +
            *(float *)((int)fVar3 + 0x10c) * *(float *)((int)fVar3 + 0x9c);
  fStack_8 = *(float *)((int)fVar3 + 0x120) * *(float *)((int)fVar3 + 0xa0) +
             *(float *)((int)fVar3 + 0x124) * *(float *)((int)fVar3 + 0xa4) +
             *(float *)((int)fVar3 + 0x11c) * *(float *)((int)fVar3 + 0x9c);
  local_24 = 0;
  local_10 = *(float *)((int)fVar3 + 0xfc) * *(float *)((int)fVar3 + 0x9c) +
             *(float *)((int)fVar3 + 0x100) * *(float *)((int)fVar3 + 0xa0) +
             *(float *)((int)fVar3 + 0x104) * *(float *)((int)fVar3 + 0xa4);
  local_30 = local_10 - local_20;
  local_2c = local_c - local_1c;
  fStack_28 = fStack_8 - fStack_18;
  fVar4 = (float10)FUN_002b6500(&local_30);
  param_1[0x11] = (float)fVar4;
  FUN_002b73d0((int)param_1[0x18] + 0xfc,&local_30,param_1 + 4);
  local_30 = local_30 * -1.0;
  local_2c = local_2c * -1.0;
  fStack_28 = fStack_28 * -1.0;
  FUN_002b73d0((int)param_1[0x19] + 0xfc,&local_30,param_1 + 8);
  FUN_002c55c0();
  FUN_002c55c0();
  param_1[0xe] = *(float *)((int)param_1[0x19] + 0x20);
  param_1[0x10] = *(float *)((int)param_1[0x19] + 0x40);
  if ((*(byte *)param_1[0x18] & 0xc) != 0) {
    param_1[0xd] = param_1[0xe] * 10000.0;
    param_1[0xf] = param_1[0x10] * 0.0001;
    param_1[0x12] = param_1[0x13] * 10000.0;
    param_1[0x14] = param_1[0x15] * 0.0001;
    return;
  }
  param_1[0xd] = *(float *)((byte *)param_1[0x18] + 0x20);
  param_1[0xf] = *(float *)((int)param_1[0x18] + 0x40);
  return;
}

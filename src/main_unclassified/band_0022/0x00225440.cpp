/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51DE8B839B22E33FE033D0A9577FFB9FAF720362E048F38AE4D44F2B9C20F5B2
 * Entry: 0x00225440, Ghidra index: 7630, label: FUN_00225440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394848;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00225440(undefined4 *param_1,byte *param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float local_194;
  float local_190;
  char local_189;
  float local_188;
  float local_184;
  float fStack_180;
  float local_17c;
  float local_178;
  float fStack_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 local_150;
  int local_14c [10];
  uint local_124;
  undefined **local_120 [65];
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  if (*(float *)(param_2 + 0x28) < 0.0 != (*(float *)(param_2 + 0x28) == 0.0)) {
    fVar1 = *(float *)(param_2 + 0x2c);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *param_2 = *param_2 | 4;
      return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                      (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                                      (ushort)(fVar1 == 0.0) << 0xe) >> 8),1);
    }
  }
  param_2[3] = param_2[3] - 1;
  local_16c = param_3 * *(float *)(param_2 + 0x1c);
  if (param_2[3] != 0) {
    *(float *)(param_2 + 4) = local_16c * *(float *)(param_2 + 0x10) + *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) =
         local_16c * (float)*(undefined8 *)(param_2 + 0x14) + *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) =
         local_16c * (float)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20) +
         *(float *)(param_2 + 0xc);
    return (uint)(param_2 + 4) & 0xffffff00;
  }
  param_2[3] = 3;
  pfVar5 = (float *)(param_2 + 0x70);
  fStack_180 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x78);
  local_184 = *(float *)(param_2 + 8) - *(float *)(param_2 + 0x74);
  local_190 = SQRT(local_184 * local_184 +
                   fStack_180 * fStack_180 +
                   (*(float *)(param_2 + 4) - *pfVar5) * (*(float *)(param_2 + 4) - *pfVar5));
  local_194 = local_190 + local_16c;
  piVar8 = local_14c;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_8 = -1;
  local_10 = 0;
  local_1c = 0;
  local_18 = 1;
  local_c = 0;
  local_120[0] = &PTR_LAB_00394848;
  local_14 = 0xfffffff8;
  local_4 = -1;
  if ((*(int *)(param_2 + 0x48) != 0) &&
     (local_8 = *(int *)(*(int *)(param_2 + 0x48) + 0x6c), *(int *)(local_8 + 0x10) != 0)) {
    local_8 = *(int *)(local_8 + 8);
  }
  iVar7 = *(int *)(param_2 + 0x40);
  if (iVar7 != 0) {
    param_2[0x40] = 0;
    param_2[0x41] = 0;
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    local_4 = iVar7;
  }
  iVar7 = FUN_000ddd10(*param_1,&local_194,&local_188,&local_168,pfVar5,param_2 + 0x10,local_120,
                       local_194,0);
  if (iVar7 == 0) {
    *(float *)(param_2 + 4) = local_16c * *(float *)(param_2 + 0x10) + *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) =
         local_16c * (float)*(undefined8 *)(param_2 + 0x14) + *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) =
         local_16c * (float)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20) +
         *(float *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 4);
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 8);
    return *(uint *)(param_2 + 0xc) & 0xffffff00;
  }
  local_189 = '\x01';
  local_154 = SQRT((*(float *)(param_2 + 0x74) - local_184) *
                   (*(float *)(param_2 + 0x74) - local_184) +
                   (*(float *)(param_2 + 0x78) - fStack_180) *
                   (*(float *)(param_2 + 0x78) - fStack_180) +
                   (*pfVar5 - local_188) * (*pfVar5 - local_188)) * 0.001;
  local_17c = local_154 * *(float *)(param_2 + 0x10);
  local_178 = local_154 * (float)*(undefined8 *)(param_2 + 0x14);
  local_154 = local_154 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  local_188 = local_188 - local_17c;
  local_184 = local_184 - local_178;
  fStack_180 = fStack_180 - local_154;
  *(float *)(param_2 + 0xc) = fStack_180;
  *(float *)(param_2 + 8) = local_184;
  *(float *)(param_2 + 4) = local_188;
  local_190 = *(float *)(param_2 + 0xc);
  local_194 = *(float *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 4);
  *(float *)(param_2 + 0x74) = local_194;
  *(float *)(param_2 + 0x78) = local_190;
  if ((*param_2 & 0x20) != 0) {
    if (((param_2[1] == 0) || (local_14c[1] == 0)) ||
       (*(int *)(*(int *)(local_14c[1] + 0xc) + 4) == 3)) {
      if (((param_2[2] == 0) || (local_14c[1] == 0)) ||
         (*(int *)(*(int *)(local_14c[1] + 0xc) + 4) != 3)) goto LAB_0022588d;
      param_2[2] = param_2[2] - 1;
    }
    else {
      param_2[1] = param_2[1] - 1;
    }
    iVar7 = *(int *)(local_14c[1] + 0x6c);
    if (*(int *)(iVar7 + 0x10) != 0) {
      iVar7 = *(int *)(iVar7 + 8);
    }
    *(int *)(param_2 + 0x40) = iVar7;
    local_189 = '\0';
  }
LAB_0022588d:
  pfVar5 = (float *)0x0;
  if (local_14c[2] == 0) goto LAB_00225c07;
  fStack_174 = local_154;
  pfVar5 = (float *)FUN_00224320(param_2,local_14c[2],&local_188,&local_168,local_124 >> 2 & 0x1f,1)
  ;
  uVar6 = local_14c[1];
  if ((((char)pfVar5 != '\0') && (local_14c[1] != 0)) &&
     (pfVar5 = (float *)-(uint)((*(byte *)(local_14c[1] + 0x26) & 0x40) != 0),
     (local_14c[1] & (uint)pfVar5) != 0)) {
    if (((((*param_2 & 0x20) == 0) || (local_189 != '\0')) &&
        (*(int *)(*(int *)(local_14c[1] + 0xc) + 4) != 3)) &&
       (cVar4 = FUN_001546b0(), cVar4 == '\0')) {
      local_16c = *(float *)(param_2 + 0x1c);
      local_170 = 0;
      local_150 = 0;
      fStack_174 = *(float *)(param_2 + 0xc);
      local_178 = *(float *)(param_2 + 8);
      local_17c = *(float *)(param_2 + 4);
      local_154 = local_16c * *(float *)(param_2 + 0x18);
      local_158 = local_16c * *(float *)(param_2 + 0x14);
      local_15c = local_16c * *(float *)(param_2 + 0x10);
      FUN_002b3bc0(&local_17c,&local_15c);
      uVar6 = local_14c[1];
    }
    pfVar5 = *(float **)(uVar6 + 0xc);
    if (((pfVar5[1] == 4.2039e-45) && (pfVar5 = *(float **)(param_2 + 0x6c), pfVar5 != (float *)0x0)
        ) && (((*(byte *)(uVar6 + 0x70) & 1) == 0 &&
              (pfVar5 = (float *)(**(code **)(*(int *)(uVar6 + 0x1b4) + 0xc4))
                                           (*(undefined4 *)((int)pfVar5[10] + 0xc)),
              uVar6 = local_14c[1], (char)pfVar5 == '\0')))) {
      if (*(int *)(param_2 + 0x48) == 0) {
        local_194 = 0.0;
      }
      pfVar5 = (float *)FUN_0008df50(0x3f800000);
      uVar6 = local_14c[1];
    }
  }
  if (((local_14c[2] == 0) || ((*param_2 & 0x20) != 0)) ||
     ((bVar2 = param_2[2], bVar2 == 0 && (param_2[1] == 0)))) goto LAB_00225c07;
  if ((local_14c[0] == 2) && (pfVar5 = *(float **)(uVar6 + 0xc), pfVar5[1] != 4.2039e-45)) {
    bVar3 = param_2[1];
    pfVar5 = (float *)CONCAT31((int3)((uint)pfVar5 >> 8),bVar3);
    if (bVar3 == 0) goto LAB_00225b0a;
    param_2[1] = bVar3 - 1;
    local_188 = -*(float *)(param_2 + 0x10);
    local_17c = local_168 * local_188 +
                fStack_164 * -*(float *)(param_2 + 0x14) + fStack_160 * -*(float *)(param_2 + 0x18);
    local_17c = local_17c + local_17c;
    *(float *)(param_2 + 0x14) = local_17c * fStack_164 - -*(float *)(param_2 + 0x14);
    *(float *)(param_2 + 0x18) = local_17c * fStack_160 - -*(float *)(param_2 + 0x18);
  }
  else {
LAB_00225b0a:
    if (bVar2 == 0) goto LAB_00225c07;
    param_2[2] = bVar2 - 1;
    local_188 = -*(float *)(param_2 + 0x10);
    local_17c = local_188 * local_168 +
                -*(float *)(param_2 + 0x14) * fStack_164 + -*(float *)(param_2 + 0x18) * fStack_160;
    local_17c = local_17c + local_17c;
    *(float *)(param_2 + 0x14) = local_17c * fStack_164 - -*(float *)(param_2 + 0x14);
    *(float *)(param_2 + 0x18) = local_17c * fStack_160 - -*(float *)(param_2 + 0x18);
  }
  local_17c = local_17c * local_168;
  pfVar5 = (float *)(param_2 + 0x10);
  local_189 = '\0';
  *pfVar5 = local_17c - local_188;
LAB_00225c07:
  bVar2 = *param_2;
  if (((bVar2 & 4) == 0) && (local_189 == '\0')) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  uVar6 = CONCAT31((int3)((uint)pfVar5 >> 8),cVar4 << 2 ^ bVar2) & 0xffffff04;
  *param_2 = (byte)uVar6 ^ bVar2;
  return CONCAT31((int3)(uVar6 >> 8),local_189);
}

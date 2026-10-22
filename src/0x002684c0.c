/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 940136815F743EFE95FDE05A3EF6EEEC853D185892B1088386A10A4D32BA5310
 * Entry: 0x002684c0, Ghidra index: 8743, label: FUN_002684c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002684c0(undefined4 param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int in_EAX;
  float *pfVar4;
  float in_ECX;
  float *pfVar5;
  int local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_74;
  float local_64;
  float local_58;
  float local_50;
  
  FUN_0003d6c0(&local_118,(int)in_ECX + 0x14,(int)in_ECX + 0x38);
  if (0 < in_EAX) {
    pfVar5 = (float *)(param_2 + 0x10);
    local_138 = in_EAX;
    do {
      fVar2 = pfVar5[-4];
      if ((in_ECX != 0.0) && (in_ECX != -NAN)) {
        iVar3 = *(int *)((int)fVar2 + 0x10);
        pfVar4 = (float *)(iVar3 + 0x20);
        pfVar1 = pfVar5 + -2;
        local_134 = *(float *)(iVar3 + 0x1c) * pfVar5[-3] -
                    (*pfVar4 * *pfVar1 +
                    *(float *)(iVar3 + 0x24) * pfVar5[-1] + *(float *)(iVar3 + 0x28) * *pfVar5);
        local_b8 = *pfVar1 * *(float *)(iVar3 + 0x24) - pfVar5[-1] * *pfVar4;
        local_bc = *pfVar5 * *pfVar4 - *(float *)(iVar3 + 0x28) * *pfVar1;
        local_a0 = pfVar5[-3];
        local_c0 = *(float *)(iVar3 + 0x28) * pfVar5[-1] - *pfVar5 * *(float *)(iVar3 + 0x24);
        local_94 = local_a0 * *pfVar4;
        local_9c = local_a0 * (float)*(undefined8 *)(iVar3 + 0x24);
        local_c4 = local_a0 * (float)((ulonglong)*(undefined8 *)(iVar3 + 0x24) >> 0x20);
        local_98 = *(float *)(iVar3 + 0x1c);
        local_124 = local_98 * *pfVar1;
        local_80 = local_98 * (float)*(undefined8 *)(pfVar5 + -1);
        local_7c = local_98 * (float)((ulonglong)*(undefined8 *)(pfVar5 + -1) >> 0x20);
        local_120 = CONCAT44(local_7c,local_80);
        local_7c = local_c4 + local_7c;
        local_80 = local_9c + local_80;
        local_128 = local_b8 + local_7c;
        local_12c = local_bc + local_80;
        local_130 = local_94 + local_124 + local_c0;
        local_a4 = local_12c;
        local_90 = local_9c;
        local_8c = local_c4;
        local_50 = local_12c;
        FUN_002333b0(&local_134);
        pfVar4 = (float *)FUN_002334b0();
        local_58 = fStack_fc * *(float *)(iVar3 + 8) +
                   local_f8 * *(float *)(iVar3 + 0xc) + fStack_100 * *(float *)(iVar3 + 4);
        local_74 = pfVar4[5] * *(float *)(iVar3 + 0x18) +
                   pfVar4[4] * *(float *)(iVar3 + 0x14) + pfVar4[3] * *(float *)(iVar3 + 0x10);
        local_64 = pfVar4[8] * *(float *)(iVar3 + 0x18) +
                   pfVar4[7] * *(float *)(iVar3 + 0x14) + pfVar4[6] * *(float *)(iVar3 + 0x10);
        local_f4 = (local_f4 +
                   fStack_114 * *(float *)(iVar3 + 8) +
                   fStack_110 * *(float *)(iVar3 + 0xc) + local_118 * *(float *)(iVar3 + 4)) -
                   (pfVar4[2] * *(float *)(iVar3 + 0x18) +
                   pfVar4[1] * *(float *)(iVar3 + 0x14) + *pfVar4 * *(float *)(iVar3 + 0x10));
        local_f0 = (local_f0 +
                   local_108 * *(float *)(iVar3 + 8) +
                   fStack_104 * *(float *)(iVar3 + 0xc) + fStack_10c * *(float *)(iVar3 + 4)) -
                   local_74;
        local_ec = (local_ec + local_58) - local_64;
        local_118 = *pfVar4;
        fStack_114 = pfVar4[1];
        fStack_110 = pfVar4[2];
        fStack_10c = pfVar4[3];
        local_108 = pfVar4[4];
        fStack_104 = pfVar4[5];
        fStack_100 = pfVar4[6];
        fStack_fc = pfVar4[7];
        local_f8 = pfVar4[8];
        local_b4 = local_ec;
        local_b0 = local_f4;
        local_ac = local_f0;
        local_a8 = local_ec;
        local_88 = local_f0;
        FUN_0003d730(param_3,&local_118);
      }
      pfVar5 = pfVar5 + 0xf;
      param_3 = param_3 + 0x30;
      local_138 = local_138 + -1;
      in_ECX = fVar2;
    } while (local_138 != 0);
  }
  return;
}

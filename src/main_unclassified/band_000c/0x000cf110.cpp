/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B4849D3304AAB5D4F5540BD778304F7DD10A80A0C2D3C7D39CE27EB7291240D
 * Entry: 0x000cf110, Ghidra index: 2559, label: FUN_000cf110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_000a3d50(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern undefined4 FUN_000ce120(void);
extern undefined4 FUN_000ce130(void);
extern void FUN_0001fe40(undefined4 param_1,undefined4 param_2,int param_3,code *param_4);
extern float10 FUN_000661c0(float param_1);
extern unkbyte10 FUN_0006eee0(float param_1);
extern void FUN_00039510(void);
extern void FUN_000cf0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_002185a0(void);
extern void FUN_000cf600(void);

extern void FUN_000a3d50(void);
void FUN_000cf110(int param_1,int *param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  int local_9c;
  int local_98;
  int local_94;
  float local_8c [15];
  float local_50 [4];
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
  float local_10;
  float local_c;
  float local_8;
  
  in_ECX[0x201] = 0;
  if (param_1 != 0) {
    FUN_000ce120();
    uVar2 = FUN_000ce130();
    *in_ECX = uVar2;
    FUN_0001fe40(local_50,0xc,5,FUN_000a3d50);
    pfVar3 = (float *)(**(code **)(param_2[0x12] + 0xc))();
    local_50[2] = pfVar3[2];
    local_50[1] = pfVar3[1];
    local_50[0] = *pfVar3;
    FUN_000a3d50();
    fVar5 = (float10)(**(code **)(param_2[0x12] + 0x28))();
    local_8 = (float)fVar5;
    fVar5 = (float10)(**(code **)(param_2[0x12] + 0x20))();
    fVar5 = (float10)FUN_000661c0((float)fVar5);
    fVar5 = (float10)FUN_0006eee0((float)fVar5);
    local_c = (float)(fVar5 * (float10)local_8);
    fVar5 = (float10)(**(code **)(param_2[0x12] + 0x2c))();
    local_10 = (float)(fVar5 * (float10)local_c);
    local_8 = -local_8;
    (**(code **)(*param_2 + 0x40))();
    puVar4 = (undefined4 *)FUN_00039510();
    local_3c = puVar4[2];
    local_40 = puVar4[1];
    local_50[3] = (float)*puVar4;
    local_10 = -local_10;
    puVar4 = (undefined4 *)FUN_00039510();
    local_30 = puVar4[2];
    local_34 = puVar4[1];
    local_38 = *puVar4;
    local_c = -local_c;
    puVar4 = (undefined4 *)FUN_00039510();
    local_24 = puVar4[2];
    local_28 = puVar4[1];
    local_2c = *puVar4;
    local_10 = -local_10;
    puVar4 = (undefined4 *)FUN_00039510();
    local_18 = puVar4[2];
    local_1c = puVar4[1];
    local_20 = *puVar4;
    FUN_0001fe40(local_8c,0xc,5,FUN_000a3d50);
    local_94 = 1;
    local_8c[0] = local_50[0];
    local_8c[1] = 0.0;
    local_8c[2] = local_50[2];
    for (local_98 = 1; local_98 < 5; local_98 = local_98 + 1) {
      local_9c = 0;
      while ((local_9c < local_98 &&
             (1.4210855e-14 <=
              (local_50[local_98 * 3 + 2] - local_50[local_9c * 3 + 2]) *
              (local_50[local_98 * 3 + 2] - local_50[local_9c * 3 + 2]) +
              (local_50[local_98 * 3] - local_50[local_9c * 3]) *
              (local_50[local_98 * 3] - local_50[local_9c * 3])))) {
        local_9c = local_9c + 1;
      }
      if (local_98 == local_9c) {
        fVar1 = local_50[local_98 * 3 + 2];
        local_8c[local_94 * 3] = local_50[local_98 * 3];
        local_8c[local_94 * 3 + 1] = 0.0;
        local_8c[local_94 * 3 + 2] = fVar1;
        local_94 = local_94 + 1;
      }
    }
    FUN_000cf0c0(param_1,local_8c,in_ECX + 1,in_ECX + 0x201);
    if (param_3 != '\0') {
      puVar4 = (undefined4 *)FUN_002185a0();
      FUN_000cf600(*puVar4);
    }
  }
  return;
}

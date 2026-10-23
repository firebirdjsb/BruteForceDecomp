/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26FEDA5372A3CCFCD80E8C11B77C35D7C19ACDF96A5CAFF129E62AAB727AFD17
 * Entry: 0x002d56e0, Ghidra index: 10224, label: FUN_002d56e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d56e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *extraout_EDX;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  unkbyte10 Var7;
  float fVar8;
  int *local_48;
  undefined4 local_40;
  int local_28;
  float local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_002d4e50(&local_28);
  local_48 = &local_28;
  local_40 = 0;
  iVar4 = 0;
  pfVar3 = local_24;
  do {
    if (*(int *)(*local_48 + 8) != 0) {
      local_4 = 0;
      iVar2 = *(int *)(*(int *)(iVar4 + 0x10 + param_2) + 0x94);
      local_10 = *(undefined4 *)(iVar2 + 0xfc);
      local_c = *(undefined4 *)(iVar2 + 0x10c);
      local_8 = *(undefined4 *)(iVar2 + 0x11c);
      local_14 = 0;
      FUN_002b6640(local_24 + 1,&local_10,*(undefined4 *)(param_2 + 0x40));
      fVar8 = SQRT(local_24[2] * local_24[2] + local_24[3] * local_24[3] + local_24[1] * local_24[1]
                  );
      fVar5 = (float10)(**(code **)(*extraout_EDX + 4))();
      fVar6 = (float10)(*(code *)**(undefined4 **)*pfVar3)();
      fVar1 = *(float *)(param_2 + 0x44);
      if (1e-10 <= fVar8) {
        local_40 = 1;
        FUN_002b65a0(local_24 + 1);
        *(float *)(param_1 + 0xdc) = local_24[1];
        *(float *)(param_1 + 0xe0) = local_24[2];
        *(float *)(param_1 + 0xe4) = local_24[3];
        fVar5 = ((float10)SQRT(*(float *)(param_1 + 0xfc)) + (float10)1.0) *
                (float10)(float)((float10)fVar1 -
                                ((float10)fVar1 - fVar6 * (float10)(float)fVar5) * (float10)fVar8);
        Var7 = fpatan(fVar5,(float10)1);
        fVar6 = (float10)fcos(Var7);
        *(float *)(param_1 + 0xd8) = (float)(fVar6 * fVar5);
      }
    }
    iVar4 = iVar4 + 0x14;
    local_48 = local_48 + 1;
    pfVar3 = pfVar3 + -1;
  } while (iVar4 < 0x28);
  *(undefined4 *)(param_1 + 0xd4) = local_40;
  return;
}

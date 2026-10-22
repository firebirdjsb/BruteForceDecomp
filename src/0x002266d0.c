/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E7577A03CABAFD110F7CE97F416EADAC315C3E519D67F00EC62C04B9BFAD86E
 * Entry: 0x002266d0, Ghidra index: 7649, label: FUN_002266d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00406f94;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002266d0(int *param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  int *unaff_retaddr;
  int iStack_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  (**(code **)(*param_1 + 0xc4))(&local_6c);
  if (iStack_70 != 0) {
    pfVar2 = (float *)(**(code **)(*unaff_retaddr + 0x54))();
    fStack_5c = pfVar2[1];
    fStack_58 = pfVar2[2];
    fStack_60 = *pfVar2;
    fStack_64 = fStack_58 * param_3[2] + fStack_5c * param_3[1] + fStack_60 * *param_3;
    fStack_50 = -param_3[1];
    fStack_54 = -*param_3;
    fStack_44 = fStack_64 * fStack_54;
    fStack_4c = fStack_64 * -param_3[2];
    local_6c = fStack_4c + fStack_58;
    uStack_2c = 0;
    fStack_68 = fStack_64 * fStack_50 + fStack_5c;
    uStack_40 = CONCAT44(local_6c,fStack_68);
    fStack_38 = -(_DAT_00406f94 * (fStack_44 + fStack_60));
    fStack_34 = -(_DAT_00406f94 * fStack_68);
    fStack_30 = -(_DAT_00406f94 * local_6c);
    FUN_002b3b20(iStack_70,&fStack_38);
    if (0.01 < ABS(param_4 - fStack_64)) {
      fStack_64 = (param_4 - fStack_64) * 0.15;
      fStack_54 = fStack_64 * *param_3;
      fStack_50 = fStack_64 * (float)*(undefined8 *)(param_3 + 1);
      fStack_64 = fStack_64 * (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
      uStack_40 = CONCAT44(fStack_64,fStack_50);
      uStack_48 = 0;
      fStack_4c = fStack_64;
      fStack_44 = fStack_54;
      FUN_002b3b20(*(undefined4 *)(*(int *)unaff_retaddr[0x5e] + 4),&fStack_54);
    }
    fVar1 = fStack_60 * fStack_60 + fStack_58 * fStack_58 + fStack_5c * fStack_5c;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / SQRT(fVar1);
      fStack_60 = fStack_60 * fVar1;
      fStack_5c = fStack_5c * fVar1;
      fStack_58 = fStack_58 * fVar1;
      FUN_0001d0c0();
      (**(code **)(*unaff_retaddr + 0x3c))(auStack_28);
      return;
    }
  }
  return;
}

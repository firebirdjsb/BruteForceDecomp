/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F595C5B3248051C6D85B13A1137BF99F124FA4543F1804C192F519108EE5BAA
 * Entry: 0x0021ed70, Ghidra index: 7556, label: FUN_0021ed70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0021ed70(int param_1,float *param_2,int param_3,int param_4,float param_5,float param_6,
                    float *param_7,float *param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float10 fVar5;
  float local_60;
  int local_5c;
  int local_58;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_1c;
  float local_10;
  float local_c;
  
  local_60 = -3.4028235e+38;
  local_5c = 0;
  if (0 < param_4) {
    do {
      local_58 = 0;
      if (0 < param_3) {
        do {
          fVar2 = (float)local_5c * param_6;
          local_3c = fVar2 * *param_8;
          local_1c = fVar2 * (float)((ulonglong)*(undefined8 *)(param_8 + 1) >> 0x20);
          local_38 = CONCAT44(local_1c,fVar2 * (float)*(undefined8 *)(param_8 + 1));
          fVar2 = (float)local_58 * param_5;
          local_30 = fVar2 * *param_7;
          local_10 = fVar2 * (float)((ulonglong)*(undefined8 *)(param_7 + 1) >> 0x20);
          local_2c = CONCAT44(local_10,fVar2 * (float)*(undefined8 *)(param_7 + 1));
          local_10 = local_10 + param_2[2];
          fVar3 = local_1c + local_10;
          iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xa40);
          fVar2 = local_3c + local_30 + *param_2;
          if (iVar1 == 0) {
            fVar5 = (float10)0.0;
          }
          else {
            local_40 = -3.4028235e+38;
            local_24 = local_3c;
            local_c = fVar2;
            cVar4 = FUN_001f4740(iVar1,&local_44,&local_48,fVar2,fVar3);
            if ((cVar4 == '\0') ||
               ((**(int **)(iVar1 + 0x20) * local_48 + local_44) * 0x40 + *(int *)(iVar1 + 0x18) ==
                0)) {
              fVar5 = (float10)local_40;
            }
            else {
              fVar5 = (float10)FUN_001f3aa0(fVar2,fVar3);
            }
          }
          if ((float10)local_60 < fVar5) {
            local_60 = (float)fVar5;
          }
          local_58 = local_58 + 1;
        } while (local_58 < param_3);
      }
      local_5c = local_5c + 1;
    } while (local_5c < param_4);
  }
  return (float10)local_60;
}

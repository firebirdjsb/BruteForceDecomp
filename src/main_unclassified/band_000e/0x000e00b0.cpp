/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39E84F25583A623C3D7B27B21263323E51A3E9EDD97D026622ED2E7C05F03C8F
 * Entry: 0x000e00b0, Ghidra index: 2741, label: FUN_000e00b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000e1a20(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
void FUN_000e00b0(int param_1,uint param_2,float param_3,undefined4 param_4,float param_5)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  uint uVar6;
  int iVar7;
  int in_ECX;
  undefined4 *puVar8;
  float *in_EDX;
  undefined4 local_30;
  uint local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  if ((*(byte *)(param_2 + 0x7d8) & 3) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)*puVar1;
    }
    for (; puVar8 != puVar1; puVar8 = (undefined4 *)*puVar8) {
      if (puVar8[3] == param_2) {
        if ((float)puVar8[0xb] != 0.0) {
          if (puVar8[4] == in_ECX) {
            fVar5 = param_3 / (param_3 + (float)puVar8[0xb]);
            fVar3 = in_EAX[2];
            fVar4 = *in_EAX;
            puVar8[6] = (in_EAX[1] - (float)puVar8[6]) * fVar5 + (float)puVar8[6];
            puVar8[5] = (fVar4 - (float)puVar8[5]) * fVar5 + (float)puVar8[5];
            puVar8[7] = (fVar3 - (float)puVar8[7]) * fVar5 + (float)puVar8[7];
            fVar3 = in_EDX[2];
            fVar4 = in_EDX[1];
            puVar8[8] = (*in_EDX - (float)puVar8[8]) * fVar5 + (float)puVar8[8];
            puVar8[10] = (fVar3 - (float)puVar8[10]) * fVar5 + (float)puVar8[10];
            puVar8[9] = (fVar4 - (float)puVar8[9]) * fVar5 + (float)puVar8[9];
            if (param_3 <= (float)puVar8[0xb]) {
              param_4 = puVar8[0xc];
            }
            puVar8[0xc] = param_4;
            puVar8[0xb] = param_3 + (float)puVar8[0xb];
            puVar8[0xd] = param_5 + (float)puVar8[0xd];
            goto LAB_000e01fd;
          }
          if (((float)puVar8[0xb] * 5.0 < param_3 == ((float)puVar8[0xb] * 5.0 == param_3)) ||
             ((float)puVar8[0xd] * 5.0 < param_5 == ((float)puVar8[0xd] * 5.0 == param_5)))
          goto LAB_000e0134;
        }
        puVar8[4] = in_ECX;
        fVar3 = in_EAX[2];
        fVar4 = in_EAX[1];
        puVar8[5] = *in_EAX;
        puVar8[6] = fVar4;
        puVar8[7] = fVar3;
        fVar3 = in_EDX[2];
        fVar4 = in_EDX[1];
        puVar8[8] = *in_EDX;
        puVar8[9] = fVar4;
        puVar8[10] = fVar3;
        puVar8[0xb] = param_3;
        puVar8[0xd] = param_5;
        puVar8[0xc] = param_4;
        goto LAB_000e01fd;
      }
LAB_000e0134:
    }
  }
  local_2c = param_2;
  if ((param_2 & 1) == 0) {
    uVar6 = param_2 * 0x19660d + 0x3c6ef35f >> 0x15;
    local_30 = *(undefined4 *)(&DAT_00414da0 + uVar6 * 4);
    *(undefined4 **)(&DAT_00414da0 + uVar6 * 4) = &local_30;
  }
  local_1c = in_EAX[2];
  local_c = param_3;
  local_20 = in_EAX[1];
  local_4 = param_5;
  local_24 = *in_EAX;
  iVar2 = *(int *)(param_1 + 4);
  local_10 = in_EDX[2];
  local_14 = in_EDX[1];
  local_18 = *in_EDX;
  local_8 = param_4;
  iVar7 = FUN_000e1990(param_1,iVar2,*(undefined4 *)(iVar2 + 4),&local_30);
  FUN_000e1a20();
  *(int *)(iVar2 + 4) = iVar7;
  **(int **)(iVar7 + 4) = iVar7;
  if (local_2c != 0) {
    FUN_0008f6e0();
  }
LAB_000e01fd:
  if ((*(byte *)(param_2 + 0x7d8) & 3) == 0) {
    *(byte *)(param_2 + 0x7d8) = *(byte *)(param_2 + 0x7d8) | 2;
  }
  return;
}

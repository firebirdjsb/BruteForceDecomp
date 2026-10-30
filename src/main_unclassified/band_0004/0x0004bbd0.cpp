/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05F41B5DAEB3EB86B802CAC336D93FC2065FAA956A53918F4E36CFA3A7B61611
 * Entry: 0x0004bbd0, Ghidra index: 625, label: FUN_0004bbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0004e8f0(void);
extern uint FUN_0004ba00(int param_1,float *param_2,float *param_3,float param_4,undefined4 *param_5);
extern void FUN_00058b60(void);
extern void FUN_00038320(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_003bc930;
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f68;
uint FUN_0004bbd0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  undefined4 *in_EAX;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float fStack_20;
  float fStack_1c;
  undefined **local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  uint local_4;
  
  if (in_EAX[3] == 0) {
    return 0;
  }
  FUN_0004e8f0();
  uVar10 = in_EAX[3];
  if ((*(byte *)(in_EAX + 4) & 1) == 0) {
    puVar7 = (undefined4 *)(**(code **)(*(int *)(uVar10 + 8) + 4))();
    local_28 = puVar7[2];
    local_2c = puVar7[1];
    local_30 = *puVar7;
  }
  else {
    local_30 = *in_EAX;
    local_28 = in_EAX[2];
    local_2c = in_EAX[1];
    cVar5 = FUN_0004ba00(uVar10,&local_30,param_1,param_2,param_5);
    if (cVar5 != '\0') {
      local_18 = &PTR_FUN_003a4f68;
      local_4 = 0;
      FUN_00058b60();
      FUN_00038320();
      local_18 = &PTR_FUN_003a4f68;
      if (local_4 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  local_48 = 0.0;
  do {
    if ((DAT_003bc930 != '\x01') ||
       (uVar6 = FUN_0004bb70(uVar10 + 0x2c,&local_30,param_1,param_2,param_4,param_5), uVar6 == 0))
    {
      uVar10 = FUN_0004e8f0();
      return uVar10 & 0xffffff00;
    }
    local_18 = &PTR_FUN_003a4f68;
    local_4 = 0;
    puVar7 = (undefined4 *)(**(code **)(*(int *)(uVar6 + 8) + 4))();
    uStack_10 = puVar7[1];
    uStack_c = puVar7[2];
    uStack_14 = *puVar7;
    if (local_4 != uVar6) {
      if (local_4 != 0) {
        FUN_0008f6e0();
      }
      local_4 = uVar6;
      if ((uVar6 & 1) == 0) {
        uVar8 = uVar6 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_8 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_8;
      }
    }
    FUN_00038320();
    local_18 = &PTR_FUN_003a4f68;
    if ((local_4 != 0) && ((local_4 & 1) == 0)) {
      iVar9 = local_4 * 0x19660d;
      local_4 = 0;
      iVar1 = *(int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar1 != 0) {
        piVar2 = (int *)*piVar4;
        if (piVar2 == &local_8) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar2;
        iVar1 = *piVar2;
      }
    }
    fStack_1c = *(float *)(uVar6 + 0x1c) - *(float *)(uVar10 + 0x1c);
    fStack_20 = *(float *)(uVar6 + 0x18) - *(float *)(uVar10 + 0x18);
    fVar3 = *(float *)(uVar6 + 0x14) - *(float *)(uVar10 + 0x14);
    local_48 = SQRT(fVar3 * fVar3 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) + local_48;
    uVar10 = uVar6;
    if (local_48 < param_3 == 0 && (local_48 == param_3) == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)fStack_20 >> 0x10),
                                      (ushort)(local_48 < param_3) << 8 |
                                      (ushort)(isnan(local_48) || isnan(param_3)) << 10 |
                                      (ushort)(local_48 == param_3) << 0xe) >> 8),1);
    }
  } while( true );
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E41241AF5A18E7A5E9097D505A7612C837FB86CB16F05E052697F4DCC010A337
 * Entry: 0x000837b0, Ghidra index: 1536, label: FUN_000837b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00402000;
extern uint32_t DAT_00402004;
extern uint32_t DAT_00402008;
extern uint32_t DAT_00402018;
extern char s_entry__d_0040dbd4[];
undefined4
FUN_000837b0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  char local_28;
  char local_27 [15];
  int local_18 [4];
  uint local_8;
  undefined4 local_4;
  
  piVar10 = local_18;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_18[0] = DAT_00402000;
  local_18[3] = DAT_00402018;
  local_18[1] = DAT_00402004;
  local_18[2] = DAT_00402008;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    FUN_002eaa19(&local_28,0x10,s_entry__d_0040dbd4,iVar6);
    local_8 = 0xffffffff;
    pcVar8 = &local_28;
    cVar2 = local_28;
    while (cVar2 != '\0') {
      local_8 = local_8 >> 8 ^
                *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ local_8) & 0xff) * 4);
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    }
    local_8 = ~local_8;
    local_4 = 0xf66ab3a9;
    uVar7 = 0;
    iVar9 = 0;
    while( true ) {
      if ((*(int *)(param_2 + 0x14) == 0) ||
         ((uint)(*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4) <= uVar7))
      goto LAB_000838fc;
      if (*(int *)(*(int *)(param_2 + 0x14) + iVar9) == local_18[0]) break;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 0x10;
    }
    iVar9 = FUN_00077da0(5);
    if (iVar9 != 0) {
      iVar3 = *(int *)(iVar9 + 0xc);
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar7 = *(uint *)(iVar9 + 4);
          goto LAB_000838c4;
        }
        if (iVar3 == 3) {
          uVar7 = (uint)*(byte *)(iVar9 + 4);
          goto LAB_000838c4;
        }
LAB_00083917:
        iVar6 = *(int *)(iVar9 + 0xc);
        if (iVar6 == 1) {
          fVar4 = (float)(int)param_3;
          if ((int)param_3 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          *(float *)(iVar9 + 4) = fVar4;
        }
        else if (iVar6 == 2) {
          *(uint *)(iVar9 + 4) = param_3;
        }
        else if (iVar6 == 3) {
          *(bool *)(iVar9 + 4) = param_3 != 0;
        }
        local_4 = 0x1c785ea9;
        uVar7 = 0;
        iVar6 = 0;
        break;
      }
      uVar7 = (uint)*(float *)(iVar9 + 4);
LAB_000838c4:
      if (uVar7 == 0) goto LAB_00083917;
      iVar3 = *(int *)(iVar9 + 0xc);
      if (iVar3 == 1) {
        uVar7 = (uint)*(float *)(iVar9 + 4);
      }
      else if (iVar3 == 2) {
        uVar7 = *(uint *)(iVar9 + 4);
      }
      else if (iVar3 == 3) {
        uVar7 = (uint)*(byte *)(iVar9 + 4);
      }
      else {
        uVar7 = 0;
      }
      if (uVar7 == param_3) goto LAB_00083917;
    }
LAB_000838fc:
    if (0xb < iVar6) {
      return 0;
    }
  } while( true );
LAB_00083960:
  if ((*(int *)(param_2 + 0x14) == 0) ||
     ((uint)(*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4) <= uVar7)) goto LAB_00083990;
  if (*(int *)(*(int *)(param_2 + 0x14) + iVar6) == local_18[0]) {
    uVar5 = FUN_00077da0(5);
    goto LAB_00083992;
  }
  uVar7 = uVar7 + 1;
  iVar6 = iVar6 + 0x10;
  goto LAB_00083960;
LAB_00083990:
  uVar5 = 0;
LAB_00083992:
  *param_4 = uVar5;
  local_4 = 0xe01a523c;
  iVar6 = 0;
  for (uVar7 = 0;
      (*(int *)(param_2 + 0x14) != 0 &&
      (uVar7 < (uint)(*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4))); uVar7 = uVar7 + 1
      ) {
    if (*(int *)(*(int *)(param_2 + 0x14) + iVar6) == local_18[0]) {
      uVar5 = FUN_00077da0(5);
      goto LAB_000839de;
    }
    iVar6 = iVar6 + 0x10;
  }
  uVar5 = 0;
LAB_000839de:
  *param_5 = uVar5;
  local_4 = 0xeac34649;
  iVar6 = 0;
  for (uVar7 = 0;
      (*(int *)(param_2 + 0x14) != 0 &&
      (uVar7 < (uint)(*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4))); uVar7 = uVar7 + 1
      ) {
    if (*(int *)(*(int *)(param_2 + 0x14) + iVar6) == local_18[0]) {
      uVar5 = FUN_00077da0(5);
      *param_6 = uVar5;
      return 1;
    }
    iVar6 = iVar6 + 0x10;
  }
  *param_6 = 0;
  return 1;
}

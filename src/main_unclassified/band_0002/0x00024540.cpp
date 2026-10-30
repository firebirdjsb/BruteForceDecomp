/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFD53DDA98836B72BD57A52465F38EAEB940CE1C270673DE0DB31F95EE14FD0B
 * Entry: 0x00024540, Ghidra index: 253, label: FUN_00024540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5908;
int FUN_00024540(int param_1,undefined4 param_2,int param_3,int param_4,undefined1 *param_5,
                undefined4 param_6,char param_7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_294;
  undefined1 local_280 [24];
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_264 [64];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  uint local_1f8;
  undefined4 local_1f4;
  undefined1 local_1e0 [92];
  undefined4 local_184;
  undefined1 local_140 [92];
  undefined4 local_e4;
  undefined1 local_a0 [92];
  undefined4 local_44;
  
  local_294 = 1;
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  uVar4 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(param_1 + 0x424);
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x420) + uVar4 * 4);
  if (((*(uint *)(iVar6 + 0x88) & 0x4000) != 0) ||
     ((*(byte *)(&DAT_004a5908 + *(int *)(iVar6 + 0x5c)) & 0x20) != 0)) {
    return 0;
  }
  FUN_00022dc0();
  if (param_7 != '\0') {
    piVar5 = (int *)FUN_0001ba10();
    puVar1 = (undefined1 *)*piVar5;
    FUN_00022e50();
    local_220 = *(undefined4 *)(puVar1 + 0x28);
    local_21c = *(undefined4 *)(puVar1 + 0x2c);
    local_267 = 1;
    if (local_264 != puVar1) {
      FUN_00055650();
    }
    local_268 = *(int *)(puVar1 + 0x20) != 0;
    FUN_00058b60();
  }
  local_1f8 = local_1f8 & 0xffffefff;
  local_224 = param_2;
  if (param_4 != 0) {
    FUN_00022e50();
  }
  if ((param_5 != (undefined1 *)0x0) && (local_268 = 1, local_280 != param_5)) {
    FUN_00022ce0();
  }
  local_1f8 = local_1f8 & 0xfffffffd | 0x2000;
  local_1f4 = param_6;
  FUN_00055d30(local_280);
  if (param_3 == 0) {
    iVar6 = FUN_00055aa0();
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar6 + 0x5c);
    local_294 = 1;
    iVar6 = FUN_00055aa0();
    *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xffff7fff;
    iVar6 = FUN_00055aa0();
    *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xfffeffff;
    iVar6 = FUN_00038410();
    uVar4 = *(uint *)(iVar6 + 0x88) & 0xfff1ffff;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        while( true ) {
          if (*(int *)(param_1 + 0x42c) == 0) {
            FUN_00022dc0();
            local_e4 = 1;
            FUN_00055d30(local_140);
            FUN_0001d470();
          }
          uVar4 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
          if (*(uint *)(param_1 + 0x424) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(param_1 + 0x424);
          }
          uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar4 * 4) + 0x5c);
          FUN_00022f70();
          uVar3 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
          iVar6 = FUN_00022f30();
          if (iVar6 != 0) break;
          *(undefined4 *)(param_1 + 0x44) = uVar3;
          if (*(int *)(param_1 + 0x42c) != 0) {
            FUN_0001d470();
            piVar5 = (int *)(param_1 + 0x42c);
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              *(undefined4 *)(param_1 + 0x428) = 0;
            }
          }
          if (*(int *)(param_1 + 0x42c) == 0) {
            FUN_00022dc0();
            local_184 = 1;
            FUN_00055d30(local_1e0);
            FUN_0001d470();
          }
          uVar4 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
          if (*(uint *)(param_1 + 0x424) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(param_1 + 0x424);
          }
          *(undefined4 *)(param_1 + 0x44) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar4 * 4) + 0x5c);
          if (*(int *)(param_1 + 0x42c) == 0) {
            FUN_00022dc0();
            local_44 = 1;
            FUN_00055d30(local_a0);
            FUN_0001d470();
          }
          uVar4 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
          if (*(uint *)(param_1 + 0x424) <= uVar4) {
            uVar4 = uVar4 - *(uint *)(param_1 + 0x424);
          }
          iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar4 * 4) + 0x5c);
          local_294 = 0;
          if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
            (**(code **)(iVar6 * 0x40 + *(int *)(param_1 + 0x4c)))();
          }
        }
      }
      goto LAB_0002492f;
    }
    iVar6 = FUN_00055aa0();
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar6 + 0x5c);
    local_294 = FUN_00022f30();
    if (local_294 == 0) {
      *(undefined4 *)(param_1 + 0x44) = uVar2;
    }
    if (local_294 != 1) {
      FUN_00055b10();
      iVar6 = FUN_00055aa0();
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar6 + 0x5c);
      goto LAB_0002492f;
    }
    iVar6 = FUN_00055aa0();
    uVar4 = *(uint *)(iVar6 + 0x88) & 0xfffeffff;
  }
  *(uint *)(iVar6 + 0x88) = uVar4;
LAB_0002492f:
  FUN_0001d470();
  return local_294;
}

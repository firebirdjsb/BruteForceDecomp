/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B04FED636CB05DC053566AD3251842199D88C32A94A4C68A7BC14B88E4BB98B2
 * Entry: 0x0002ced0, Ghidra index: 299, label: FUN_0002ced0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t switchD_0002d06b_caseD_1[];
undefined4 FUN_0002ced0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 local_55c;
  undefined1 local_544 [4];
  int local_540;
  undefined4 local_53c;
  undefined4 local_538;
  int local_534;
  uint local_530;
  undefined1 local_504 [92];
  undefined4 local_4a8;
  undefined1 local_464 [92];
  undefined4 local_408;
  undefined1 local_3c4 [92];
  undefined4 local_368;
  undefined1 local_324 [92];
  undefined4 local_2c8;
  undefined1 local_284 [92];
  undefined4 local_228;
  undefined1 local_1e4 [92];
  undefined4 local_188;
  undefined1 auStack_144 [92];
  undefined4 uStack_e8;
  undefined1 auStack_a4 [92];
  undefined4 uStack_48;
  
  bVar9 = false;
  local_55c = 2;
  iVar4 = FUN_000120f0();
  local_540 = 0;
  local_53c = 0;
  local_538 = 0;
LAB_0002cf10:
  uVar10 = 0;
  if (param_2 == 0x3d) {
    iVar5 = FUN_0002cd20(local_544);
    *(int *)(param_1 + 0x4ec) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x4ec) = 0x59;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x4ec);
    FUN_00140a60(*(undefined4 *)(*(int *)(iVar4 + 8) + 0xbe8),iVar4,0xf79cae7,0);
  }
  else if (param_2 == 0x3e) {
    iVar5 = FUN_0002cd20(local_544);
    *(int *)(param_1 + 0x4f0) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x4f0) = 0x59;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(iVar4 + 0x7dc) = 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    piVar8 = (int *)(param_1 + 0xc);
  }
  else {
    bVar9 = true;
    local_530 = 0;
    piVar8 = &local_534;
  }
  iVar5 = piVar8[1];
  if (((bVar9) && (bVar9 = false, local_530 != 0)) && ((local_530 & 1) == 0)) {
    iVar6 = local_530 * 0x19660d;
    local_530 = 0;
    iVar1 = *(int *)(&DAT_00414da0 + (iVar6 + 0x3c6ef35fU >> 0x15) * 4);
    piVar8 = (int *)(&DAT_00414da0 + (iVar6 + 0x3c6ef35fU >> 0x15) * 4);
    while (iVar1 != 0) {
      piVar2 = (int *)*piVar8;
      if (piVar2 == &local_534) {
        *piVar8 = *(int *)*piVar8;
        break;
      }
      piVar8 = piVar2;
      iVar1 = *piVar2;
    }
  }
  if (((iVar5 != 0) && ((*(byte *)(*(int *)(iVar5 + 0xc) + 0x1a9) & 1) != 0)) &&
     (*(undefined1 *)(param_1 + 0x3cc) = 0, *(char *)(param_1 + 0x3cd) != '\0')) {
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(byte *)(param_1 + 0x3d8) = *(byte *)(param_1 + 0x3d8) & 0xfa | 2;
  }
  switch(uVar10) {
  case 0:
  case 0x59:
    FUN_0004e8f0();
    local_55c = 2;
    iVar4 = FUN_00055aa0();
    *(undefined4 *)(iVar4 + 0x94) = 0;
  default:
    goto switchD_0002d06b_caseD_1;
  case 0x5a:
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_368 = 1;
      FUN_00055d30(local_3c4);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x94) = 3;
    goto LAB_0002d144;
  case 0x5b:
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_188 = 1;
      FUN_00055d30(local_1e4);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x94) = 3;
    goto LAB_0002d457;
  case 0x5c:
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_228 = 1;
      FUN_00055d30(local_284);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x94) = 2;
LAB_0002d144:
    FUN_0004e8f0();
    *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
    *(undefined4 *)(param_1 + 0x4f8) = 0x3f19999a;
    iVar5 = (**(code **)(*(int *)(param_1 + 0x40) + 0x2d8))();
    if (iVar5 == 1) {
      if (*(int *)(param_1 + 0x42c) == 0) {
        FUN_00022dc0();
        uStack_e8 = 1;
        FUN_00055d30(auStack_144);
        FUN_0001d470();
      }
      uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
      if (*(uint *)(param_1 + 0x424) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
      }
      uVar10 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x58);
      iVar5 = *(int *)(*(int *)(param_1 + 0x938) + -4);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(iVar5 + 8) + 4))();
      }
      cVar3 = FUN_0004cbc0(uVar10);
      if (cVar3 != '\0') {
        local_55c = 5;
        goto switchD_0002d06b_caseD_1;
      }
    }
    break;
  case 0x5d:
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_2c8 = 1;
      FUN_00055d30(local_324);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x94) = 2;
LAB_0002d457:
    FUN_0004e8f0();
    *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
    *(undefined4 *)(param_1 + 0x4f8) = 0x3f19999a;
    iVar5 = (**(code **)(*(int *)(param_1 + 0x40) + 0x2e8))();
    if (iVar5 == 1) {
      if (*(int *)(param_1 + 0x42c) == 0) {
        FUN_00022dc0();
        uStack_48 = 1;
        FUN_00055d30(auStack_a4);
        FUN_0001d470();
      }
      uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
      if (*(uint *)(param_1 + 0x424) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
      }
      uVar10 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x58);
      iVar5 = *(int *)(*(int *)(param_1 + 0x938) + -4);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(iVar5 + 8) + 4))();
      }
      cVar3 = FUN_0004cbc0(uVar10);
      if (cVar3 == '\0') goto LAB_0002d518;
      local_55c = 6;
switchD_0002d06b_caseD_1:
      if (local_540 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_540);
      }
      return local_55c;
    }
LAB_0002d518:
    FUN_0004e8f0();
    FUN_001611d0();
    goto LAB_0002cf10;
  case 0x5e:
    *(undefined4 *)(param_1 + 0x7c8) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    iVar5 = (**(code **)(*(int *)(param_1 + 0x40) + 0x388))();
    if (iVar5 == 1) {
      iVar5 = FUN_00055aa0();
      cVar3 = FUN_0004cbc0(*(undefined4 *)(iVar5 + 0x58));
      if (cVar3 != '\0') {
        local_55c = 9;
        goto switchD_0002d06b_caseD_1;
      }
    }
    break;
  case 0x5f:
    FUN_0004e8f0();
    iVar4 = FUN_00055aa0();
    *(undefined4 *)(iVar4 + 0x94) = 0;
    local_55c = 7;
    goto switchD_0002d06b_caseD_1;
  case 0x60:
    *(undefined4 *)(param_1 + 0x7c8) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    iVar5 = (**(code **)(*(int *)(param_1 + 0x40) + 0x398))();
    if (iVar5 == 1) {
      iVar5 = FUN_00055aa0();
      cVar3 = FUN_0004cbc0(*(undefined4 *)(iVar5 + 0x58));
      if (cVar3 != '\0') {
        local_55c = 10;
        goto switchD_0002d06b_caseD_1;
      }
    }
    break;
  case 0x7c:
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_4a8 = 1;
      FUN_00055d30(local_504);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x94) = 3;
    if (*(int *)(param_1 + 0x42c) == 0) {
      FUN_00022dc0();
      local_408 = 1;
      FUN_00055d30(local_464);
      FUN_0001d470();
    }
    uVar7 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(param_1 + 0x424);
    }
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar7 * 4) + 0x58);
    if ((iVar5 != 0) && (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 3)) {
      FUN_0011dfa0();
      FUN_000120f0();
      FUN_0011dfa0();
      cVar3 = FUN_000416a0(param_1 + 0x930,1);
      if ((cVar3 != '\0') &&
         (((*(int *)(param_1 + 0x934) != 0 &&
           (1 < (*(int *)(param_1 + 0x938) - *(int *)(param_1 + 0x934)) / 0x18)) &&
          (*(int *)(*(int *)(param_1 + 0x934) + 0x2c) != 0)))) {
        iVar5 = FUN_00055aa0();
        cVar3 = FUN_0004cbc0(*(undefined4 *)(iVar5 + 0x58));
        if (cVar3 != '\0') {
          FUN_00025730(param_1 + 0x930,1,1);
          local_55c = 8;
          goto switchD_0002d06b_caseD_1;
        }
      }
    }
  }
  FUN_0004e8f0();
  FUN_001611d0();
  goto LAB_0002cf10;
}

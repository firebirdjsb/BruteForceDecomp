/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D404744767A489FA17E5DEAFC84329507C5D2A0B9B334F82B1EE04EEA362E60
 * Entry: 0x003592c0, Ghidra index: 13167, label: FUN_003592c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b168c;
extern uint32_t DAT_004b1690;
undefined4 FUN_003592c0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint *local_8;
  int local_4;
  
  uVar1 = param_1;
  local_10 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x2ec) == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2f4) != 0) {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      FUN_00359140(param_1,0);
      FUN_00359140(uVar1,1);
    }
    *(undefined4 *)(uVar1 + 0x280) = 0;
    *(undefined4 *)(uVar1 + 0x338) = 0;
  }
  *(undefined4 *)(uVar1 + 0x138) = 1;
  *(undefined4 *)(uVar1 + 0x308) = 0;
  uVar2 = FUN_0035b1a0();
  *(undefined4 *)(uVar1 + 0x278) = uVar2;
  _memmove((void *)((int)*(void **)(uVar1 + 0x2cc) + 4),*(void **)(uVar1 + 0x2cc),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2d4) + 4),*(void **)(uVar1 + 0x2d4),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2d0) + 4),*(void **)(uVar1 + 0x2d0),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2d8) + 4),*(void **)(uVar1 + 0x2d8),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2dc) + 4),*(void **)(uVar1 + 0x2dc),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2e0) + 4),*(void **)(uVar1 + 0x2e0),
           *(size_t *)(uVar1 + 0x2c8));
  _memmove((void *)((int)*(void **)(uVar1 + 0x2e4) + 4),*(void **)(uVar1 + 0x2e4),
           *(size_t *)(uVar1 + 0x2c8));
  **(undefined4 **)(uVar1 + 0x2cc) = *(undefined4 *)(uVar1 + 0x278);
  **(undefined4 **)(uVar1 + 0x2d4) = *(undefined4 *)(uVar1 + 0x2ac);
  **(undefined4 **)(uVar1 + 0x2d0) = *(undefined4 *)(uVar1 + 0x2b0);
  **(undefined4 **)(uVar1 + 0x2d8) = *(undefined4 *)(uVar1 + 0x2b4);
  **(undefined4 **)(uVar1 + 0x2dc) = *(undefined4 *)(uVar1 + 0x140);
  **(undefined4 **)(uVar1 + 0x2e0) = *(undefined4 *)(uVar1 + 0x144);
  **(undefined4 **)(uVar1 + 0x2e4) = *(undefined4 *)(uVar1 + 0x148);
  if (*(int *)(uVar1 + 0x274) == 0) {
    param_1 = *(uint *)(uVar1 + 700);
    local_c = *(uint *)(uVar1 + 0x2c0);
    *(int *)(*(int *)(uVar1 + 0x2cc) + 4) =
         *(int *)(uVar1 + 0x278) - (int)(((ulonglong)local_c * 1000) / (ulonglong)param_1);
    *(undefined4 *)(uVar1 + 0x148) = 0;
    *(undefined4 *)(uVar1 + 0x274) = *(undefined4 *)(uVar1 + 0x278);
    *(undefined4 *)(uVar1 + 0x144) = 0;
  }
  else if (*(int *)(uVar1 + 0x2f8) != 0) {
    FUN_00356f00(uVar1);
  }
  piVar12 = *(int **)(uVar1 + 0x104);
  *(undefined4 *)(uVar1 + 0x28c) = *(undefined4 *)(uVar1 + 0x278);
  if (*(int *)(uVar1 + 300) != 0) {
    *(undefined4 *)(uVar1 + 0x1c) = 1;
  }
  if (*(int *)(uVar1 + 0x1c) != 0) {
    return 1;
  }
  local_14 = 0;
  if (0 < *(int *)(uVar1 + 0xf0)) {
    do {
      local_4 = *piVar12;
      puVar11 = (uint *)(piVar12 + 1);
      iVar8 = 0;
      local_8 = puVar11;
      if (0 < *(int *)(uVar1 + 0x2f8)) {
        piVar3 = *(int **)(uVar1 + 0x25c);
        do {
          if (*piVar3 == local_14) {
            if ((iVar8 != -1) && (local_4 != 0)) {
              uVar7 = *puVar11;
              local_18 = piVar12 + 2;
              if (local_10 == 0) {
                local_10 = 1;
                FUN_0035ada0(DAT_004b1690,uVar1 + 0x34c);
              }
              if (uVar7 != 0) {
                iVar8 = iVar8 * 0x178;
                do {
                  iVar4 = *(int *)(uVar1 + 0x300);
                  uVar6 = *(int *)(iVar4 + 0x28 + iVar8) - *(int *)(iVar4 + 0x40 + iVar8);
                  FUN_0035bb70(*(undefined4 *)(iVar4 + iVar8 + 0x3c),&local_1c,&param_1,local_18,
                               &local_18);
                  if (uVar7 < param_1) {
                    param_1 = uVar7;
                  }
                  uVar7 = uVar7 - param_1;
                  if (uVar6 < param_1) {
                    iVar4 = param_1 - uVar6;
                    *(int *)(*(int *)(uVar1 + 0x300) + 0x38 + iVar8) =
                         *(int *)(*(int *)(uVar1 + 0x300) + 0x38 + iVar8) + iVar4;
                    *(int *)(*(int *)(uVar1 + 0x300) + 0x40 + iVar8) =
                         *(int *)(*(int *)(uVar1 + 0x300) + 0x40 + iVar8) - iVar4;
                    iVar4 = *(int *)(uVar1 + 0x300);
                    uVar6 = *(uint *)(iVar4 + 0x38 + iVar8);
                    if (*(uint *)(iVar4 + 0x30 + iVar8) < uVar6) {
                      *(uint *)(iVar4 + iVar8 + 0x38) = uVar6 - *(int *)(iVar4 + iVar8 + 0x28);
                    }
                  }
                  *(uint *)(*(int *)(uVar1 + 0x300) + 0x40 + iVar8) =
                       *(int *)(*(int *)(uVar1 + 0x300) + 0x40 + iVar8) + param_1;
                  puVar10 = *(undefined4 **)(*(int *)(uVar1 + 0x300) + 0x34 + iVar8);
                  uVar6 = *(int *)(*(int *)(uVar1 + 0x300) + iVar8 + 0x30) - (int)puVar10;
                  if (uVar6 < param_1) {
                    if (uVar6 != 0) {
                      puVar9 = local_1c;
                      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar10 = *puVar9;
                        puVar9 = puVar9 + 1;
                        puVar10 = puVar10 + 1;
                      }
                      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                        puVar9 = (undefined4 *)((int)puVar9 + 1);
                        puVar10 = (undefined4 *)((int)puVar10 + 1);
                      }
                      param_1 = param_1 - uVar6;
                      local_1c = (undefined4 *)((int)local_1c + uVar6);
                    }
                    puVar10 = local_1c;
                    puVar9 = *(undefined4 **)(*(int *)(uVar1 + 0x300) + 0x2c + iVar8);
                    for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar9 = *puVar10;
                      puVar10 = puVar10 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                      puVar9 = (undefined4 *)((int)puVar9 + 1);
                    }
                    *(uint *)(*(int *)(uVar1 + 0x300) + iVar8 + 0x34) =
                         *(int *)(*(int *)(uVar1 + 0x300) + 0x2c + iVar8) + param_1;
                  }
                  else {
                    puVar9 = local_1c;
                    for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar10 = *puVar9;
                      puVar9 = puVar9 + 1;
                      puVar10 = puVar10 + 1;
                    }
                    for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                      puVar9 = (undefined4 *)((int)puVar9 + 1);
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                    }
                    *(uint *)(*(int *)(uVar1 + 0x300) + 0x34 + iVar8) =
                         *(int *)(*(int *)(uVar1 + 0x300) + 0x34 + iVar8) + param_1;
                  }
                  puVar11 = local_8;
                  local_c = uVar7;
                } while (uVar7 != 0);
              }
            }
            break;
          }
          iVar8 = iVar8 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar8 < *(int *)(uVar1 + 0x2f8));
      }
      piVar12 = (int *)((int)puVar11 + local_4);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(uVar1 + 0xf0));
    if (local_10 != 0) {
      FUN_0035ae30(DAT_004b1690,uVar1 + 0x34c);
    }
  }
  iVar8 = FUN_0035b1a0();
  if (*(int *)(uVar1 + 0x2a4) != 0) {
    if (*(int *)(uVar1 + 0x304) == 0) {
      uVar6 = (*(uint *)(uVar1 + 0xd0) >> 4) * (*(uint *)(uVar1 + 0xcc) >> 4);
      puVar10 = *(undefined4 **)(uVar1 + 0xdc);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    if (((*(int *)(uVar1 + 0x108) == 0) && (*(int *)(uVar1 + 0x130) == 0)) &&
       ((uint)((*(int *)(uVar1 + 0x158) + 1) * 100) / (*(int *)(uVar1 + 0x154) + 1U) < 0x4b)) {
      iVar4 = FUN_0035ad70(DAT_004b168c,uVar1 + 0x20c);
      if (iVar4 == 0) {
        if ((*(uint *)(uVar1 + 0x20) & 0x8000000) == 0) {
          FUN_0035af40();
        }
      }
      else {
        (**(code **)(uVar1 + 0x120))(uVar1 + 0x110);
        FUN_0035ae30(DAT_004b168c,uVar1 + 0x20c);
      }
    }
    uVar7 = *(uint *)(uVar1 + 0xb8);
    FUN_0035f100(*(undefined4 *)(uVar1 + 0xbc + (uVar7 ^ 1) * 4),
                 *(undefined4 *)(uVar1 + 0xbc + uVar7 * 4),
                 *(undefined4 *)(uVar1 + 0xc4 + (uVar7 ^ 1) * 4),
                 *(undefined4 *)(uVar1 + 0xc4 + uVar7 * 4),*(undefined4 *)(uVar1 + 0xdc),
                 *(undefined4 *)(uVar1 + 0x254),*(undefined4 *)(uVar1 + 600),
                 *(undefined4 *)(uVar1 + 0xcc),*(undefined4 *)(uVar1 + 0xd0),piVar12,
                 *(uint *)(*(int *)(uVar1 + 0x10c) + -4 + *(int *)(uVar1 + 0xc) * 4) & 1,
                 uVar1 + 0x310,*(undefined4 *)(uVar1 + 0x20),*(undefined4 *)(uVar1 + 0x24));
    *(uint *)(uVar1 + 0xb8) = *(uint *)(uVar1 + 0xb8) ^ 1;
  }
  if (*(int *)(uVar1 + 0x2f8) != 0) {
    FUN_00356f00(uVar1);
  }
  *(undefined4 *)(uVar1 + 0xb4) = 0xffffffff;
  *(int *)(uVar1 + 0x270) = *(int *)(uVar1 + 0x270) + 1;
  if (*(int *)(uVar1 + 0x280) == 0) {
    uVar2 = FUN_0035b1a0();
    *(undefined4 *)(uVar1 + 0x280) = uVar2;
    *(int *)(uVar1 + 0x284) = *(int *)(uVar1 + 0x270) + -1;
  }
  iVar4 = FUN_0035b1a0();
  *(int *)(uVar1 + 0x27c) = iVar4;
  *(int *)(uVar1 + 0x2b0) = *(int *)(uVar1 + 0x2b0) + (iVar8 - *(int *)(uVar1 + 0x278));
  *(undefined4 *)(uVar1 + 0x138) = 0;
  *(undefined4 *)(uVar1 + 0x2ec) = *(undefined4 *)(uVar1 + 0xc);
  *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0x2ac) = *(int *)(uVar1 + 0x2ac) + (iVar4 - iVar8);
  return 0;
}

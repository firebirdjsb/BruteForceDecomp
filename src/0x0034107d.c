/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43519036B8E295ABECA7C65BF067EB754FFFA27FA08519FFF7613444DB780DD3
 * Entry: 0x0034107d, Ghidra index: 12673, label: FUN_0034107d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00000000;
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x003412e9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0034107d(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int unaff_EDI;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44 [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [2];
  undefined4 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  FUN_002ebea0();
  puVar4 = (undefined4 *)&stack0xffffff94;
  for (iVar6 = 0x2ee; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar6 = FUN_0033fbee();
  if (iVar6 == 0) {
    local_1c[0] = param_1 + 0x140;
    local_24 = 0x17;
    local_20 = 0x10;
    iVar6 = FUN_0033f199();
    if (iVar6 != 0) {
      FUN_002ebea0();
      uVar3 = FUN_0033fffe();
      if (uVar3 != 0) {
        return uVar3;
      }
      *(int *)(param_4 + 0xd8) = unaff_EDI;
      if (-1 < unaff_EDI) {
        *(undefined4 *)(param_4 + 0x1b8) = local_24;
        param_2 = 0;
        if (*(int *)(param_4 + 0x30) != 0) {
          param_3 = (int *)(param_4 + 0x230);
          puVar4 = (undefined4 *)(param_4 + 0x200);
          do {
            uVar3 = 0;
            if (*(int *)(param_4 + 0x30) != 0) {
              piVar8 = local_1c;
              do {
                if (puVar4[-0x73] == *piVar8) {
                  *puVar4 = local_58[uVar3 * 3 + 0x10];
                  *(undefined2 *)param_3 = *(undefined2 *)(&local_14 + uVar3 * 3);
                  break;
                }
                uVar3 = uVar3 + 1;
                piVar8 = piVar8 + 3;
              } while (uVar3 < *(uint *)(param_4 + 0x30));
            }
            param_2 = param_2 + 1;
            param_3 = (int *)((int)param_3 + 2);
            puVar4 = puVar4 + 1;
          } while (param_2 < *(uint *)(param_4 + 0x30));
        }
        puVar7 = (undefined4 *)(param_4 + 0x1e0);
        puVar4 = (undefined4 *)&stack0xffffff98;
        param_3 = (int *)0x4;
        do {
          puVar7[4] = puVar4[4];
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
          param_3 = (int *)((int)param_3 + -1);
        } while (param_3 != (int *)0x0);
        *(undefined4 *)(param_4 + 0x1bc) = local_48;
        puVar7 = (undefined4 *)(param_4 + 0x1c0);
        puVar4 = local_44;
        iVar6 = 8;
        do {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(uint *)(param_4 + 0x2dc) = 0;
      local_14 = (undefined4 *)0x0;
      iVar6 = FUN_0033fa74();
      if (iVar6 != 0) {
        puVar4 = (undefined4 *)&stack0xffffff94;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        return 0xc000009a;
      }
      uVar3 = *(uint *)(param_4 + 0x2dc);
      if (uVar3 < 0x401) {
        puVar4 = local_14;
        puVar7 = (undefined4 *)(param_4 + 0x2e0);
        for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        puVar4 = (undefined4 *)&stack0xffffff94;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        iVar6 = FUN_00340487();
        if (iVar6 == 0) {
          uVar3 = 0;
          if (*(uint *)(param_4 + 0x74) != 0) {
            piVar8 = (int *)(param_4 + 0x78);
            do {
              if (*piVar8 == *(int *)(local_10 + 0x14)) break;
              uVar3 = uVar3 + 1;
              piVar8 = piVar8 + 1;
            } while (uVar3 < *(uint *)(param_4 + 0x74));
          }
          if (((uVar3 != *(uint *)(param_4 + 0x74)) && (*(int *)(local_10 + 4) == 0x17)) &&
             (*(int *)(local_10 + 8) == 0x10)) {
            puVar4 = *(undefined4 **)(local_10 + 0xc);
            *(undefined4 *)(param_4 + 0x2b8) = *puVar4;
            *(undefined4 *)(param_4 + 700) = puVar4[1];
            *(undefined4 *)(param_4 + 0x2c0) = puVar4[2];
            *(undefined4 *)(param_4 + 0x2c4) = puVar4[3];
            iVar6 = FUN_0033f3bc();
            if (iVar6 == 0) {
              pcVar5 = *(char **)(local_c + 0x10);
              pcVar1 = pcVar5 + 1;
              do {
                cVar2 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar2 != '\0');
              if ((uint)((int)pcVar5 - (int)pcVar1) < 0x18) {
                XAPILIB__lstrcpynA();
                FUN_0033f1ba();
                FUN_0033f1ba();
                return local_8;
              }
            }
          }
        }
      }
      else {
        puVar4 = (undefined4 *)&stack0xffffff94;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
    }
  }
  else {
    iVar6 = FUN_0033fbee();
    if (iVar6 == 0) {
      local_8 = uRam00000034 | 0xafff0000;
      uVar3 = *(uint *)(param_4 + 0x74);
      uVar9 = uVar3;
      if ((((DAT_00000000 & 8) != 0) && (iRam00000050 == 4)) &&
         ((piRam00000054 != (int *)0x0 && (uVar9 = 0, uVar3 != 0)))) {
        param_3 = (int *)(param_4 + 0x78);
        do {
          if (*param_3 == *piRam00000054) break;
          param_3 = param_3 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_4 + 0x74));
      }
      if (uVar9 != uVar3) {
        if (uRam00000034 != 0x25) {
          return local_8;
        }
        FUN_0033f1ba();
        FUN_0033f3ac();
        FUN_003476c5();
        FUN_003479b2();
        return local_8;
      }
    }
  }
  return 0xc000006d;
}

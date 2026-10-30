/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18A17FC90F714C9A238587E6F9CA28DABB30D209DD3BD9917639CD336D1B60EA
 * Entry: 0x00340cf7, Ghidra index: 12672, label: FUN_00340cf7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00000000;
uint FUN_00340cf7(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_5c;
  undefined4 *local_1c;
  uint local_8;
  
  FUN_002ebea0();
  puVar9 = (undefined4 *)&stack0xffffff90;
  for (iVar3 = 500; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar3 = FUN_0033fbee();
  if (iVar3 == 0) {
    if ((DAT_00000000 & 0x80) == 0) {
LAB_00340ed4:
      local_5c = (undefined4 *)&stack0xffffff90;
      *(uint *)(param_3 + 0x164) = 0;
      local_1c = (undefined4 *)0x0;
      iVar3 = FUN_0033fa74();
      if (iVar3 == 0) {
        uVar6 = *(uint *)(param_3 + 0x164);
        if (uVar6 < 0x401) {
          puVar9 = (undefined4 *)(param_3 + 0x168);
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *local_1c;
            local_1c = local_1c + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)local_1c;
            local_1c = (undefined4 *)((int)local_1c + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *local_5c = 0;
            local_5c = local_5c + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)local_5c = 0;
            local_5c = (undefined4 *)((int)local_5c + 1);
          }
          iVar3 = FUN_00340487();
          puVar9 = puRam0000000c;
          if (iVar3 == 0) {
            uVar6 = 0;
            if (*(uint *)(param_3 + 0x38) != 0) {
              piVar7 = (int *)(param_3 + 0x3c);
              do {
                if (*piVar7 == iRam00000014) break;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar6 < *(uint *)(param_3 + 0x38));
            }
            if (((uVar6 != *(uint *)(param_3 + 0x38)) && (iRam00000004 == 0x17)) &&
               (iRam00000008 == 0x10)) {
              puVar10 = puRam0000000c + 1;
              *(undefined4 *)(param_3 + 0x140) = *puRam0000000c;
              *(undefined4 *)(param_3 + 0x144) = *puVar10;
              *(undefined4 *)(param_3 + 0x148) = puVar9[2];
              *(undefined4 *)(param_3 + 0x14c) = puVar9[3];
              iVar3 = FUN_0033f3bc();
              if (iVar3 == 0) {
                pcVar2 = pcRam00000010;
                do {
                  cVar1 = *pcVar2;
                  pcVar2 = pcVar2 + 1;
                } while (cVar1 != '\0');
                if ((uint)((int)pcVar2 - (int)(pcRam00000010 + 1)) < 0x18) {
                  XAPILIB__lstrcpynA();
                  FUN_0033f1ba();
                  FUN_0033f1ba();
                  return 0;
                }
              }
            }
          }
        }
        else {
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *local_5c = 0;
            local_5c = local_5c + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)local_5c = 0;
            local_5c = (undefined4 *)((int)local_5c + 1);
          }
        }
        goto LAB_00340f58;
      }
LAB_00340f07:
      local_8 = 0xc000009a;
    }
    else {
      iVar3 = FUN_0033f199();
      if (iVar3 == 0) {
LAB_00340eb2:
        puVar9 = (undefined4 *)&stack0xffffff90;
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        goto LAB_00340ed4;
      }
      iVar3 = FUN_0033e9f8();
      *(int *)(param_3 + 0xac) = iVar3;
      if (iVar3 == 0) goto LAB_00340f07;
      local_8 = FUN_0033ff15();
      if (local_8 == 0) goto LAB_00340eb2;
    }
    local_5c = (undefined4 *)&stack0xffffff90;
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *local_5c = 0;
      local_5c = local_5c + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)local_5c = 0;
      local_5c = (undefined4 *)((int)local_5c + 1);
    }
  }
  else {
    iVar3 = FUN_0033fbee();
    uVar6 = uRam00000034;
    if (iVar3 == 0) {
      uVar5 = *(uint *)(param_3 + 0x38);
      uVar4 = uRam00000034 | 0xafff0000;
      uVar8 = uVar5;
      if ((((DAT_00000000 & 8) != 0) && (iRam00000050 == 4)) &&
         ((piRam00000054 != (int *)0x0 && (uVar8 = 0, uVar5 != 0)))) {
        param_2 = (int *)(param_3 + 0x3c);
        do {
          if (*param_2 == *piRam00000054) break;
          param_2 = param_2 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_3 + 0x38));
      }
      if (uVar8 != uVar5) {
        if ((((DAT_00000000 & 4) != 0) && (uRam00000058 != 0)) &&
           ((puRam0000005c != (undefined4 *)0x0 && (uRam00000058 < 0x29)))) {
          *(uint *)(param_3 + 0x7c) = uRam00000058;
          uVar5 = uRam00000058;
          puVar9 = puRam0000005c;
          puVar10 = (undefined4 *)(param_3 + 0x80);
          for (uVar8 = uRam00000058 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        if (uVar6 != 0x25) {
          return uVar4;
        }
        FUN_0033f1ba();
        FUN_0033f3ac();
        FUN_003476c5();
        FUN_003479b2();
        return 0xafff0025;
      }
    }
LAB_00340f58:
    local_8 = 0xc000006d;
  }
  return local_8;
}

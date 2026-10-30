/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38D93D5D8B953E032961C77307D468AD521760546365AA3453D8593019050B7D
 * Entry: 0x002f2240, Ghidra index: 10796, label: FUN_002f2240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003873b8;
extern uint32_t DAT_003873c0;
extern uint32_t DAT_003873c8;
extern uint32_t DAT_003873d0;
undefined4
FUN_002f2240(int param_1,uint param_2,short *param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined1 local_e;
  char cStack_d;
  int local_c;
  undefined4 local_8;
  
  uVar3 = (uint)param_3 & 0x7fff;
  local_24 = 0xcc;
  local_23 = 0xcc;
  local_22 = 0xcc;
  local_21 = 0xcc;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xfb;
  local_19 = 0x3f;
  local_8 = 1;
  if (((uint)param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar3 == 0) && (param_2 == 0)) && (param_1 == 0)) {
LAB_002f23a7:
    *(undefined1 *)(param_6 + 2) = 0x30;
LAB_002f24a2:
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 5) = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    local_8 = 1;
  }
  else {
    if ((short)uVar3 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if ((((uint)param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_002f231f;
          puVar7 = &DAT_003873c0;
        }
        else {
          if (param_1 != 0) {
LAB_002f231f:
            puVar7 = &DAT_003873b8;
            goto LAB_002f2324;
          }
          puVar7 = &DAT_003873c8;
        }
        *(undefined4 *)(param_6 + 2) = *puVar7;
        param_6[4] = *(short *)(puVar7 + 1);
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
      else {
        puVar7 = &DAT_003873d0;
LAB_002f2324:
        *(undefined4 *)(param_6 + 2) = *puVar7;
        param_6[4] = *(short *)(puVar7 + 1);
        *(undefined1 *)(param_6 + 5) = *(undefined1 *)((int)puVar7 + 6);
        *(undefined1 *)((int)param_6 + 3) = 6;
      }
      return 0;
    }
    local_18 = 0;
    local_16 = (undefined2)param_1;
    uStack_14 = (undefined2)((uint)param_1 >> 0x10);
    sVar6 = (short)(((uVar3 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar3 * 0x4d10 >>
                   0x10);
    local_e = (undefined1)uVar3;
    cStack_d = (char)(uVar3 >> 8);
    local_12 = (undefined2)param_2;
    uStack_10 = (undefined2)(param_2 >> 0x10);
    FUN_002f21ca(&local_18,-(int)sVar6,1);
    if (0x3ffe < CONCAT11(cStack_d,local_e)) {
      sVar6 = sVar6 + 1;
      FUN_002f1fa8(&local_18,&local_24);
    }
    *param_6 = sVar6;
    if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar6, param_4 < 1)) goto LAB_002f23a7;
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar8 = CONCAT11(cStack_d,local_e) - 0x3ffe;
    local_e = 0;
    cStack_d = '\0';
    param_3 = (short *)0x8;
    do {
      ___shl_12(&local_18);
      param_3 = (short *)((int)param_3 + -1);
    } while (param_3 != (short *)0x0);
    if (iVar8 < 0) {
      for (uVar3 = -iVar8 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
        ___shr_12(&local_18);
      }
    }
    local_c = param_4 + 1;
    psVar4 = param_6 + 2;
    param_3 = psVar4;
    if (0 < local_c) {
      do {
        local_30 = CONCAT22(local_16,local_18);
        uStack_2c = CONCAT22(local_12,uStack_14);
        uStack_28 = CONCAT13(cStack_d,CONCAT12(local_e,uStack_10));
        ___shl_12(&local_18);
        ___shl_12(&local_18);
        ___add_12(&local_18,&local_30);
        ___shl_12(&local_18);
        cVar2 = cStack_d;
        cStack_d = '\0';
        psVar4 = (short *)((int)param_3 + 1);
        local_c = local_c + -1;
        *(char *)param_3 = cVar2 + '0';
        param_3 = psVar4;
      } while (local_c != 0);
    }
    psVar5 = psVar4 + -1;
    psVar1 = param_6 + 2;
    if (*(char *)((int)psVar4 + -1) < '5') {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '0')); psVar5 = (short *)((int)psVar5 + -1)) {
      }
      if (psVar5 < psVar1) {
        *(char *)psVar1 = '0';
        goto LAB_002f24a2;
      }
    }
    else {
      for (; (psVar1 <= psVar5 && ((char)*psVar5 == '9')); psVar5 = (short *)((int)psVar5 + -1)) {
        *(char *)psVar5 = '0';
      }
      if (psVar5 < psVar1) {
        psVar5 = (short *)((int)psVar5 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar5 = (char)*psVar5 + '\x01';
    }
    cVar2 = ((char)psVar5 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar2;
    *(undefined1 *)(cVar2 + 4 + (int)param_6) = 0;
  }
  return local_8;
}

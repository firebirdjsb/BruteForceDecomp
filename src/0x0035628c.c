/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05B271F59993B58C7D71E42559C51CFC1FB8C51E1D155E7BA949949141D832D7
 * Entry: 0x0035628c, Ghidra index: 13139, label: FUN_0035628c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_003562e4_caseD_2[];
extern uint32_t switchD_003562e4_caseD_3[];
extern uint32_t switchD_003562e4_caseD_4[];
extern uint32_t switchD_003562e4_caseD_5[];
extern uint32_t switchD_003562e4_caseD_6[];
extern uint32_t switchD_003562e4_caseD_7[];
extern uint32_t switchD_003562e4_caseD_8[];
extern uint32_t switchD_003562e4_caseD_9[];
extern uint32_t switchD_003562e4_caseD_a[];
extern uint32_t switchD_003562e4_caseD_b[];
extern uint32_t switchD_003562e4_caseD_c[];
extern uint32_t switchD_003562e4_caseD_d[];
extern uint32_t switchD_003562e4_caseD_e[];
extern uint32_t switchD_003562e4_caseD_f[];
int FUN_0035628c(ushort param_1,uint *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar2 = 0;
  if (param_3 != 0) {
    puVar7 = param_2;
    if (((uint)param_2 & 1) != 0) {
      uVar2 = (uint)(byte)*param_2 << 8;
      puVar7 = (uint *)((int)param_2 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) goto LAB_00356360;
    }
    uVar3 = param_3 >> 1;
    if (((param_3 & 1) == 0) ||
       (uVar2 = CONCAT31((int3)(uVar2 >> 8),(byte)*(ushort *)((int)puVar7 + uVar3 * 2)), uVar3 != 0)
       ) {
      if (((uint)puVar7 & 2) != 0) {
        uVar4 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 2);
        uVar2 = uVar2 + (ushort)uVar4;
        uVar3 = uVar3 - 1;
      }
      uVar4 = uVar3 >> 1;
      if (uVar4 != 0) {
        uVar6 = *puVar7;
        bVar9 = (uint *)0xfffffffb < puVar7;
        puVar8 = puVar7 + 1;
        if (uVar4 - 1 != 0) {
          uVar5 = uVar4 + 0xe >> 4;
          bVar9 = false;
          uVar4 = uVar4 - 1 & 0xf;
          if (uVar4 == 0) goto code_r0x003562ef;
          puVar8 = puVar7 + (uVar4 - 0xf);
          switch(uVar4) {
          case 2:
            goto switchD_003562e4_caseD_2;
          case 3:
            goto switchD_003562e4_caseD_3;
          case 4:
            goto switchD_003562e4_caseD_4;
          case 5:
            goto switchD_003562e4_caseD_5;
          case 6:
            goto switchD_003562e4_caseD_6;
          case 7:
            goto switchD_003562e4_caseD_7;
          case 8:
            goto switchD_003562e4_caseD_8;
          case 9:
            goto switchD_003562e4_caseD_9;
          case 10:
            goto switchD_003562e4_caseD_a;
          case 0xb:
            goto switchD_003562e4_caseD_b;
          case 0xc:
            goto switchD_003562e4_caseD_c;
          case 0xd:
            goto switchD_003562e4_caseD_d;
          case 0xe:
            goto switchD_003562e4_caseD_e;
          case 0xf:
            goto switchD_003562e4_caseD_f;
          }
          while( true ) {
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[0xf];
            puVar8 = puVar8 + 0x10;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) break;
code_r0x003562ef:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = *puVar8;
switchD_003562e4_caseD_f:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[1];
switchD_003562e4_caseD_e:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[2];
switchD_003562e4_caseD_d:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[3];
switchD_003562e4_caseD_c:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[4];
switchD_003562e4_caseD_b:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[5];
switchD_003562e4_caseD_a:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[6];
switchD_003562e4_caseD_9:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[7];
switchD_003562e4_caseD_8:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[8];
switchD_003562e4_caseD_7:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[9];
switchD_003562e4_caseD_6:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[10];
switchD_003562e4_caseD_5:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[0xb];
switchD_003562e4_caseD_4:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[0xc];
switchD_003562e4_caseD_3:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[0xd];
switchD_003562e4_caseD_2:
            uVar4 = (uint)bVar9;
            bVar9 = CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,uVar4);
            uVar2 = uVar2 + uVar6 + uVar4;
            uVar6 = puVar8[0xe];
          }
        }
        uVar2 = uVar2 + uVar6 + (uint)bVar9 +
                (uint)(CARRY4(uVar2,uVar6) || CARRY4(uVar2 + uVar6,(uint)bVar9));
        puVar7 = puVar8;
      }
      if ((uVar3 & 1) != 0) {
        uVar2 = CONCAT22((short)(uVar2 >> 0x10),(ushort)uVar2 + (ushort)*puVar7) +
                (uint)CARRY2((ushort)uVar2,(ushort)*puVar7);
      }
    }
  }
LAB_00356360:
  uVar1 = (ushort)(uVar2 + (uVar2 >> 0x10 | uVar2 << 0x10) >> 0x10);
  if (((uint)param_2 & 1) != 0) {
    uVar1 = uVar1 >> 8 | uVar1 << 8;
  }
  return (uint)(ushort)(uVar1 + param_1) + (uint)CARRY2(uVar1,param_1);
}

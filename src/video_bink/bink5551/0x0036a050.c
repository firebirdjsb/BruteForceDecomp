/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 027C81B9BEF6DAAA819FB6E49D13802C2E9BC50C7097C1221F806BF857217684
 * Entry: 0x0036a050, Ghidra index: 13270, label: FUN_0036a050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7d58;
extern uint32_t DAT_004be760;
extern uint32_t DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
extern uint32_t *DAT_004be770;
extern uint32_t *DAT_004be774;
extern uint32_t *DAT_004be778;
extern uint32_t *DAT_004be77c;
extern uint32_t DAT_004bf7b0;
extern uint32_t DAT_004bfbb0;
extern uint32_t DAT_004bffb0;
extern uint32_t DAT_004c03b0;
extern uint32_t _DAT_003b7d50;
extern uint32_t _PTR_LAB_0010000c_4_003b7d48;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036a050(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  short sVar16;
  short sVar19;
  short sVar20;
  undefined8 uVar17;
  short sVar21;
  undefined8 uVar18;
  
  uVar18 = DAT_003b7d58;
  pbVar8 = DAT_004be774;
  pbVar9 = DAT_004be770;
  puVar11 = DAT_004be760;
  DAT_004be760 = DAT_004be760 + param_1;
  do {
    puVar6 = DAT_004be760;
    uVar5 = *DAT_004be768;
    DAT_004be768 = DAT_004be768 + 1;
    bVar3 = *pbVar9;
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *pbVar8;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,_DAT_003b7d50);
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    sVar16 = (short)uVar17;
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar20 = (short)((ulonglong)uVar17 >> 0x20);
    sVar21 = (short)((ulonglong)uVar17 >> 0x30);
    uVar7 = *DAT_004be778 & 0x80808080;
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar1] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar1] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_004bf7b0)[bVar3] + sVar16))),
                    uVar18);
    uVar17 = psubusw(uVar17,uVar18);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar1] +
                                      (short)(&DAT_004bfbb0)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar16))),
                    uVar18);
    uVar12 = psubusw(uVar12,uVar18);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_004c03b0)[bVar4] + sVar16))),
                    uVar18);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),5);
    uVar12 = psubusw(uVar14,uVar18);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),10);
    puVar10 = puVar11 + 1;
    DAT_004be778 = DAT_004be778 + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar17 >> 0x33),
                        CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> 3,
                                 CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> 3,
                                          (ushort)uVar17 >> 3))) | uVar13 |
               (ulonglong)
               CONCAT61((int6)(((ulonglong)
                                CONCAT41((int)(((ulonglong)
                                                CONCAT21((short)(((ulonglong)(byte)(uVar7 >> 0x18)
                                                                 << 0x38) >> 0x30),
                                                         (char)(uVar7 >> 0x10)) << 0x28) >> 0x20),
                                         (char)(uVar7 >> 8)) << 0x18) >> 0x10),(char)uVar7) << 8 |
               uVar15;
    uVar17 = DAT_003b7d58;
    puVar11 = puVar10;
  } while (puVar10 < puVar6);
  puVar11 = DAT_004be764;
  DAT_004be764 = DAT_004be764 + param_1;
  do {
    puVar6 = DAT_004be764;
    uVar5 = *DAT_004be76c;
    DAT_004be76c = DAT_004be76c + 1;
    bVar3 = *DAT_004be770;
    pbVar8 = DAT_004be770 + 1;
    DAT_004be770 = DAT_004be770 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *DAT_004be774;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,_DAT_003b7d50);
    pbVar9 = DAT_004be774 + 1;
    DAT_004be774 = DAT_004be774 + 2;
    sVar16 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar20 = (short)((ulonglong)uVar18 >> 0x20);
    sVar21 = (short)((ulonglong)uVar18 >> 0x30);
    uVar7 = *DAT_004be77c & 0x80808080;
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar8] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar8] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_004bf7b0)[bVar3] + sVar16))),
                    uVar17);
    uVar18 = psubusw(uVar18,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar8] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar8] +
                                      (short)(&DAT_004bfbb0)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar16))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_004c03b0)[bVar4] + sVar16))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),5);
    uVar12 = psubusw(uVar14,uVar17);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x33),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 3,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 3,
                                              (ushort)uVar12 >> 3))),10);
    puVar10 = puVar11 + 1;
    DAT_004be77c = DAT_004be77c + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar18 >> 0x33),
                        CONCAT24((ushort)((ulonglong)uVar18 >> 0x20) >> 3,
                                 CONCAT22((ushort)((ulonglong)uVar18 >> 0x10) >> 3,
                                          (ushort)uVar18 >> 3))) | uVar13 |
               (ulonglong)
               CONCAT61((int6)(((ulonglong)
                                CONCAT41((int)(((ulonglong)
                                                CONCAT21((short)(((ulonglong)(byte)(uVar7 >> 0x18)
                                                                 << 0x38) >> 0x30),
                                                         (char)(uVar7 >> 0x10)) << 0x28) >> 0x20),
                                         (char)(uVar7 >> 8)) << 0x18) >> 0x10),(char)uVar7) << 8 |
               uVar15;
    puVar11 = puVar10;
  } while (puVar10 < puVar6);
  return;
}

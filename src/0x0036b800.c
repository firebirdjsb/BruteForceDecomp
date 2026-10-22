/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE52757EF04D2A23924B69EC07E83F66D77D3A24418893519F381AD28ECFE511
 * Entry: 0x0036b800, Ghidra index: 13275, label: FUN_0036b800
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
extern uint32_t DAT_004bf7b0;
extern uint32_t DAT_004bfbb0;
extern uint32_t DAT_004bffb0;
extern uint32_t DAT_004c03b0;
extern uint32_t _DAT_003b7d50;
extern uint32_t _DAT_004c07b0;
extern uint32_t _DAT_004c07b8;
extern uint32_t _DAT_004c07c0;
extern uint32_t _DAT_004c07c8;
extern uint32_t _DAT_004c07d0;
extern uint32_t _DAT_004c07d8;
extern uint32_t _PTR_LAB_0010000c_4_003b7d48;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036b800(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined2 uVar16;
  ulonglong uVar15;
  undefined2 uVar17;
  short sVar18;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  short sVar23;
  undefined8 uVar20;
  
  uVar20 = DAT_003b7d58;
  pbVar7 = DAT_004be774;
  pbVar8 = DAT_004be770;
  puVar10 = DAT_004be760;
  DAT_004be760 = DAT_004be760 + param_1 * 2;
  do {
    puVar6 = DAT_004be760;
    uVar5 = *DAT_004be768;
    DAT_004be768 = DAT_004be768 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *pbVar7;
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,_DAT_003b7d50);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar18 = (short)uVar19;
    sVar21 = (short)((ulonglong)uVar19 >> 0x10);
    sVar22 = (short)((ulonglong)uVar19 >> 0x20);
    sVar23 = (short)((ulonglong)uVar19 >> 0x30);
    uVar19 = paddsw(CONCAT26((short)(&DAT_004bf7b0)[*pbVar8] + sVar23,
                             CONCAT24((short)((uint)(&DAT_004bf7b0)[*pbVar1] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_004bf7b0)[*pbVar1] + sVar21,
                                               (short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar18))),uVar20);
    uVar19 = psubusw(uVar19,uVar20);
    uVar13 = paddsw(CONCAT26((short)(&DAT_004bffb0)[*pbVar8] + (short)(&DAT_004bfbb0)[*pbVar7] +
                             sVar23,CONCAT24((short)((uint)(&DAT_004bffb0)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_004bfbb0)[*pbVar2] >> 0x10) +
                                             sVar22,CONCAT22((short)(&DAT_004bffb0)[*pbVar1] +
                                                             (short)(&DAT_004bfbb0)[*pbVar2] +
                                                             sVar21,(short)((uint)(&DAT_004bffb0)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_004bfbb0)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar18))),uVar20);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_004c07c8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_004c07c8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_004c07c8,
                                              (ushort)uVar19 >> _DAT_004c07c8))),_DAT_004c07b0);
    uVar19 = psubusw(uVar13,uVar20);
    uVar13 = paddsw(CONCAT26((short)(&DAT_004c03b0)[*pbVar7] + sVar23,
                             CONCAT24((short)((uint)(&DAT_004c03b0)[*pbVar2] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_004c03b0)[*pbVar2] + sVar21,
                                               (short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar18))),uVar20);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_004c07d0,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_004c07d0,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_004c07d0,
                                              (ushort)uVar19 >> _DAT_004c07d0))),_DAT_004c07b8);
    uVar19 = psubusw(uVar13,uVar20);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_004c07d8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_004c07d8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_004c07d8,
                                              (ushort)uVar19 >> _DAT_004c07d8))),_DAT_004c07c0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    uVar19 = DAT_003b7d58;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_004be764;
  DAT_004be764 = DAT_004be764 + param_1 * 2;
  do {
    puVar6 = DAT_004be764;
    uVar5 = *DAT_004be76c;
    DAT_004be76c = DAT_004be76c + 1;
    bVar3 = *DAT_004be770;
    pbVar7 = DAT_004be770 + 1;
    DAT_004be770 = DAT_004be770 + 2;
    uVar20 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *DAT_004be774;
    uVar20 = psllw(uVar20,2);
    uVar20 = pmulhw(uVar20,_DAT_003b7d50);
    pbVar8 = DAT_004be774 + 1;
    DAT_004be774 = DAT_004be774 + 2;
    sVar18 = (short)uVar20;
    sVar21 = (short)((ulonglong)uVar20 >> 0x10);
    sVar22 = (short)((ulonglong)uVar20 >> 0x20);
    sVar23 = (short)((ulonglong)uVar20 >> 0x30);
    uVar20 = paddsw(CONCAT26((short)(&DAT_004bf7b0)[*DAT_004be770] + sVar23,
                             CONCAT24((short)((uint)(&DAT_004bf7b0)[*pbVar7] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_004bf7b0)[*pbVar7] + sVar21,
                                               (short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar18))),uVar19);
    uVar20 = psubusw(uVar20,uVar19);
    uVar13 = paddsw(CONCAT26((short)(&DAT_004bffb0)[*DAT_004be770] +
                             (short)(&DAT_004bfbb0)[*DAT_004be774] + sVar23,
                             CONCAT24((short)((uint)(&DAT_004bffb0)[*pbVar7] >> 0x10) +
                                      (short)((uint)(&DAT_004bfbb0)[*pbVar8] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_004bffb0)[*pbVar7] +
                                               (short)(&DAT_004bfbb0)[*pbVar8] + sVar21,
                                               (short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar18))),uVar19);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_004c07c8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_004c07c8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_004c07c8,
                                              (ushort)uVar20 >> _DAT_004c07c8))),_DAT_004c07b0);
    uVar20 = psubusw(uVar13,uVar19);
    uVar13 = paddsw(CONCAT26((short)(&DAT_004c03b0)[*DAT_004be774] + sVar23,
                             CONCAT24((short)((uint)(&DAT_004c03b0)[*pbVar8] >> 0x10) + sVar22,
                                      CONCAT22((short)(&DAT_004c03b0)[*pbVar8] + sVar21,
                                               (short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar18))),uVar19);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_004c07d0,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_004c07d0,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_004c07d0,
                                              (ushort)uVar20 >> _DAT_004c07d0))),_DAT_004c07b8);
    uVar20 = psubusw(uVar13,uVar19);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_004c07d8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_004c07d8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_004c07d8,
                                              (ushort)uVar20 >> _DAT_004c07d8))),_DAT_004c07c0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

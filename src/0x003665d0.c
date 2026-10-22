/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A5F1E099C39C84345F90014F6A9774E34D64EE5A097AD1C00D6CE467D1A39BF
 * Entry: 0x003665d0, Ghidra index: 13249, label: FUN_003665d0
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

void FUN_003665d0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  short sVar14;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar16;
  
  uVar16 = DAT_003b7d58;
  pbVar7 = DAT_004be774;
  pbVar8 = DAT_004be770;
  puVar10 = DAT_004be760;
  DAT_004be760 = DAT_004be760 + param_1 * 2;
  do {
    uVar5 = *DAT_004be768;
    DAT_004be768 = DAT_004be768 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *pbVar7;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,_DAT_003b7d50);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar14 = (short)uVar15;
    sVar17 = (short)((ulonglong)uVar15 >> 0x10);
    sVar18 = (short)((ulonglong)uVar15 >> 0x20);
    sVar19 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar1] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar1] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_004bf7b0)[bVar3] + sVar14))),
                    uVar16);
    uVar15 = psubusw(uVar15,uVar16);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar1] +
                                      (short)(&DAT_004bfbb0)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar14))),
                    uVar16);
    uVar11 = psubusw(uVar11,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_004c03b0)[bVar4] + sVar14))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar5 = *DAT_004be778;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar15 >> 0x10),(int)uVar15) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_004be760;
    DAT_004be778 = DAT_004be778 + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar15 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar15 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    uVar15 = DAT_003b7d58;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_004be764;
  DAT_004be764 = DAT_004be764 + param_1 * 2;
  do {
    uVar5 = *DAT_004be76c;
    DAT_004be76c = DAT_004be76c + 1;
    bVar3 = *DAT_004be770;
    pbVar7 = DAT_004be770 + 1;
    DAT_004be770 = DAT_004be770 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *DAT_004be774;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,_DAT_003b7d50);
    pbVar8 = DAT_004be774 + 1;
    DAT_004be774 = DAT_004be774 + 2;
    sVar14 = (short)uVar16;
    sVar17 = (short)((ulonglong)uVar16 >> 0x10);
    sVar18 = (short)((ulonglong)uVar16 >> 0x20);
    sVar19 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar7] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar7] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_004bf7b0)[bVar3] + sVar14))),
                    uVar15);
    uVar16 = psubusw(uVar16,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar7] +
                                      (short)(&DAT_004bfbb0)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar14))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_004c03b0)[bVar4] + sVar14))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    uVar5 = *DAT_004be77c;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_004be764;
    DAT_004be77c = DAT_004be77c + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar16 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar16 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

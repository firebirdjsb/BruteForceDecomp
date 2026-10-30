/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCCBB9C38B94B076E6176DE9940B51603E0BB4A5371DE02419E3BFD36D02A039
 * Entry: 0x003650e0, Ghidra index: 13241, label: FUN_003650e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_mmx_byte_lanes.h"
/* Two verified original x86 MOVD/PUNPCKLBW byte-unpack operations;
 * do not emulate them with host-width int5/uint7 Ghidra CONCAT casts. */
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
extern uint32_t _PTR_LAB_0010000c_4_003b7d48;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003650e0(int param_1)

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
  short sVar13;
  short sVar16;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  undefined8 uVar15;
  
  uVar15 = DAT_003b7d58;
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
    uVar14 = psubusw(bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5),
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *pbVar7;
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,_DAT_003b7d50);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar13 = (short)uVar14;
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar1] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar1] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_004bf7b0)[bVar3] + sVar13))),
                    uVar15);
    uVar14 = psubusw(uVar14,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar1] +
                                      (short)(&DAT_004bfbb0)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar13))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_004c03b0)[bVar4] + sVar13))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar14 >> 0x10),(int)uVar14) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10);
    puVar6 = DAT_004be760;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar14 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar14 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    uVar14 = DAT_003b7d58;
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
    uVar15 = psubusw(bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5),
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *DAT_004be774;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,_DAT_003b7d50);
    pbVar8 = DAT_004be774 + 1;
    DAT_004be774 = DAT_004be774 + 2;
    sVar13 = (short)uVar15;
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar17 = (short)((ulonglong)uVar15 >> 0x20);
    sVar18 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar7] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar7] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_004bf7b0)[bVar3] + sVar13))),
                    uVar14);
    uVar15 = psubusw(uVar15,uVar14);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar7] +
                                      (short)(&DAT_004bfbb0)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar13))),
                    uVar14);
    uVar11 = psubusw(uVar11,uVar14);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_004c03b0)[bVar4] + sVar13))),
                    uVar14);
    uVar12 = psubusw(uVar12,uVar14);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar15 >> 0x10),(int)uVar15) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10);
    puVar6 = DAT_004be764;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar15 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar15 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

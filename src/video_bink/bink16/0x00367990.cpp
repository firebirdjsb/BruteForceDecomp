/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D2BCAE76F5ED0245CC9E4FC5791CEA497810DE0170638E9498480039236BD1B
 * Entry: 0x00367990, Ghidra index: 13254, label: FUN_00367990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_mmx_byte_lanes.h"
/* XBE-confirmed MOVD/PXOR/PUNPCKLBW zero-extends four packed guest bytes
 * into independent 16-bit MMX lanes, twice in this source function. */
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

void FUN_00367990(int param_1)

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
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_003b7d58;
  pbVar7 = DAT_004be774;
  pbVar8 = DAT_004be770;
  puVar10 = DAT_004be760;
  DAT_004be760 = DAT_004be760 + param_1;
  do {
    puVar6 = DAT_004be760;
    uVar5 = *DAT_004be768;
    DAT_004be768 = DAT_004be768 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw(bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5),
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,_DAT_003b7d50);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_004bf7b0)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar1] +
                                      (short)(&DAT_004bfbb0)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar15))),
                    uVar17);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_004c07c8,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_004c07c8,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_004c07c8,
                                              (ushort)uVar16 >> _DAT_004c07c8))),_DAT_004c07b0);
    uVar16 = psubusw(uVar12,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_004c03b0)[bVar4] + sVar15))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_004c07d0,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_004c07d0,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_004c07d0,
                                              (ushort)uVar16 >> _DAT_004c07d0))),_DAT_004c07b8);
    uVar16 = psubusw(uVar12,uVar17);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar16 >> 0x30) >> _DAT_004c07d8,
                            CONCAT24((ushort)((ulonglong)uVar16 >> 0x20) >> _DAT_004c07d8,
                                     CONCAT22((ushort)((ulonglong)uVar16 >> 0x10) >> _DAT_004c07d8,
                                              (ushort)uVar16 >> _DAT_004c07d8))),_DAT_004c07c0);
    puVar9 = puVar10 + 1;
    *puVar10 = uVar11 | uVar13 | uVar14;
    uVar16 = DAT_003b7d58;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_004be764;
  DAT_004be764 = DAT_004be764 + param_1;
  do {
    puVar6 = DAT_004be764;
    uVar5 = *DAT_004be76c;
    DAT_004be76c = DAT_004be76c + 1;
    bVar3 = *DAT_004be770;
    pbVar7 = DAT_004be770 + 1;
    DAT_004be770 = DAT_004be770 + 2;
    uVar17 = psubusw(bf_x86_unpack_u32_bytes_to_u16_lanes((uint32_t)uVar5),
                     _PTR_LAB_0010000c_4_003b7d48);
    bVar4 = *DAT_004be774;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,_DAT_003b7d50);
    pbVar8 = DAT_004be774 + 1;
    DAT_004be774 = DAT_004be774 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_004bf7b0)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004bf7b0)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004bf7b0)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_004bf7b0)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004bffb0)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_004bfbb0)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004bffb0)[*pbVar7] +
                                      (short)(&DAT_004bfbb0)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004bffb0)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_004bfbb0)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_004bffb0)[bVar3] +
                                                      (short)(&DAT_004bfbb0)[bVar4] + sVar15))),
                    uVar16);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_004c07c8,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_004c07c8,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_004c07c8,
                                              (ushort)uVar17 >> _DAT_004c07c8))),_DAT_004c07b0);
    uVar17 = psubusw(uVar12,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_004c03b0)[*pbVar8] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_004c03b0)[*pbVar8] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_004c03b0)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_004c03b0)[bVar4] + sVar15))),
                    uVar16);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_004c07d0,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_004c07d0,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_004c07d0,
                                              (ushort)uVar17 >> _DAT_004c07d0))),_DAT_004c07b8);
    uVar17 = psubusw(uVar12,uVar16);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar17 >> 0x30) >> _DAT_004c07d8,
                            CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> _DAT_004c07d8,
                                     CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> _DAT_004c07d8,
                                              (ushort)uVar17 >> _DAT_004c07d8))),_DAT_004c07c0);
    puVar9 = puVar10 + 1;
    *puVar10 = uVar11 | uVar13 | uVar14;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

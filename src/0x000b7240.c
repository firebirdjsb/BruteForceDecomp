/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD6D65348AFB8BEFDF034AEE3DFE2B4C026BEB50568A9831F3627844B67608AE
 * Entry: 0x000b7240, Ghidra index: 2203, label: FUN_000b7240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
void FUN_000b7240(void)

{
  int *piVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int *unaff_ESI;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  piVar1 = unaff_ESI + 0xb;
  (**(code **)(*unaff_ESI + 4))
            (piVar1,unaff_ESI[0x25],unaff_ESI[0x29],unaff_ESI[0x1e],unaff_ESI[0x1f],0xff,1,1,
             unaff_ESI[0x33],0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  iVar4 = unaff_ESI[0x34];
  uVar21 = 0;
  fVar9 = (float)unaff_ESI[0x1f] + (float)unaff_ESI[0x31];
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0x3f800000;
  uVar17 = 0x3f800000;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  iVar3 = unaff_ESI[0x29];
  uVar12 = 1;
  uVar11 = 1;
  uVar10 = 0xff;
  fVar8 = (float)unaff_ESI[0x22] + (float)unaff_ESI[0x30] + (float)unaff_ESI[0x1e];
  fVar2 = (float10)FUN_000b70f0(unaff_ESI);
  fVar6 = (float)fVar2;
  piVar5 = piVar1;
  (**(code **)(extraout_EDX + 4))
            (piVar1,fVar6,iVar3,fVar8,fVar9,uVar10,uVar11,uVar12,iVar4,uVar13,uVar14,uVar15,uVar16,
             uVar17,uVar18,uVar19,uVar20,uVar21);
  fVar9 = (float)unaff_ESI[0x1e];
  iVar4 = unaff_ESI[0x35];
  iVar3 = unaff_ESI[0x1f];
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0x3f800000;
  uVar17 = 0x3f800000;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 1;
  uVar11 = 1;
  uVar10 = 0xff;
  iVar7 = iVar3;
  fVar2 = (float10)FUN_000b70f0(unaff_ESI);
  (**(code **)(extraout_EDX_00 + 4))
            (piVar1,unaff_ESI[0x26],unaff_ESI[0x29],
             (float)(fVar2 + (float10)(float)unaff_ESI[0x22] + (float10)(float)unaff_ESI[0x30] +
                    (float10)fVar9),iVar3,uVar10,uVar11,uVar12,iVar4,uVar13,uVar14,uVar15,uVar16,
             uVar17,uVar18,uVar19,uVar20,uVar21,piVar5,fVar6,iVar7);
  if ((DAT_004a5c7c & 1) == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    bf_x86_word_store_byte(&DAT_004a5c78,0U,UINT8_C(0xff));
    bf_x86_word_store_byte(&DAT_004a5c78,1U,UINT8_C(0xff));
    bf_x86_word_store_byte(&DAT_004a5c78,2U,UINT8_C(0xff));
    bf_x86_word_store_byte(&DAT_004a5c78,3U,UINT8_C(0xff));
  }
  (**(code **)(*unaff_ESI + 4))
            (&DAT_004a5c78,0x41800000,0x41800000,unaff_ESI[0x27],unaff_ESI[0x28],0xff,1,1,
             unaff_ESI[0x32],0,0,0,0,0x3f800000,0x3f800000,0,0,0);
  return;
}

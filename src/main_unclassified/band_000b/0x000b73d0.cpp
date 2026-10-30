/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98C93FC8B3B55574ABD328303083ECC8627B37F51A3A1EF1B4F14DD55118660F
 * Entry: 0x000b73d0, Ghidra index: 2204, label: FUN_000b73d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b7050(int param_1);
extern float10 FUN_000b70a0(int param_1);

void FUN_000b73d0(void)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  int *unaff_ESI;
  float10 fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)FUN_000b7050(unaff_ESI);
  local_4 = (float)fVar1;
  local_14 = (float)unaff_ESI[0x1e];
  local_10 = (float)unaff_ESI[0x1e] + (float)unaff_ESI[0x22];
  fVar1 = (float10)FUN_000b7050(unaff_ESI);
  local_14 = (float)(fVar1 + (float10)(float)unaff_ESI[0x22] + (float10)local_14);
  fVar1 = (float10)FUN_000b70a0(unaff_ESI);
  if ((float10)local_14 < fVar1 + (float10)local_10) {
    local_14 = (float)unaff_ESI[0x1f];
    local_10 = (float)unaff_ESI[0x1e];
    fVar1 = (float10)FUN_000b7050(unaff_ESI);
    local_c = (float)(fVar1 + (float10)(float)unaff_ESI[0x22] + (float10)local_10);
    local_10 = (float)unaff_ESI[0x1e];
    fVar1 = (float10)FUN_000b7050(unaff_ESI);
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0x3f800000;
    uVar13 = 0x3f800000;
    uVar12 = 0;
    local_10 = (float)(fVar1 + (float10)(float)unaff_ESI[0x22] + (float10)local_10);
    local_8 = (float)unaff_ESI[0x1e] + (float)unaff_ESI[0x22];
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 1;
    fVar4 = local_14 + (float)unaff_ESI[0x24];
    uVar6 = 1;
    uVar5 = 0xff;
    iVar2 = unaff_ESI[0x2a];
    fVar3 = local_c;
    uVar8 = extraout_ECX;
    fVar1 = (float10)FUN_000b70a0(unaff_ESI);
    (**(code **)(extraout_EDX + 4))
              ((int)unaff_ESI + 0x55,(float)((fVar1 - (float10)local_10) + (float10)local_8),iVar2,
               fVar3,fVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
               uVar16,uVar17);
  }
  local_18 = *(undefined4 *)((int)unaff_ESI + 0x51);
  unaff_ESI[5] = unaff_ESI[0x13];
  if ((float)unaff_ESI[0x2d] < (float)unaff_ESI[0x12]) {
    fVar4 = (float)unaff_ESI[0x12] - (float)unaff_ESI[0x2d];
    if ((float)unaff_ESI[0x2c] < fVar4) {
      do {
        fVar4 = fVar4 - (float)unaff_ESI[0x2c];
      } while ((float)unaff_ESI[0x2c] < fVar4);
    }
    if ((float)unaff_ESI[0x2c] * 0.5 < ABS(fVar4 - (float)unaff_ESI[0x2c]) !=
        ((float)unaff_ESI[0x2c] * 0.5 == ABS(fVar4 - (float)unaff_ESI[0x2c]))) {
      local_18 = *(undefined4 *)((int)unaff_ESI + 0x59);
    }
  }
  (**(code **)(*unaff_ESI + 4))
            (&local_18,local_4,unaff_ESI[0x2a],(float)unaff_ESI[0x1e] + (float)unaff_ESI[0x22],
             (float)unaff_ESI[0x1f] + (float)unaff_ESI[0x24],0xff,1,1,unaff_ESI[0x36],0,0,0,0,
             0x3f800000,0x3f800000,0,0,0);
  unaff_ESI[5] = 0;
  return;
}

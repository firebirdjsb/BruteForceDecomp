/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AC17C1A77B6A0CEE21757F0ACA123CCC5E27D51F45DA51A6D9E647D1B145D44
 * Entry: 0x00166c60, Ghidra index: 4726, label: FUN_00166c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f4f4;
extern uint32_t DAT_0041f4f8;
extern uint32_t DAT_0041f4fc;
extern uint32_t DAT_0041f500;
extern uint32_t DAT_0041f504;
extern uint32_t DAT_0041f508;
extern uint32_t DAT_0041f50c;
extern uint32_t DAT_0041f600;
extern uint32_t DAT_0041f604;
extern uint32_t DAT_0041f608;
extern uint32_t DAT_0041f60c;
extern uint32_t DAT_0041f610;
extern uint32_t DAT_0041f614;
extern uint32_t DAT_0041f620;
extern uint32_t DAT_0041f630;
extern uint32_t DAT_0046d2b4;
extern uint32_t DAT_0046d2b8;
extern uint32_t DAT_0046d2bc;
/* Original x86 entry 0x00166C60: twelve absolute memory operands below
 * are each read by D8 0D <guest VA>, FMUL m32fp, at 0x0016748A..0x00167570.
 * These are 4-byte IEEE-754 scalar operands, not pointers. Correct only
 * these twelve source declarations; the remaining global storage and
 * full guest x87/control-word/linkage contracts are ABI_UNVERIFIED. */
extern float _DAT_0041f570;
extern float _DAT_0041f574;
extern float _DAT_0041f578;
extern float _DAT_0041f5b0;
extern float _DAT_0041f5b4;
extern float _DAT_0041f5bc;
extern float _DAT_0041f5d0;
extern float _DAT_0041f5d8;
extern float _DAT_0041f5dc;
extern float _DAT_0041f5e4;
extern float _DAT_0041f5e8;
extern float _DAT_0041f5ec;
/* Four x87 result stores are D9 1D <guest VA> (FSTP m32fp) at
 * 0x001674B8, 0x001674F8, 0x00167538 and 0x00167578.
 * Their original 4-byte float words must not undergo C float->uint
 * numeric conversion. Host storage binding and x87 behavior unverified. */
extern float _DAT_0041f5f0;
extern float _DAT_0041f5f4;
extern float _DAT_0041f5f8;
extern float _DAT_0041f5fc;
extern uint32_t _DAT_0041f618;
extern uint32_t _DAT_0041f61c;
extern uint32_t _DAT_0041f624;
extern uint32_t _DAT_0041f62c;
extern uint32_t _DAT_0041f634;
extern uint32_t _DAT_0041f638;
extern uint32_t _DAT_0046d2c0;
extern uint32_t _DAT_0046d2c4;
extern uint32_t _DAT_0046d2c8;
extern uint32_t _DAT_0046d2cc;
extern uint32_t _DAT_0046d2d0;
extern uint32_t _DAT_0046d2d4;
extern uint32_t _DAT_0046d2d8;
extern uint32_t _DAT_0046d2dc;
extern uint32_t _DAT_0046d2e0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00166c60(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  uint uVar19;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_c;
  float *local_8;
  
  uVar19 = DAT_0041f4fc;
  iVar9 = DAT_0041f4f8;
  if ((DAT_0041f4fc & 1) != 0) {
    fVar3 = DAT_0046d2b4 * (&DAT_0046d2b4)[DAT_0041f4f8 * 3] +
            DAT_0046d2bc * (&DAT_0046d2bc)[DAT_0041f4f8 * 3] +
            DAT_0046d2b8 * (&DAT_0046d2b8)[DAT_0041f4f8 * 3];
    (&DAT_0041f600)[DAT_0041f4f8] = fVar3;
    (&DAT_0041f600)[iVar9 * 4] = fVar3;
  }
  if ((uVar19 & 2) != 0) {
    fVar3 = _DAT_0046d2c0 * (&DAT_0046d2b4)[iVar9 * 3] +
            _DAT_0046d2c8 * (&DAT_0046d2bc)[iVar9 * 3] + _DAT_0046d2c4 * (&DAT_0046d2b8)[iVar9 * 3];
    (&DAT_0041f610)[iVar9] = fVar3;
    (&DAT_0041f604)[iVar9 * 4] = fVar3;
  }
  if ((uVar19 & 4) != 0) {
    fVar3 = _DAT_0046d2cc * (&DAT_0046d2b4)[iVar9 * 3] +
            _DAT_0046d2d4 * (&DAT_0046d2bc)[iVar9 * 3] + _DAT_0046d2d0 * (&DAT_0046d2b8)[iVar9 * 3];
    (&DAT_0041f620)[iVar9] = fVar3;
    (&DAT_0041f608)[iVar9 * 4] = fVar3;
  }
  if ((uVar19 & 8) != 0) {
    fVar3 = _DAT_0046d2d8 * (&DAT_0046d2b4)[iVar9 * 3] +
            _DAT_0046d2e0 * (&DAT_0046d2bc)[iVar9 * 3] + _DAT_0046d2dc * (&DAT_0046d2b8)[iVar9 * 3];
    (&DAT_0041f630)[iVar9] = fVar3;
    (&DAT_0041f60c)[iVar9 * 4] = fVar3;
  }
  uVar17 = DAT_0041f4f4;
  fVar3 = (&DAT_0046d2bc)[iVar9 * 3];
  fVar4 = (&DAT_0046d2bc)[iVar9 * 3];
  fVar5 = (&DAT_0046d2b8)[iVar9 * 3];
  fVar6 = (&DAT_0046d2b8)[iVar9 * 3];
  *(undefined4 *)(&DAT_0041f500 + (iVar9 + DAT_0041f4f4 * 4) * 4) = 0x3f800000;
  uVar15 = 0;
  local_20 = &DAT_0041f600;
  local_8 = &DAT_0041f604;
  fVar3 = (&DAT_0046d2b4)[iVar9 * 3] * (&DAT_0046d2b4)[iVar9 * 3] + fVar5 * fVar6 + fVar3 * fVar4;
  (&DAT_0041f600)[iVar9 * 5] = fVar3;
  local_1c = &DAT_0041f600 + iVar9;
  do {
    uVar11 = 1 << ((byte)uVar15 & 0x1f);
    if ((uVar11 & uVar19) != 0) {
      uVar16 = uVar17 | uVar11;
      iVar2 = uVar15 + iVar9 * 4;
      *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4) = fVar3 - (&DAT_0041f600)[iVar2];
      *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4) = *local_20 - *local_1c;
      uVar12 = 0;
      if (0x41f643 < (int)local_8) {
        local_24 = local_8;
        local_14 = &DAT_0041f610 + iVar9;
        local_18 = &DAT_0041f610 + uVar15;
        local_28 = &DAT_0041f614;
        pfVar18 = &DAT_0041f604 + iVar9 * 4;
        uVar19 = uVar12;
        do {
          bVar13 = (byte)uVar19;
          uVar17 = 1 << (bVar13 & 0x1f);
          if ((DAT_0041f4fc & uVar17) != 0) {
            uVar12 = uVar17 | uVar16;
            *(float *)(&DAT_0041f500 + (uVar19 + uVar12 * 4) * 4) =
                 ((&DAT_0041f600)[iVar2] - pfVar18[-1]) *
                 *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4) +
                 (*local_20 - local_24[-1]) * *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4);
            iVar14 = (DAT_0041f4f4 | uVar17) * 4;
            *(float *)(&DAT_0041f500 + (uVar15 + uVar12 * 4) * 4) =
                 (pfVar18[-1] - (&DAT_0041f600)[iVar2]) *
                 *(float *)(&DAT_0041f500 + (iVar14 + iVar9) * 4) +
                 (local_28[-5] - local_18[-4]) * *(float *)(&DAT_0041f500 + (iVar14 + uVar19) * 4);
            iVar14 = (uVar17 | uVar11) * 4;
            *(float *)(&DAT_0041f500 + (iVar9 + uVar12 * 4) * 4) =
                 (local_24[-1] - *local_1c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar15) * 4) +
                 (local_28[-5] - local_14[-4]) * *(float *)(&DAT_0041f500 + (iVar14 + uVar19) * 4);
          }
          uVar17 = 1 << (bVar13 + 1 & 0x1f);
          if ((DAT_0041f4fc & uVar17) != 0) {
            uVar12 = uVar17 | uVar16;
            *(float *)(&DAT_0041f504 + (uVar19 + uVar12 * 4) * 4) =
                 ((&DAT_0041f600)[iVar2] - *pfVar18) *
                 *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4) +
                 (*local_20 - *local_24) * *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4);
            iVar14 = (DAT_0041f4f4 | uVar17) * 4;
            *(float *)(&DAT_0041f500 + (uVar15 + uVar12 * 4) * 4) =
                 (*local_28 - *local_18) * *(float *)(&DAT_0041f504 + (iVar14 + uVar19) * 4) +
                 (*pfVar18 - (&DAT_0041f600)[iVar2]) *
                 *(float *)(&DAT_0041f500 + (iVar14 + iVar9) * 4);
            iVar14 = (uVar17 | uVar11) * 4;
            *(float *)(&DAT_0041f500 + (iVar9 + uVar12 * 4) * 4) =
                 (*local_24 - *local_1c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar15) * 4) +
                 (*local_28 - *local_14) * *(float *)(&DAT_0041f504 + (iVar14 + uVar19) * 4);
          }
          uVar17 = 1 << (bVar13 + 2 & 0x1f);
          if ((DAT_0041f4fc & uVar17) != 0) {
            uVar12 = uVar17 | uVar16;
            *(float *)(&DAT_0041f508 + (uVar19 + uVar12 * 4) * 4) =
                 ((&DAT_0041f600)[iVar2] - pfVar18[1]) *
                 *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4) +
                 (*local_20 - local_24[1]) * *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4);
            iVar14 = (DAT_0041f4f4 | uVar17) * 4;
            *(float *)(&DAT_0041f500 + (uVar15 + uVar12 * 4) * 4) =
                 (pfVar18[1] - (&DAT_0041f600)[iVar2]) *
                 *(float *)(&DAT_0041f500 + (iVar14 + iVar9) * 4) +
                 (local_28[5] - local_18[4]) * *(float *)(&DAT_0041f508 + (iVar14 + uVar19) * 4);
            iVar14 = (uVar17 | uVar11) * 4;
            *(float *)(&DAT_0041f500 + (iVar9 + uVar12 * 4) * 4) =
                 (local_24[1] - *local_1c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar15) * 4) +
                 (local_28[5] - local_14[4]) * *(float *)(&DAT_0041f508 + (iVar14 + uVar19) * 4);
          }
          uVar17 = 1 << (bVar13 + 3 & 0x1f);
          if ((DAT_0041f4fc & uVar17) != 0) {
            uVar12 = uVar17 | uVar16;
            *(float *)(&DAT_0041f50c + (uVar19 + uVar12 * 4) * 4) =
                 ((&DAT_0041f600)[iVar2] - pfVar18[2]) *
                 *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4) +
                 (*local_20 - local_24[2]) * *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4);
            iVar14 = (DAT_0041f4f4 | uVar17) * 4;
            *(float *)(&DAT_0041f500 + (uVar15 + uVar12 * 4) * 4) =
                 (pfVar18[2] - (&DAT_0041f600)[iVar2]) *
                 *(float *)(&DAT_0041f500 + (iVar14 + iVar9) * 4) +
                 (local_28[10] - local_18[8]) * *(float *)(&DAT_0041f50c + (iVar14 + uVar19) * 4);
            iVar14 = (uVar17 | uVar11) * 4;
            *(float *)(&DAT_0041f500 + (iVar9 + uVar12 * 4) * 4) =
                 (local_24[2] - *local_1c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar15) * 4) +
                 (local_28[10] - local_14[8]) * *(float *)(&DAT_0041f50c + (iVar14 + uVar19) * 4);
          }
          local_28 = local_28 + 0x14;
          local_18 = local_18 + 0x10;
          local_14 = local_14 + 0x10;
          local_24 = local_24 + 4;
          uVar12 = uVar19 + 4;
          uVar1 = uVar19 + 7;
          pfVar18 = pfVar18 + 4;
          uVar19 = uVar12;
          uVar17 = DAT_0041f4f4;
        } while (uVar1 < uVar15);
      }
      uVar19 = DAT_0041f4fc;
      if (uVar12 < uVar15) {
        local_14 = &DAT_0041f600 + uVar12 * 5;
        local_24 = &DAT_0041f600 + uVar12 + uVar15 * 4;
        local_18 = &DAT_0041f600 + uVar12 + iVar9 * 4;
        local_c = &DAT_0041f600 + iVar9 + uVar12 * 4;
        local_28 = &DAT_0041f600 + uVar15 + uVar12 * 4;
        do {
          uVar19 = 1 << ((byte)uVar12 & 0x1f);
          if ((DAT_0041f4fc & uVar19) != 0) {
            uVar17 = uVar19 | uVar16;
            *(float *)(&DAT_0041f500 + (uVar12 + uVar17 * 4) * 4) =
                 (*local_20 - *local_24) * *(float *)(&DAT_0041f500 + (uVar15 + uVar16 * 4) * 4) +
                 ((&DAT_0041f600)[iVar2] - *local_18) *
                 *(float *)(&DAT_0041f500 + (iVar9 + uVar16 * 4) * 4);
            iVar14 = (DAT_0041f4f4 | uVar19) * 4;
            *(float *)(&DAT_0041f500 + (uVar15 + uVar17 * 4) * 4) =
                 (*local_14 - *local_28) * *(float *)(&DAT_0041f500 + (iVar14 + uVar12) * 4) +
                 (*local_18 - (&DAT_0041f600)[iVar2]) *
                 *(float *)(&DAT_0041f500 + (iVar14 + iVar9) * 4);
            iVar14 = (uVar19 | uVar11) * 4;
            *(float *)(&DAT_0041f500 + (iVar9 + uVar17 * 4) * 4) =
                 (*local_24 - *local_1c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar15) * 4) +
                 (*local_14 - *local_c) * *(float *)(&DAT_0041f500 + (iVar14 + uVar12) * 4);
          }
          local_14 = local_14 + 5;
          local_28 = local_28 + 4;
          local_c = local_c + 4;
          local_18 = local_18 + 1;
          uVar12 = uVar12 + 1;
          local_24 = local_24 + 1;
          uVar19 = DAT_0041f4fc;
          uVar17 = DAT_0041f4f4;
        } while (uVar12 < uVar15);
      }
    }
    local_8 = local_8 + 4;
    local_20 = local_20 + 5;
    uVar15 = uVar15 + 1;
    local_1c = local_1c + 4;
  } while (uVar15 < 4);
  uVar15 = uVar19;
  if ((uVar17 | uVar19) == 0xf) {
    _DAT_0041f5f0 =
         (DAT_0041f614 - DAT_0041f610) * _DAT_0041f5e4 +
         (_DAT_0041f624 - DAT_0041f620) * _DAT_0041f5e8 +
         (_DAT_0041f634 - DAT_0041f630) * _DAT_0041f5ec;
    _DAT_0041f5f4 =
         (DAT_0041f620 - _DAT_0041f624) * _DAT_0041f5d8 +
         (DAT_0041f630 - _DAT_0041f634) * _DAT_0041f5dc +
         (DAT_0041f600 - DAT_0041f604) * _DAT_0041f5d0;
    _DAT_0041f5f8 =
         (DAT_0041f630 - _DAT_0041f638) * _DAT_0041f5bc +
         (DAT_0041f610 - _DAT_0041f618) * _DAT_0041f5b4 +
         (DAT_0041f600 - DAT_0041f608) * _DAT_0041f5b0;
    _DAT_0041f5fc =
         (DAT_0041f620 - _DAT_0041f62c) * _DAT_0041f578 +
         (DAT_0041f610 - _DAT_0041f61c) * _DAT_0041f574 +
         (DAT_0041f600 - DAT_0041f60c) * _DAT_0041f570;
  }
  while( true ) {
    if (uVar15 == 0) {
      cVar10 = FUN_00166ad0();
      if (cVar10 != '\0') {
        uVar7 = (&DAT_0046d2bc)[iVar9 * 3];
        uVar8 = (&DAT_0046d2b8)[iVar9 * 3];
        *param_1 = (&DAT_0046d2b4)[iVar9 * 3];
        DAT_0041f4fc = uVar17;
        param_1[1] = uVar8;
        param_1[2] = uVar7;
        return 1;
      }
      return 0;
    }
    if (((uVar19 & uVar15) == uVar15) && (cVar10 = FUN_00166ad0(), cVar10 != '\0')) break;
    uVar15 = uVar15 - 1;
  }
  DAT_0041f4fc = uVar17 | uVar15;
  FUN_00166b30();
  return 1;
}

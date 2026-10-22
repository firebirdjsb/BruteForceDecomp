/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F897A7393CF94B9D03F1F4EC75B990F7D361EDC87A74B250D3114BDAB429FE5
 * Entry: 0x00212430, Ghidra index: 7439, label: FUN_00212430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a7128;
extern uint32_t _DAT_0040706c;
extern uint32_t _DAT_00407070;
extern uint32_t _DAT_00407074;
extern uint32_t _DAT_00407078;
extern uint32_t *_DAT_0040707c;
extern uint32_t _DAT_004a7120;
extern uint32_t _DAT_004a7124;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00212430(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int extraout_ECX;
  float10 fVar6;
  undefined4 local_4;
  
  FUN_00210b90(param_1);
  if ((DAT_004a7128 & 1) == 0) {
    DAT_004a7128 = DAT_004a7128 | 1;
    _DAT_004a7124 = 1.0 - _DAT_00407070;
  }
  if ((DAT_004a7128 & 2) == 0) {
    DAT_004a7128 = DAT_004a7128 | 2;
    _DAT_004a7120 = 1.0 - _DAT_0040706c;
  }
  iVar1 = *(int *)(extraout_ECX + 4);
  if (iVar1 == 0) {
    param_1 = *(float *)(extraout_ECX + 0x10) / *(float *)(extraout_ECX + 8);
    if (_DAT_00407070 <= param_1) {
      fVar5 = (param_1 - _DAT_00407070) / _DAT_004a7124;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar5 = (fVar5 - 1.0) * (fVar5 - 1.0);
      param_1 = 1.0;
      fVar2 = (1.0 - fVar5) * *(float *)(extraout_ECX + 0x1c) * _DAT_0040707c;
    }
    else {
      param_1 = param_1 / _DAT_00407070;
      if (1.0 <= param_1) {
        param_1 = 1.0;
      }
      fVar5 = 1.0;
      fVar2 = 0.0;
      param_1 = param_1 * param_1;
    }
    *(float *)(extraout_ECX + 0x2c) = fVar2;
    *(float *)(extraout_ECX + 0x38) = fVar2;
    if (*(char *)(extraout_ECX + 0x20) == '\0') {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0x3f666666;
    }
    *(undefined4 *)(extraout_ECX + 0x44) = uVar4;
    *(undefined4 *)(extraout_ECX + 0x48) = 0x3f800000;
    *(undefined4 *)(extraout_ECX + 0x4c) = 0x3f800000;
    *(float *)(extraout_ECX + 0x50) = param_1;
    *(float *)(extraout_ECX + 0x14) = fVar5;
    *(float *)(extraout_ECX + 0x18) = fVar5;
    *(undefined4 *)(extraout_ECX + 0x30) = 0;
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
    *(undefined4 *)(extraout_ECX + 0x34) = 0;
    *(undefined4 *)(extraout_ECX + 0x40) = 0;
  }
  else {
    if (iVar1 == 1) {
      fVar6 = (float10)fsin((float10)2.5 * (float10)*(float *)(extraout_ECX + 0x10));
      fVar6 = (float10)_DAT_0040707c * (float10)*(float *)(extraout_ECX + 0x1c) +
              fVar6 * (float10)_DAT_00407078;
      *(float *)(extraout_ECX + 0x2c) = (float)fVar6;
      *(float *)(extraout_ECX + 0x38) = (float)fVar6;
      if (*(char *)(extraout_ECX + 0x20) == '\0') {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0x3f666666;
      }
      *(undefined4 *)(extraout_ECX + 0x44) = uVar4;
      *(undefined4 *)(extraout_ECX + 0x48) = 0x3f800000;
      *(undefined4 *)(extraout_ECX + 0x4c) = 0x3f800000;
      *(undefined4 *)(extraout_ECX + 0x50) = 0x3f800000;
      *(undefined4 *)(extraout_ECX + 0x34) = 0;
      fVar6 = (float10)fsin((float10)*(float *)(extraout_ECX + 0x10) * (float10)5.0);
      *(undefined4 *)(extraout_ECX + 0x40) = 0;
      *(undefined4 *)(extraout_ECX + 0x14) = 0;
      *(undefined4 *)(extraout_ECX + 0x18) = 0;
      fVar6 = (float10)_DAT_00407074 * (float10)*(float *)(extraout_ECX + 0x1c) * fVar6;
      *(float *)(extraout_ECX + 0x30) = (float)fVar6;
      *(float *)(extraout_ECX + 0x3c) = (float)fVar6;
      return;
    }
    if (iVar1 == 2) {
      fVar5 = *(float *)(extraout_ECX + 0x10) / *(float *)(extraout_ECX + 0xc);
      if (_DAT_004a7120 <= fVar5) {
        fVar2 = (fVar5 - _DAT_004a7120) / _DAT_0040706c;
        if (1.0 <= fVar2) {
          fVar2 = 1.0;
        }
        local_4 = 0.0;
        fVar5 = 1.0;
        param_1 = (fVar2 - 1.0) * (fVar2 - 1.0);
        fVar3 = 0.0;
        fVar2 = 0.0;
      }
      else {
        fVar5 = fVar5 / _DAT_004a7120;
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        fVar5 = fVar5 * fVar5;
        local_4 = 1.0 - fVar5;
        fVar2 = local_4 * *(float *)(extraout_ECX + 0x2c);
        fVar3 = local_4 * *(float *)(extraout_ECX + 0x30);
        param_1 = 1.0;
        local_4 = local_4 * *(float *)(extraout_ECX + 0x34);
      }
      *(float *)(extraout_ECX + 0x40) = local_4;
      *(float *)(extraout_ECX + 0x38) = fVar2;
      *(float *)(extraout_ECX + 0x3c) = fVar3;
      if (*(char *)(extraout_ECX + 0x20) == '\0') {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0x3f666666;
      }
      *(undefined4 *)(extraout_ECX + 0x44) = uVar4;
      *(undefined4 *)(extraout_ECX + 0x48) = 0x3f800000;
      *(undefined4 *)(extraout_ECX + 0x4c) = 0x3f800000;
      *(float *)(extraout_ECX + 0x50) = param_1;
      *(float *)(extraout_ECX + 0x14) = fVar5;
      *(float *)(extraout_ECX + 0x18) = fVar5;
      return;
    }
  }
  return;
}

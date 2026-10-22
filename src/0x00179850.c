/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1B537F4AA17B0A4A59BEFE456AB52A90852643C8990CC9180D430870ECDD65E
 * Entry: 0x00179850, Ghidra index: 4990, label: FUN_00179850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00179850(undefined4 param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_8c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_c;
  
  FUN_00179b40();
  FUN_00179b40();
  fVar1 = (float10)FUN_00179070();
  fVar2 = (float10)FUN_00179070();
  if ((float10)(float)fVar1 < fVar2) {
    FUN_00179ba0();
    FUN_00179ba0();
  }
  *(undefined4 *)(param_2 + 4) = local_fc;
  *(float *)(param_2 + 8) = local_78 * 0.25 + local_f8 * 0.75;
  *(float *)(param_2 + 0xc) = (float)local_74 * 0.25 + (float)local_f4 * 0.75;
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(float *)(param_2 + 0x10) =
       (float)((ulonglong)local_74 >> 0x20) * 0.25 + (float)((ulonglong)local_f4 >> 0x20) * 0.75;
  *(undefined1 *)(param_2 + 0x3c) = 1;
  *(float *)(param_2 + 0x38) = local_8c * 0.85 + local_c * 0.4;
  if (local_cc != '\0') {
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(undefined4 *)(param_2 + 0x28) = local_d8;
    *(undefined4 *)(param_2 + 0x2c) = local_d4;
    *(undefined4 *)(param_2 + 0x30) = local_d0;
  }
  if (local_b4 != '\0') {
    if (local_34 == '\0') {
      *(undefined1 *)(param_2 + 0x4c) = 1;
      *(float *)(param_2 + 0x48) = local_b8;
    }
    else {
      *(undefined1 *)(param_2 + 0x4c) = 1;
      *(float *)(param_2 + 0x48) = local_b8 * 0.6 + local_38 * 0.4;
    }
  }
  *(undefined1 *)(param_2 + 0x54) = 1;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  if (local_ac != '\0') {
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(float *)(param_2 + 0x50) = local_b0 + 0.1;
    if (local_2c != '\0') {
      *(undefined1 *)(param_2 + 0x54) = 1;
      *(float *)(param_2 + 0x50) = local_30 * 0.2 + *(float *)(param_2 + 0x50);
    }
    fVar3 = *(float *)(param_2 + 0x50);
    if (1.0 <= *(float *)(param_2 + 0x50)) {
      fVar3 = 1.0;
    }
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(float *)(param_2 + 0x50) = fVar3;
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7D4ECBEEB100D2A3E8F842824D1B55854BE8FC4A9CE4EA7847F195109C43A7E
 * Entry: 0x0014b290, Ghidra index: 4312, label: FUN_0014b290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* XBE 0x0014B2C4/0x0014B2F6 passes the second guest stack DWORD unchanged
 * to MOVSS then RCPSS at 0x0014B304. This is an f32 bit pattern, not an
 * integer-to-float conversion. Upper XMM lanes and complete ABI unverified. */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0014b290(int param_1,uint param_2)

{
  int *piVar1;
  float rcp_divisor;
  int *unaff_retaddr;
  undefined1 auStack_58 [4];
  int local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_0014b440();
      local_50 = param_2;
      memcpy(&rcp_divisor, &param_2, sizeof rcp_divisor);
      fStack_40 = _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(rcp_divisor)));
      local_48 = fStack_40 * (local_3c - *(float *)(param_1 + 0x24));
      local_4c = fStack_40 * (local_38 - *(float *)(param_1 + 0x28));
      fStack_40 = fStack_40 * (local_34 - *(float *)(param_1 + 0x2c));
      local_14 = local_3c;
      local_c = local_34;
      local_10 = local_38;
      local_8 = 0;
      local_18 = 0;
      piVar1 = *(int **)(param_1 + 0x20);
      local_44 = local_4c;
      local_30 = local_48;
      local_2c = local_4c;
      fStack_28 = fStack_40;
      local_24 = local_48;
      local_20 = local_4c;
      local_1c = fStack_40;
      (**(code **)(*piVar1 + 0xc4))(&local_54);
      (**(code **)(*unaff_retaddr + 0x34))(1);
      if (local_54 == 0) {
        (**(code **)(*piVar1 + 0xb8))(0x3f800000);
        (**(code **)(*piVar1 + 0xc4))(auStack_58);
      }
      else {
        FUN_002b2e00();
        FUN_002b3c60();
      }
      FUN_002b3bc0(&local_14,&local_24);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

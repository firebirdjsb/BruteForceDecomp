/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEA6B95F825B890B64054B70F36920C8D00D345BE495201B342AFED6631DFD39
 * Entry: 0x00044560, Ghidra index: 532, label: FUN_00044560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00044560(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  bool local_85;
  
  local_85 = false;
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    return false;
  }
  piVar3 = (int *)FUN_00049ca0();
  if (((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0xf4))(), iVar4 == 0)) ||
     (*(int *)(piVar3[3] + 4) != 3)) {
LAB_000446d8:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    cVar2 = FUN_00112800();
    if (cVar2 == '\0') {
      iVar4 = (**(code **)(*piVar3 + 0xf4))();
      if ((iVar4 == 0) ||
         (((cVar2 = FUN_000241e0(), cVar2 == '\0' || (*(int *)(param_1 + 0x518) == 0)) &&
          ((iVar4 = *(int *)(extraout_ECX + 0x44), iVar4 != 0x41 &&
           ((iVar4 != 0x3f && (iVar4 != 0x24)))))))) goto LAB_000446d8;
    }
    else {
      piVar3[0x94] = piVar3[0x94] | 1;
      if (((int *)piVar3[0x93] == (int *)0x0) ||
         (iVar4 = (**(code **)(*(int *)piVar3[0x93] + 0x3c))(), iVar4 != 10)) goto LAB_000446d8;
    }
    fVar1 = *(float *)(param_1 + 0x440) + *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x60) = fVar1;
    if (3.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      FUN_000121c0();
      FUN_00012250();
      iVar4 = *(int *)(param_1 + 0x410);
      piVar3 = (int *)FUN_000161b0();
      local_85 = *piVar3 != iVar4;
      if (local_85) {
        FUN_00012320(0x12);
        FUN_000555f0();
        FUN_0004dff0(param_1);
        FUN_00012440();
      }
      FUN_000121f0();
    }
  }
  if (((*(byte *)(param_1 + 0x16c) & 1) == 0) ||
     (*(float *)(param_1 + 0x168) < 0.0 != (*(float *)(param_1 + 0x168) == 0.0))) {
    *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xf9 | 1;
    FUN_00049cf0(param_1);
    if (0.0 < *(float *)(param_1 + 0x44c) * *(float *)(param_1 + 0x44c) +
              *(float *)(param_1 + 0x448) * *(float *)(param_1 + 0x448) +
              *(float *)(param_1 + 0x444) * *(float *)(param_1 + 0x444)) {
      FUN_00012320(0x5b);
      FUN_0004dff0(param_1);
      FUN_00012440();
      return true;
    }
  }
  return local_85;
}

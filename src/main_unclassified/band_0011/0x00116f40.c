/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D64EA0AE594526118E33DA636A3831E26A7E1A7F7AB72E17F71E03452CB67082
 * Entry: 0x00116f40, Ghidra index: 3590, label: FUN_00116f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x00117158/0x00117165: fcomp/fld m32fp [0x003c05fc].
 * Four-byte float, original bits 0x40800000 (4.0f); linkage ABI_UNVERIFIED. */
extern float DAT_003c05fc;
void FUN_00116f40(int *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined4 local_c;
  float fStack_4;
  
  if (param_1[0x80] != 0) {
    if (((int *)param_1[0x7f] != (int *)0x0) && (*(int *)param_1[0x7f] == 0x2a)) {
      piVar1 = *(int **)(param_1[0xba] + 0x130);
      if (piVar1 != (int *)0x0) {
        FUN_0014a150();
        FUN_0014a880();
        (**(code **)(*(int *)(param_1[0xba] + 0x110) + 0x34))(1);
        iVar2 = (**(code **)(*piVar1 + 0x40))();
        (**(code **)(*piVar1 + 0x48))(iVar2 + 0x24);
      }
      if ((char)param_1[0x1fa] != '\0') {
        *(undefined1 *)(param_1 + 0x1fa) = 0;
        *(byte *)(param_1[0xba] + 0x1c8) = *(byte *)(param_1[0xba] + 0x1c8) & 0xfe;
      }
    }
    local_c = 0;
    if ((*(char *)((int)param_1 + 0x205) != '\0') && (param_1[0x87] != 0)) {
      local_c = *(undefined4 *)(param_1[0x87] + 0x38);
    }
    fVar3 = (float)param_1[0x1f7];
    if ((*(float *)(param_1[0x80] + 0x25c) != 0.0) &&
       ((float)param_1[0x124] < (float)param_1[0x125] * 0.05)) {
      param_1[0x80] = *(int *)(param_1[3] + 0x2b8);
      param_1[0x83] = 0x3f800000;
      (**(code **)(*param_1 + 0x15c))(0,0);
      return;
    }
    FUN_0011fd20();
    FUN_0011fcd0();
    fStack_4 = (float)param_1[0x82];
    if (fStack_4 < 0.0) {
      fStack_4 = *(float *)(param_1[0x80] + 0x254);
    }
    FUN_00150670(param_1 + 0x80,param_1[0x82],0.0 < fVar3,local_c);
    if (param_1[0x85] != 0) {
      FUN_0014fd50(param_1[0x85],param_1);
    }
    if (param_1[0x90] != 0) {
      FUN_0014fd50(param_1[0x90],param_1);
    }
    if ((*(byte *)(param_1[0x7f] + 0x250) & 0x40) == 0) {
      if (DAT_003c05fc < (float)param_1[0x1f7]) {
        fVar3 = (float)param_1[0x1f7];
        if (DAT_003c05fc + fStack_4 <= (float)param_1[0x1f7]) {
          fVar3 = DAT_003c05fc + fStack_4;
        }
        param_1[0x1f7] = (int)fVar3;
      }
    }
    else {
      param_1[0x1f7] = 0;
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0x7f;
    }
  }
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfe;
  *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) & 0xf7;
  return;
}

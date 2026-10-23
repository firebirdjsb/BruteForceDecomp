/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0F683C2D3DB589982D0519A04ED0E41DCA16B18A696ED4034E058551AD59CF6
 * Entry: 0x0033f26e, Ghidra index: 12641, label: FUN_0033f26e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033f26e(short *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  short local_14;
  undefined1 local_12;
  undefined1 local_10;
  undefined1 local_e;
  undefined1 local_c;
  undefined1 local_a;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_3 == 0 && param_3[1] == 0) {
    *param_1 = 0x7b2;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((int)param_1 + 3) = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    RtlTimeToTimeFields(param_3,&local_14);
    if (local_14 < 0x7f6) {
      *param_1 = local_14;
    }
    else {
      *param_1 = 0x7f5;
    }
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = local_12;
    *(undefined1 *)((int)param_1 + 3) = local_10;
    *(undefined1 *)(param_1 + 2) = local_e;
    *(undefined1 *)((int)param_1 + 5) = local_c;
    *(undefined1 *)(param_1 + 3) = local_a;
    if (param_2 != (undefined4 *)0x0) {
      uVar2 = __alldiv(*param_3,param_3[1],10,0);
      uVar1 = __allrem(uVar2,&LAB_000f4240,0);
      *param_2 = uVar1;
    }
    param_1[6] = 0;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

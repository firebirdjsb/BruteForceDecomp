/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1325AD3DE9B7D32A0C4C5BB5218C508AB49ACFC669CB4421B1D953BE820ACD0
 * Entry: 0x00273d50, Ghidra index: 8868, label: FUN_00273d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00273d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int *param_10)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = param_1;
  unaff_ESI[3] = param_4;
  unaff_ESI[1] = param_2;
  unaff_ESI[2] = param_3;
  unaff_ESI[6] = param_7;
  piVar1 = (int *)unaff_ESI[9];
  unaff_ESI[4] = param_5;
  unaff_ESI[5] = param_6;
  unaff_ESI[7] = param_8;
  unaff_ESI[8] = param_9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  unaff_ESI[9] = param_10;
  if (param_10 != (int *)0x0) {
    (**(code **)(*param_10 + 4))(param_10);
  }
  return;
}

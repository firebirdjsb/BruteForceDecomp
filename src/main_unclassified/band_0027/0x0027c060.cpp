/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBA5EC2932A3824BB1493E7EC7228FC0B676B25AE920DBAB3A0EEFA7F733369B
 * Entry: 0x0027c060, Ghidra index: 8971, label: FUN_0027c060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0027c060(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x80);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0027c3e0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *param_3 = iVar1;
  return 0;
}

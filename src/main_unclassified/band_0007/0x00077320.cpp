/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 112739E8816920A2DB7ADB6B11090F1920061AFB6D5605DC7DBC4A4055AA733E
 * Entry: 0x00077320, Ghidra index: 1394, label: FUN_00077320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00077320(int *param_1)

{
  int iVar1;
  
  if (param_1[10] != 0) {
    param_1[10] = param_1[10] + -1;
  }
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    param_1[10] = 1;
    (**(code **)(*param_1 + 0x44))(1);
    iVar1 = 0;
  }
  return iVar1;
}

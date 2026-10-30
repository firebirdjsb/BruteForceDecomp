/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6410DC02AB2ADC1C75DA80B1FDB29E53B6F6650109B341FF72CFD7431BD1CF9
 * Entry: 0x00086990, Ghidra index: 1591, label: FUN_00086990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00087940(int param_1,uint param_2,uint param_3);

int * FUN_00086990(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    FUN_00087940(param_4,0,0xffffffff);
    *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_4 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined1 *)(param_4 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_4 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    *(undefined1 *)(param_4 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    *(undefined1 *)(param_4 + 0x33) = *(undefined1 *)(param_2 + 0x33);
    *(undefined1 *)(param_4 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    param_2 = param_2 + 0x3c;
    param_4 = param_4 + 0x3c;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}

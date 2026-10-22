/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73091F5BB125C5E034F526D2C9E3FF4AF41FD4C2B9F432E0B1717767BD1D5589
 * Entry: 0x00060c80, Ghidra index: 1011, label: FUN_00060c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00060c80(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_2 == 0xc53b008) {
    piVar1 = *(int **)(param_1 + 0x3c);
    *param_3 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80070005;
}

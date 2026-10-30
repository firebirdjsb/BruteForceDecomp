/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 781E69F6184DD5B465A4F33DD38003071C27DCA31872921DEAC2DA8025176F0B
 * Entry: 0x00176a80, Ghidra index: 4941, label: FUN_00176a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00176a80(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_000d42b0();
  if (*(char *)(param_1 + 0x10) != '\0') {
    fVar1 = (float)param_3;
    if (param_3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    (**(code **)(*piVar2 + 0x44))(fVar1,param_4,1);
    return 0;
  }
  (**(code **)(*piVar2 + 0x44))(param_2,param_4,0);
  return 0;
}

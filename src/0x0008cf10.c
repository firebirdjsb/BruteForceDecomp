/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 953D3D08772055EB3D09965C5863A58BD930E701B95EF1B681E4475FFFF6F040
 * Entry: 0x0008cf10, Ghidra index: 1707, label: FUN_0008cf10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008cf10(int param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  if ((param_1 < iVar1) && (-1 < param_1)) {
    iVar1 = 0;
    piVar2 = in_ECX;
    do {
      piVar2 = piVar2 + 2;
      if (*piVar2 != 0) {
        if (param_1 == 0) {
          return in_ECX[iVar1 * 2 + 2];
        }
        param_1 = param_1 + -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  return 0;
}

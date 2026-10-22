/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13D9614448F6B99B49E98442200EE50DE7F4DFAFF6D1DA682E6F3E94EC61549F
 * Entry: 0x0013d030, Ghidra index: 4012, label: FUN_0013d030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0013d030(float param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  if (((*(byte *)(in_ECX + 7) & 1) != 0) && (in_ECX[6] != 0)) {
    iVar1 = *(int *)(in_ECX[6] + 0x2e8);
    if (*(int *)(iVar1 + 0x1cc) == 2) {
      param_1 = param_1 * (float)in_ECX[0xd];
    }
    iVar1 = *(int *)(iVar1 + 0x130);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      piVar2 = (int *)(**(code **)(*in_ECX + 0x134))();
      if (*(int *)(iVar1 + 8) == *piVar2) {
        param_1 = param_1 * 5.0;
      }
    }
  }
  return (float10)param_1 * (float10)(float)in_ECX[1];
}

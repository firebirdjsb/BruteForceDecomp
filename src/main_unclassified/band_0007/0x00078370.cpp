/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C332D8FFCD168E19E475E92923C23476ED06237BBC3B2266F99FD3BE33A50D53
 * Entry: 0x00078370, Ghidra index: 1425, label: FUN_00078370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000782c0(int param_1);
extern void FUN_00077eb0(int param_1,float param_2);

void FUN_00078370(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = FUN_000782c0(param_1);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 1) {
      param_1 = *(float *)(iVar2 + 4);
    }
    else if (iVar1 == 2) {
      param_1 = (float)*(int *)(iVar2 + 4);
    }
    else if ((iVar1 == 3) && (*(char *)(iVar2 + 4) != '\0')) {
      param_1 = 1.0;
    }
    else {
      param_1 = 0.0;
    }
    FUN_00077eb0(iVar2,param_2);
    if ((*(code **)(unaff_EDI + 0x20) != (code *)0x0) && (param_2 != param_1)) {
      (**(code **)(unaff_EDI + 0x20))();
    }
  }
  return;
}

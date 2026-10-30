/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CD37B94429DB2D825CF842F5EA6EAD805F17C50CFD26CA5CF067DC385173688
 * Entry: 0x001081a0, Ghidra index: 3382, label: FUN_001081a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001081a0(void)

{
  int iVar1;
  int in_EAX;
  int *in_ECX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if (0 < iVar1) {
    in_ECX[3] = in_ECX[3];
    in_ECX[4] = (int)((float)(iVar1 + -1) * 16.0 + 5.0 + (float)in_ECX[4]);
                    /* WARNING: Could not recover jumptable at 0x001081de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x1c))();
    return;
  }
  return;
}

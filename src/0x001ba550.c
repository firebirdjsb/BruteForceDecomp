/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B52203208526A0D998B76485E8CA1B3104DE177BB4EBC1B44F1A91879C5ACCA4
 * Entry: 0x001ba550, Ghidra index: 5722, label: FUN_001ba550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001ba550(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d6e80(param_3);
    FUN_000e3c30(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}

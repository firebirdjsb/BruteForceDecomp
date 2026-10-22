/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEEBC7368935C23021870C0EEABDBCE6093114B269CB44C9B1204F29E13C1859
 * Entry: 0x001bae20, Ghidra index: 5728, label: FUN_001bae20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001bae20(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d6fe0(param_3);
    FUN_000e2d20(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA779BF99F48964193A85E70AC1AA9AFEA7294B46B6123B62B982C5C4B1902DB
 * Entry: 0x000d0cb0, Ghidra index: 2585, label: FUN_000d0cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d11b0(void);

void FUN_000d0cb0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_000d1110(param_3);
    FUN_000d11b0();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}

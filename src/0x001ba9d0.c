/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06EFBC8A708C8A231CB4FA2C80A991A1F9A8B2589707DB908DBF4BC2FE41DA52
 * Entry: 0x001ba9d0, Ghidra index: 5725, label: FUN_001ba9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001ba9d0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d6f10(param_3);
    FUN_000e2ca0(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}

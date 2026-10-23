/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06C4DFFACAB5BB17CF53CDFC0439A8E0EF6E7CFE190D1A677B64ADE411271F52
 * Entry: 0x0031a643, Ghidra index: 12260, label: FUN_0031a643
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031a643(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else if (param_3 == 2) {
      FUN_00314bd7(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
  }
  FUN_00314b5c(param_2,param_3,param_4);
  return;
}

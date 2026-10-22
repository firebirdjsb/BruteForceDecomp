/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD8E0725363DF8B945B4E6FDD2F5F40A6003E8B88A51D8059AE0D8D0AD0759C1
 * Entry: 0x00316300, Ghidra index: 12135, label: FUN_00316300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316300(int param_1)

{
  FUN_003118f0();
  if ((*(uint *)(param_1 + 8) & 2) != 0) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      FUN_00315f97(param_1);
    }
    else {
      FUN_003118c0(param_1);
    }
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  FUN_00311923();
  return;
}

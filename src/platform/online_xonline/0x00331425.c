/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4019F4753ECFFED87E891AC3D2910970D4E40BA8F01472DC9E5A0025472D59E
 * Entry: 0x00331425, Ghidra index: 12393, label: FUN_00331425
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00331425(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00345049(*(int *)(param_1 + 0x14));
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0x80151904;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

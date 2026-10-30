/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 281B648BAAFB934419E58CA8A3D32526BF46FECE9F26E15E87B4EFB72BA67358
 * Entry: 0x0034f178, Ghidra index: 13031, label: FUN_0034f178
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034f178(int param_1)

{
  if (param_1 != 0) {
    FUN_0034eea9(*(undefined4 *)(param_1 + 8));
    FUN_0034eea9(*(undefined4 *)(param_1 + 0xc));
    FUN_0034c35a(param_1 + 0x18,0xffffffff);
    ExFreePool(param_1);
  }
  return;
}

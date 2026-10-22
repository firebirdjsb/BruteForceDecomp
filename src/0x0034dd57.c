/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 263806C1A5749F5F4647A66BBAD40B47968E63FBEC37455A9BC3511D2F617E76
 * Entry: 0x0034dd57, Ghidra index: 13012, label: FUN_0034dd57
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034dd57(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  FUN_0034c35a(param_1 + 4,0xffffffff);
  if (*(int *)(param_1 + 0x1c) != 0) {
    KeSetEvent(*(int *)(param_1 + 0x1c),1,0);
  }
  return;
}

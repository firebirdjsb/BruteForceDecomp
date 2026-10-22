/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB9B7D27341E9FCCF32B91184843F87664620EC741451A215E4519D7305CA226
 * Entry: 0x0031496b, Ghidra index: 12073, label: FUN_0031496b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031496b(undefined2 *param_1,int param_2)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 4);
  *(uint *)(param_1 + 4) = (uint)*(byte *)(param_2 + 0xc);
  return;
}

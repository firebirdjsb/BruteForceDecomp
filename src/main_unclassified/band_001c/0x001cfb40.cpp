/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26F7702331C864748745C3FCA5D76EE8E18A4BF13B8F5DFF68C9A507A50133EB
 * Entry: 0x001cfb40, Ghidra index: 6142, label: FUN_001cfb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfb40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 5;
    do {
      *param_1 = *in_ECX;
      *(undefined2 *)(puVar1 + -4) = *(undefined2 *)(in_ECX + 1);
      *(undefined1 *)((int)puVar1 + -0xe) = *(undefined1 *)((int)in_ECX + 6);
      puVar1[-3] = in_ECX[2];
      puVar1[-2] = in_ECX[3];
      puVar1[-1] = in_ECX[4];
      *puVar1 = in_ECX[5];
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 6;
    } while (param_1 != param_2);
  }
  return;
}

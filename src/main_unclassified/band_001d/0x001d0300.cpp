/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A4EF63D855C60207E02E7E634F14F6148D87A8D33C8C3C1840F0DC2486C4751
 * Entry: 0x001d0300, Ghidra index: 6165, label: FUN_001d0300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0300(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)((int)param_1 + 9);
    do {
      *param_1 = *in_ECX;
      *(undefined4 *)((int)puVar1 + -5) = in_ECX[1];
      *(undefined1 *)((int)puVar1 + -1) = *(undefined1 *)(in_ECX + 2);
      *puVar1 = *(undefined4 *)((int)in_ECX + 9);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((int)in_ECX + 0xd);
      *(undefined4 *)((int)puVar1 + 7) = in_ECX[4];
      *(undefined4 *)((int)puVar1 + 0xb) = in_ECX[5];
      *(undefined4 *)((int)puVar1 + 0xf) = in_ECX[6];
      param_1 = param_1 + 7;
      puVar1 = puVar1 + 7;
    } while (param_1 != param_2);
  }
  return;
}

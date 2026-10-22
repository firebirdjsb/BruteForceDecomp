/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E27F8FA4C2B78CDA1BD44466F1C2243E1490A968AA8B9C1A14F8203A50FEFE9
 * Entry: 0x001d7650, Ghidra index: 6399, label: FUN_001d7650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7650(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = in_EAX + 5;
    puVar2 = param_1 + 5;
    do {
      *in_EAX = *param_1;
      *(undefined2 *)(puVar1 + -4) = *(undefined2 *)(puVar2 + -4);
      *(undefined1 *)((int)puVar1 + -0xe) = *(undefined1 *)((int)puVar2 + -0xe);
      puVar1[-3] = puVar2[-3];
      puVar1[-2] = puVar2[-2];
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      param_1 = param_1 + 6;
      in_EAX = in_EAX + 6;
      puVar1 = puVar1 + 6;
      puVar2 = puVar2 + 6;
    } while (param_1 != param_2);
  }
  return in_EAX;
}

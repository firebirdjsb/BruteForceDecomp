/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA3F5377911F05068DE6ACCC34880EA24F9965C0513ECABA5099FDC4C82720EA
 * Entry: 0x001d8050, Ghidra index: 6417, label: FUN_001d8050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d8050(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)((int)in_EAX + 9);
    puVar2 = (undefined4 *)((int)param_1 + 9);
    do {
      *in_EAX = *param_1;
      *(undefined4 *)((int)puVar1 + -5) = *(undefined4 *)((int)puVar2 + -5);
      *(undefined1 *)((int)puVar1 + -1) = *(undefined1 *)((int)puVar2 + -1);
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined4 *)((int)puVar1 + 7) = *(undefined4 *)((int)puVar2 + 7);
      *(undefined4 *)((int)puVar1 + 0xb) = *(undefined4 *)((int)puVar2 + 0xb);
      *(undefined4 *)((int)puVar1 + 0xf) = *(undefined4 *)((int)puVar2 + 0xf);
      param_1 = param_1 + 7;
      in_EAX = in_EAX + 7;
      puVar1 = puVar1 + 7;
      puVar2 = puVar2 + 7;
    } while (param_1 != param_2);
  }
  return in_EAX;
}

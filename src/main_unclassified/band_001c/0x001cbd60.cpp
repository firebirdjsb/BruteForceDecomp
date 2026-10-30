/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 823464619C609D3639BB2F1FF53CB983BF738A4C2A7D8E5E3BF9CFE40AE52281
 * Entry: 0x001cbd60, Ghidra index: 5902, label: FUN_001cbd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cbd60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_EAX;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = 0;
  FUN_001ad030();
  puVar1 = (undefined4 *)*in_EAX;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*unaff_EBX;
    *puVar2 = *puVar1;
    FUN_0010bc40();
    puVar2[5] = puVar1[5];
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
    *(undefined1 *)((int)puVar2 + 0x19) = *(undefined1 *)((int)puVar1 + 0x19);
  }
  return;
}

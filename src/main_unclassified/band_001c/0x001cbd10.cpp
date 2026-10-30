/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62A23BEC800E7F0911885CCDACA474211391D26566F3ECEE3C5CC618DA3F885D
 * Entry: 0x001cbd10, Ghidra index: 5901, label: FUN_001cbd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cbd10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_EAX;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = 0;
  FUN_001acfe0();
  puVar1 = (undefined4 *)*in_EAX;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*unaff_EBX;
    *puVar2 = *puVar1;
    FUN_001cd500();
    puVar2[5] = puVar1[5];
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
    *(undefined1 *)((int)puVar2 + 0x19) = *(undefined1 *)((int)puVar1 + 0x19);
  }
  return;
}

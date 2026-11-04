/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6B6622A280CFCF00CB2E7B87A38FF4B6516412BD0C15F462AD9E56176D50F0A
 * Entry: 0x00125a80, Ghidra index: 3702, label: FUN_00125a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_000c5ca0(void);
void FUN_00125a80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 8) + 0xbe4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1348);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
  }
  while( true ) {
    if (puVar3 == *(undefined4 **)(iVar1 + 0x1348)) {
      return;
    }
    if (*(int *)(puVar3[2] + 0xe0) == unaff_ESI) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  if (puVar3[2] == 0) {
    return;
  }
  FUN_000c5ca0();
  return;
}

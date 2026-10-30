/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCEF4F573E223B5340BBB58D41BB38B3C682487557AE201E4AE1CEF1F20FED75
 * Entry: 0x000e3780, Ghidra index: 2819, label: FUN_000e3780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single 32-bit guest free operand; caller x86 ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_000e3780(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined4 *)(in_EAX + 0x50);
  do {
    if (0xf < (uint)puVar1[-7]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar1[-0xc]);
    }
    iVar2 = iVar2 + -1;
    puVar1[-7] = 0xf;
    puVar1[-8] = 0;
    *(undefined1 *)(puVar1 + -0xc) = 0;
    puVar1 = puVar1 + -7;
  } while (iVar2 != 0);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A618BB87B386690E945561DF96484A4D4B5955BA2803BC36D3EEA76B04EC6286
 * Entry: 0x0031c06c, Ghidra index: 12319, label: FUN_0031c06c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_fec00134;
undefined4 FUN_0031c06c(void)

{
  int iVar1;
  
  iVar1 = 1000;
  while( true ) {
    if ((DAT_fec00134 & 1) == 0) {
      return 1;
    }
    if (iVar1 == 0) break;
    KeStallExecutionProcessor(0x14);
    iVar1 = iVar1 + -1;
  }
  return 0;
}

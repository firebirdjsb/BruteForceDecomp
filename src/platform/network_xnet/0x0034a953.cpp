/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82133AA678C44033720E9DD84AA004CA0EEF15976D3AA904833DF7311CA6B07E
 * Entry: 0x0034a953, Ghidra index: 12938, label: FUN_0034a953
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern byte * FUN_0034a806(void);
void FUN_0034a953(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0034a806();
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined4 *)(puVar1 + 0x60) = param_2;
    *puVar1 = 4;
    puVar1[0x42] = 0x18;
    puVar1[0x5b] = 0x18;
    *(undefined4 *)(puVar1 + 0x5c) = param_1;
    puVar1[0x5e] = 0x20c;
  }
  return;
}

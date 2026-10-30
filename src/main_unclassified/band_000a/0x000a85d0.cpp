/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 519C2CDE03A54BFB5F20BD0D43CE25A64DBE73811A42A2D4036690E96A997182
 * Entry: 0x000a85d0, Ghidra index: 2010, label: FUN_000a85d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00090930(int *param_1);
extern undefined1 FUN_00090970(void);

void FUN_000a85d0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00090930(param_1);
  if (cVar1 != '\0') {
    FUN_00090970();
  }
  return;
}

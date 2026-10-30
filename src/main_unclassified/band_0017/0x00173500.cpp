/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F265F54C5B85A230E4FDB815C4962C0FAE80CFC1C68D4F435FD2029FCEECDD8
 * Entry: 0x00173500, Ghidra index: 4880, label: FUN_00173500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173500(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00173530();
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_00173560();
    *puVar2 = param_1;
  }
  return;
}

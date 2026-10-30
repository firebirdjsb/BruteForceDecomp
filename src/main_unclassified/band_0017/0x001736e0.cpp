/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EB608645FC34382BD80AA8E1ABFAB3AE0DA8B4EC09504323DFEA56F9CF967E1
 * Entry: 0x001736e0, Ghidra index: 4887, label: FUN_001736e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3cc;
void FUN_001736e0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[2] = 1;
  *unaff_ESI = PTR_LAB_0039a3cc;
  uVar1 = FUN_000e0c80(unaff_ESI + 4);
  unaff_ESI[5] = uVar1;
  unaff_ESI[6] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x21) = 0;
  unaff_ESI[2] = 4;
  unaff_ESI[7] = 3;
  *(undefined1 *)(unaff_ESI + 8) = 1;
  return;
}

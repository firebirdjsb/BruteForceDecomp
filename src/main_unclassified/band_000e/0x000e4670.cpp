/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D829CECC6D204B498B8A5DAF5EA71F80FCDC3A3D74F00F037A30CC8C2CF62B3
 * Entry: 0x000e4670, Ghidra index: 2848, label: FUN_000e4670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb0;
void FUN_000e4670(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_0039efb0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3b] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x2d5);
  unaff_ESI[0x2d6] = uVar1;
  unaff_ESI[0x2d7] = 0;
  unaff_ESI[0x2d8] = 0;
  *(undefined1 *)(unaff_ESI + 0x2d1) = 0;
  *(undefined1 *)((int)unaff_ESI + 0xb45) = 0;
  *(undefined1 *)((int)unaff_ESI + 0xb46) = 0;
  unaff_ESI[0x3c] = 0;
  unaff_ESI[0x3d] = 0;
  unaff_ESI[0x3e] = 0;
  return;
}

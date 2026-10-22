/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A77C195ABF8E760B53FD0AEE8B85F3AB9FA55F476D329A2372D8CC91C1DEEB25
 * Entry: 0x00258920, Ghidra index: 8478, label: FUN_00258920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258920(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  puVar1 = (undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined1 *)puVar1 = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_0015ec60(puVar1);
  return;
}

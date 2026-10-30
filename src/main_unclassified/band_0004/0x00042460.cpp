/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3788328B8D257D63AA0C23D72635C8320C92854B0B51A810BCA93E4390E78A0
 * Entry: 0x00042460, Ghidra index: 504, label: FUN_00042460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000428c0(int param_1);

void FUN_00042460(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_000428c0(unaff_EDI);
  *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_EDI + 0x10);
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
  *(undefined4 *)(unaff_ESI + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  return;
}

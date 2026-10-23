/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B77AD187F6F3DB2A5AE4F8E214B023D7C62CE25A38CE769A993D2A8C81643760
 * Entry: 0x002ebea0, Ghidra index: 10647, label: FUN_002ebea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Unable to track spacebase fully for stack */

void FUN_002ebea0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX != 0) {
    if (0xfff < in_EAX) {
      puVar1 = &stack0x00000004;
      do {
        puVar1 = puVar1 + -0x1000;
        in_EAX = in_EAX - 0x1000;
      } while (0xfff < in_EAX);
      *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
      return;
    }
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
  }
  return;
}

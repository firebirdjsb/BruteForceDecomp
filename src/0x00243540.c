/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7967015027AE83E77FA9CC3E136CEB6850C49BAB012941D4844FFA7949930A5A
 * Entry: 0x00243540, Ghidra index: 8051, label: FUN_00243540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243540(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x24) {
    FUN_00242fd0();
  }
  return;
}

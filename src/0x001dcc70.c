/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BAA1B7B423E3BF912F62225C86A474945739BE953B38605E7F94AA05BB9BEFF
 * Entry: 0x001dcc70, Ghidra index: 6587, label: FUN_001dcc70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcc70(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    *(undefined4 *)(in_EAX + 0x18) = 7;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined2 *)(in_EAX + 4) = 0;
    FUN_00087940(in_EAX,0,0xffffffff);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AF26754BC5B60237CC017AF772B036A797626F03B81EF6394F8A923370BE7E9
 * Entry: 0x001d0a30, Ghidra index: 6199, label: FUN_001d0a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D26F0 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d26f0(void);
void FUN_001d0a30(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1b8) {
    FUN_001d26f0();
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(in_EAX + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(in_EAX + 0x1ac);
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(in_EAX + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(in_EAX + 0x1b4);
  }
  return;
}

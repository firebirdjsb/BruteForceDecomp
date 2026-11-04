/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCB0DFB0536AFB14311012253E85E1E79F93C4E3049C0ACC3131FE9EDBD8A573
 * Entry: 0x002440c0, Ghidra index: 8069, label: FUN_002440c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */
extern void FUN_002430a0(void);
void FUN_002440c0(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x2c) {
    FUN_002430a0();
  }
  return;
}

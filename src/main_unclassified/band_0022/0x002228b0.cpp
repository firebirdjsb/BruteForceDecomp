/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EC7D103267C0217F6B85A02FDBF8EEE4C831C16DB8D9C1944DE20CA0C820A04
 * Entry: 0x002228b0, Ghidra index: 7586, label: FUN_002228b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox register/stack ABI_UNVERIFIED. */
extern void FUN_002228d0(void);
void FUN_002228b0(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  FUN_002228d0();
  return;
}

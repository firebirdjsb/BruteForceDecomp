/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73CDDD14C89E4B10DE91D164DD7B5857AE5C1562D0AAA2E619D7966BB0492B33
 * Entry: 0x002ef9c9, Ghidra index: 10720, label: __NLG_Notify1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7184;
extern uint32_t DAT_003b7188;
extern uint32_t DAT_003b718c;
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify1(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 unaff_EBP;
  
  DAT_003b7188 = in_ECX;
  DAT_003b7184 = in_EAX;
  DAT_003b718c = unaff_EBP;
  return;
}

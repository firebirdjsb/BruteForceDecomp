/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14D6A8EFFDE50F31ABE6896A27812242AE10AE96484877CEF1CCFAF3D1327142
 * Entry: 0x001d0840, Ghidra index: 6189, label: FUN_001d0840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d0840(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    FUN_001d2330();
    in_EAX = in_EAX + 0x48;
  }
  return in_EAX;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30CC54C9C439373E7920012BFA57C93F0A4D707E0FDAC467D34693BD8B4A0873
 * Entry: 0x001d06d0, Ghidra index: 6182, label: FUN_001d06d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d06d0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_001d1f40();
    in_EAX = in_EAX + 0x40;
  }
  return in_EAX;
}

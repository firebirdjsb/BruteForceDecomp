/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6018986DAD2041AD0B0FFCCD6DF23D235393144B0948D8698E945967EBFF08B7
 * Entry: 0x0027f3f0, Ghidra index: 9017, label: FUN_0027f3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0027f3f0(void)

{
  int in_EAX;
  int in_ECX;
  
  FUN_0027e7f0();
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x28));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),*(undefined4 *)(in_ECX + 0x24));
  (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28));
  return 0;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 207F3A2185B47F56214107258AAA17FEEAC6618A94AC668C4F70E268BE30C803
 * Entry: 0x00295610, Ghidra index: 9321, label: FUN_00295610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00295610(void)

{
  double dVar1;
  uint in_EAX;
  double local_c;
  
  dVar1 = 10.0;
  local_c = 1.0;
  for (; in_EAX != 0; in_EAX = in_EAX >> 1) {
    if ((in_EAX & 1) != 0) {
      local_c = local_c * dVar1;
    }
    dVar1 = dVar1 * dVar1;
  }
  return (float10)local_c;
}

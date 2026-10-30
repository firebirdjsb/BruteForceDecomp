/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B244E550D7CFFFF267C5F5C82EDC28F4C66DA4B4810149D5A7F1C517BFEA9BBB
 * Entry: 0x0020d5e0, Ghidra index: 7375, label: FUN_0020d5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x001FC7F0 uses guest EBX/EDI register objects.
 * Host declaration matches zero-explicit-arg draft; Xbox ABI_UNVERIFIED. */
extern void FUN_001fc7f0(void);
void FUN_0020d5e0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    if (param_1 != in_EAX) {
      FUN_001fc7f0();
    }
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CBEFC71A89E0617C9EFB8C8492BFFA8EE47F02A1E02A8BBDCD240BD2A6CBEBC
 * Entry: 0x0028e320, Ghidra index: 9206, label: FUN_0028e320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0028e320(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0010bc40();
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F9196556B207A8907AF1252C8312FA3CA3F3AABC73558E454B81C8E1D550228
 * Entry: 0x0017e4e0, Ghidra index: 5102, label: FUN_0017e4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017e4e0(int param_1)

{
  int in_EAX;
  undefined4 in_ECX;
  
  if ((-1 < in_EAX) && (in_EAX < 4)) {
    FUN_0003d730(in_EAX * 0x30 + 8 + param_1,in_ECX);
  }
  return;
}

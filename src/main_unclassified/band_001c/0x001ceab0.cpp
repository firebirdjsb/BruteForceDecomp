/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57356374DC8934907E2AE648C095367DE6B3C3593855F35361C35F5A273EC8E5
 * Entry: 0x001ceab0, Ghidra index: 6063, label: FUN_001ceab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* This is the existing Ghidra callee's C++ draft signature, not a verified
 * Xbox guest-register ABI. The original call operands remain unchanged. */
extern int FUN_00087940(int guest_string, uint start, uint count);
void FUN_001ceab0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00087940(param_1,0,0xffffffff);
  }
  return;
}

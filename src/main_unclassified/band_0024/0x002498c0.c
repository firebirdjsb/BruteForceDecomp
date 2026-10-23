/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2E3561AFA2D5A18283687A750280F1ADB77AFCD33A96951DCE0EDC3805C78DB
 * Entry: 0x002498c0, Ghidra index: 8191, label: FUN_002498c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002498c0(int param_1,int param_2)

{
  undefined4 unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_00249a90(param_1,unaff_EBX);
  }
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC41B321B543E586F20687B980D7A6D2B366A85D2B202F07F7E95DF908B1AAB4
 * Entry: 0x000765a0, Ghidra index: 1376, label: FUN_000765a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);

void FUN_000765a0(int param_1,int param_2)

{
  undefined4 unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_0001f4f0(unaff_EBX,0,0xffffffff);
  }
  return;
}

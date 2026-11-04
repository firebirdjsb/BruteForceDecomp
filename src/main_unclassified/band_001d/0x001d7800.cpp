/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5D12D0D81298FEB8CFDF42C5EDA29D0B4BF9B47A499462508BAFD767AAC48DF
 * Entry: 0x001d7800, Ghidra index: 6403, label: FUN_001d7800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: direct CALL 0x001D1DC0 takes one guest DWORD and RET 4;
 * callee also uses implicit EBX as destination. Guest-memory translation,
 * host pointer contract and complete ABI remain ABI_UNVERIFIED. */
extern void FUN_001d1dc0(std::uint32_t guest_source_va);
int * FUN_001d7800(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x50;
    param_4 = param_4 + -0x50;
    FUN_001d1dc0(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}

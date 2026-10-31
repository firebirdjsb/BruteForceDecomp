/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 389A8773F0E1C710B4A75CAF05407AF2CAA89408497CCCD10C20BFB85EC3C6CA
 * Entry: 0x001d7010, Ghidra index: 6387, label: FUN_001d7010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: direct CALL 0x001D1C60 takes one guest DWORD and RET 4;
 * callee also uses implicit EBX as destination. Guest-memory translation,
 * host pointer contract and complete ABI remain ABI_UNVERIFIED. */
extern void FUN_001d1c60(std::uint32_t guest_source_va);
int * FUN_001d7010(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x134;
    param_4 = param_4 + -0x134;
    FUN_001d1c60(param_3);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}

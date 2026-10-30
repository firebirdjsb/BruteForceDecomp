/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C76946961F2D8BDE6147ADFEC6C3D7DB2FD30E619CB8FFB8A298126E2DE6D70E
 * Entry: 0x00077740, Ghidra index: 1399, label: FUN_00077740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000765d0(undefined4 *param_1);

int FUN_00077740(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_000765d0(param_1);
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}

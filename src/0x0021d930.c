/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C004829F55B0B281F57F56FCB7359C804A8DA2C31B3B3050F678714C9DDED259
 * Entry: 0x0021d930, Ghidra index: 7544, label: FUN_0021d930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021d930(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = *in_ECX;
  in_EAX[3] = in_ECX[1];
  in_EAX[4] = in_ECX[2];
  return;
}

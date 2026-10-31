/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66ECE12492F5243DF8CE34078724D1BDB92832BBD58673B98D33A3031050324A
 * Entry: 0x00300dd0, Ghidra index: 11075, label: FUN_00300dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */
extern void FUN_00300b60(int param_1,int param_2);
void FUN_00300dd0(void)

{
  undefined4 in_ECX;
  
  FUN_00300b60(in_ECX,0);
  return;
}

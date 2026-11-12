/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEC746424DB3A6A9ABE10732A7360A4F08763AD27D54C7AD3EDD3B7E08954900
 * Entry: 0x002f4b60, Ghidra index: 10870, label: WaitForSingleObject
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern int XAPILIB__WaitForSingleObjectEx(undefined4 param_1,undefined4 param_2,int param_3);
void XAPILIB__WaitForSingleObject(undefined4 param_1,undefined4 param_2)

{
  XAPILIB__WaitForSingleObjectEx(param_1,param_2,0);
  return;
}

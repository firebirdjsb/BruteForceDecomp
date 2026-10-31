/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11988D4F45100F86BBD579CBE5143DBC97386956073EEA0615C7FC1B6217066D
 * Entry: 0x0031c0fd, Ghidra index: 12322, label: FUN_0031c0fd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only; original Xbox ABI_UNVERIFIED. */
extern undefined4 FUN_0031c06c(void);
void FUN_0031c0fd(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0031c06c();
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 * 2 + -0x1400000) = param_2;
  }
  return;
}

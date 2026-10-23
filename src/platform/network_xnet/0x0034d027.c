/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEB28ED7C28FA2D8270746AF55FCCFD207C0A0A5E1BC8807C6643AFFC06E09A6
 * Entry: 0x0034d027, Ghidra index: 12995, label: FUN_0034d027
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034d027(void)

{
  int in_ECX;
  
  FUN_0034cacb();
  if (*(int **)(in_ECX + 0x260) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x260) + 8))(in_ECX + 0x264);
    return;
  }
  FUN_00352ebc(0x1000);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F4789EF308A6B746AA49ED0D3A7F2ECD77C5A15E1838E32240DD99DE0A6089F
 * Entry: 0x0006be20, Ghidra index: 1221, label: FUN_0006be20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00095070(int param_1);

void FUN_0006be20(void)

{
  int in_EAX;
  
  (**(code **)(**(int **)(in_EAX + 0x50) + 0x18))();
  FUN_00095070(0xffffffa0);
  return;
}

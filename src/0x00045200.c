/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C1A616A5E6FD1D51CF0F6AADA803F3CF7C2034A5E4ED3F2A1B613A647B68F44
 * Entry: 0x00045200, Ghidra index: 536, label: FUN_00045200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00045200(void)

{
  int in_EAX;
  
  FUN_0001c1a0(*(undefined4 *)(*(int *)(in_EAX + 4) + 4));
  *(int *)(*(int *)(in_EAX + 4) + 4) = *(int *)(in_EAX + 4);
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)*(undefined4 *)(in_EAX + 4) = *(undefined4 *)(in_EAX + 4);
  *(int *)(*(int *)(in_EAX + 4) + 8) = *(int *)(in_EAX + 4);
  return;
}

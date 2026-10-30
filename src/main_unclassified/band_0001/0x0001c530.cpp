/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 582358776EDE074F78B485139DBCB699CD8EF59389720416A4827B3F99E73045
 * Entry: 0x0001c530, Ghidra index: 109, label: FUN_0001c530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001c530(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0xa9);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0xa9);
  }
  return;
}

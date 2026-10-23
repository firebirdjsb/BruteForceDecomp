/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFA3512B6B335F3A9B9A0182F8FB1218624D9FD1CBA760E1F782A66312EB9440
 * Entry: 0x000a83d0, Ghidra index: 2002, label: FUN_000a83d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a83d0(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x19);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x19);
  }
  return;
}

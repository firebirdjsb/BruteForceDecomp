/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9038951A2BB88338EE430D63B172EBE3D8F672899176B33297342415E0E1EDF
 * Entry: 0x003839bb, Ghidra index: 13627, label: FUN_003839bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003839bb(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(in_EDX + 0x10);
  KeRaiseIrqlToDpcLevel();
  pbVar1 = (byte *)(iVar3 + 0x10);
  *pbVar1 = *pbVar1 | 0x10;
  FUN_00383816();
  cVar2 = *(char *)(iVar3 + 0x11);
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    FUN_00384aad();
  }
  else {
    FUN_00384d66();
  }
  FUN_0038388c();
  *(int *)(in_EDX + 0x14) = *(int *)(in_ECX + 0x434);
  *(int *)(in_ECX + 0x434) = in_EDX;
  KfLowerIrql();
  return 0x40000000;
}

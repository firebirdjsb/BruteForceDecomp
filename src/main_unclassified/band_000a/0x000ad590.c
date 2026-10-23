/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2005307B0FA30ECE6957EA18C198A9099A305E743568A260ABC6EA6911CC5988
 * Entry: 0x000ad590, Ghidra index: 2072, label: FUN_000ad590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ad590(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  if (*(short *)(iVar1 + 0x20) < 600) {
    cVar2 = (*(short *)(iVar1 + 0x22) < 400) + '\x02';
  }
  else {
    cVar2 = *(short *)(iVar1 + 0x22) < 400;
  }
  FUN_000ad3a0(in_ECX,cVar2,0);
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  return;
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B56F328C6BB989A0B5CE05E7017C1B4F74C2628E9B022D829E63D75E20C99BBF
 * Entry: 0x000ab810, Ghidra index: 2049, label: FUN_000ab810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000ba730(void);
extern void FUN_000b21f0(undefined4 param_1);
extern undefined4 FUN_000ab580(int param_1);
extern uint FUN_000ab740(void);
extern uint FUN_000ab7c0(void);

void FUN_000ab810(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int in_ECX;
  
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  *(byte *)(in_ECX + 0x74) = *(byte *)(in_ECX + 0x74) & 0xfd;
  cVar1 = FUN_000ab580(in_ECX);
  cVar2 = FUN_000ab740();
  cVar3 = FUN_000ab7c0();
  if (cVar3 != '\0' || (cVar1 != '\0' || cVar2 != '\0')) {
    (**(code **)(*(int *)(in_ECX + 0x2c) + 0xc))();
    (**(code **)(*(int *)(in_ECX + 0x2c) + 0x10))();
  }
  return;
}

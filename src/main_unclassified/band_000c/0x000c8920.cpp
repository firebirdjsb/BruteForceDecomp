/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCB8ED8417FE38CC185A3CB7D5EEF82F4A603C9DF36BBD32505F34C5E81D4304
 * Entry: 0x000c8920, Ghidra index: 2475, label: FUN_000c8920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern undefined4 FUN_000c8cc0(int param_1);
extern void FUN_000c9170(float param_1);
extern void FUN_000c90c0(float param_1);
extern void FUN_000ba730(void);
extern void FUN_000b21f0(undefined4 param_1);

void FUN_000c8920(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((*(int *)(in_ECX + 0x68) != 0) || (*(int *)(in_ECX + 0x70) != 0)) {
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x34) != 0) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x34) + 0x60);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x10);
      }
    }
    if (*(int *)(in_ECX + 0x68) == iVar2) goto LAB_000c8985;
  }
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x34) + 0x60);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
  }
  if (*(int *)(in_ECX + 0x68) != iVar3) {
    FUN_0008f6a0(iVar3);
  }
  if (*(int *)(in_ECX + 0x70) != iVar3) {
    FUN_0008f6a0(iVar3);
  }
LAB_000c8985:
  if (*(int *)(in_ECX + 0x68) == 0) {
    FUN_000c8cc0(in_ECX);
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  if (iVar2 != 0) {
    sVar1 = *(short *)(iVar2 + 0x22);
    *(short *)(in_ECX + 8) = *(short *)(iVar2 + 0x20) / 2;
    *(short *)(in_ECX + 10) = sVar1 / 2;
  }
  FUN_000c9170(param_1);
  FUN_000c90c0(param_1);
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  return;
}

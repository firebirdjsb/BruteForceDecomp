/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8009AC8E47D1F41F23EFF768828D718E301CED1C15C98406D87D4F1BB821F316
 * Entry: 0x000c3590, Ghidra index: 2387, label: FUN_000c3590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000ba6d0(void);
extern void FUN_000ba730(void);

extern uint32_t DAT_003c8c68;
extern uint32_t DAT_003c8c6c;
void FUN_000c3590(undefined4 param_1)

{
  undefined2 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  iVar5 = *(int *)(in_ECX + 0x38);
  iVar4 = *(int *)(iVar5 + 0x68);
  bVar2 = false;
  if ((iVar4 < 1) || (4 < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 100) + 0x70) + 0x34 + iVar4 * 8);
  }
  if (iVar4 != *(int *)(in_ECX + 0x30)) {
    iVar4 = *(int *)(iVar5 + 0x68);
    if ((iVar4 < 1) || (4 < iVar4)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 100) + 0x70) + 0x34 + iVar4 * 8);
    }
    *(int *)(in_ECX + 0x30) = iVar5;
    if (iVar5 != 0) {
      bVar2 = true;
    }
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    bVar3 = *(byte *)(*(int *)(in_ECX + 0x30) + 0x70) & 1;
    if (bVar3 != *(byte *)(in_ECX + 0x34)) {
      *(byte *)(in_ECX + 0x34) = bVar3;
      bVar2 = true;
    }
    *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
    if (bVar2) {
      FUN_000ba6d0();
    }
    if (*(int *)(in_ECX + 0x20) != 0) goto LAB_000c3629;
  }
  *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) | 1;
LAB_000c3629:
  iVar5 = *(int *)(in_ECX + 0x28);
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar5 + -0x2c;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -0x2c;
  }
  iVar5 = (*(int *)(iVar4 + 0x68) + -1 + (*(byte *)(*(int *)(iVar5 + 100) + 0x74) & 1) * 4) * 8;
  uVar1 = *(undefined2 *)(&DAT_003c8c68 + iVar5);
  *(undefined2 *)(in_ECX + 6) = *(undefined2 *)(&DAT_003c8c6c + iVar5);
  *(undefined2 *)(in_ECX + 4) = uVar1;
  FUN_000ba730(param_1);
  return;
}

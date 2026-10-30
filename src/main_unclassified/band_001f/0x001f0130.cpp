/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70E14E2CF268C96C9BB30C91A6708517C0F9D9DE54921ED690C8C4BBFBCA7BA9
 * Entry: 0x001f0130, Ghidra index: 6976, label: FUN_001f0130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001f0130(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  if ((*(char *)(in_ECX + 0x15c) != '\0') || (*(int *)(in_ECX + 0x160) != -1)) {
    iVar1 = 1;
  }
  if ((*(char *)(in_ECX + 0x6f4) != '\0') || (*(int *)(in_ECX + 0x6f8) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0xc8c) != '\0') || (*(int *)(in_ECX + 0xc90) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0x1224) != '\0') || (*(int *)(in_ECX + 0x1228) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0x17bc) != '\0') || (*(int *)(in_ECX + 0x17c0) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0x1d54) != '\0') || (*(int *)(in_ECX + 0x1d58) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0x22ec) != '\0') || (*(int *)(in_ECX + 0x22f0) != -1)) {
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(in_ECX + 0x2884) != '\0') || (*(int *)(in_ECX + 0x2888) != -1)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

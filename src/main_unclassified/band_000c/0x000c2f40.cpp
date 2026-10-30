/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCB4645015C0C2B631B428FBC197BBE7F08ECC6A99F19571FD13EA28020693BA
 * Entry: 0x000c2f40, Ghidra index: 2382, label: FUN_000c2f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000ba730(void);
extern void FUN_000b21f0(undefined4 param_1);

void FUN_000c2f40(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x68);
  if (((0 < iVar1) && (iVar1 < 5)) &&
     (*(int *)(*(int *)(*(int *)(in_ECX + 100) + 0x70) + 0x34 + iVar1 * 8) != 0)) {
    *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
  }
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  return;
}

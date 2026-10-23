/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EDFD44129C571271E7B2920856A6CBD9B37C050CDE7865F93D595EB19CF30C8
 * Entry: 0x002e45a0, Ghidra index: 10447, label: FUN_002e45a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x002e45cf CALL [0x0040e868]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_0040e868;
undefined4 FUN_002e45a0(void)

{
  int in_ECX;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (uint *)(in_ECX + 0x48);
  iVar2 = 0x20;
  do {
    if ((*puVar1 & 0xf00000) == 0x100000) {
      uVar3 = puVar1[2];
LAB_002e45cf:
      (*DAT_0040e868)(uVar3);
    }
    else if ((*puVar1 & 0xf00000) == 0x200000) {
      uVar3 = puVar1[2];
      goto LAB_002e45cf;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0xf00000;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

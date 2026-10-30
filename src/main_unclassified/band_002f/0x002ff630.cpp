/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C32433601CD1CCEBA9A7010BC880B5A253C33CED73564DA5D0768AAD3690F7D
 * Entry: 0x002ff630, Ghidra index: 11067, label: FUN_002ff630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ff630(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int in_EDX;
  
  *(int *)(in_EDX + 100) = in_EAX;
  *(int *)(in_EDX + 0x6c) = in_EAX;
  *(int *)(in_EDX + 0x68) = in_EAX + in_ECX;
  *(undefined4 *)(in_EDX + 0x30) = 0;
  iVar1 = 0xb;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(in_EDX + 4 + iVar1 * 4) = 0;
    *(undefined4 *)(in_EDX + 0x38 + iVar1 * 4) = 0;
  } while (-1 < iVar1);
  iVar1 = 0;
  do {
    if (iVar1 < 9) {
      iVar2 = 1;
    }
    else if (iVar1 < 0x11) {
      iVar2 = 2;
    }
    else if (iVar1 < 0x21) {
      iVar2 = 3;
    }
    else if (iVar1 < 0x31) {
      iVar2 = 4;
    }
    else if (iVar1 < 0x41) {
      iVar2 = 5;
    }
    else if (iVar1 < 0x61) {
      iVar2 = 6;
    }
    else if (iVar1 < 0x81) {
      iVar2 = 7;
    }
    else if (iVar1 < 0xa1) {
      iVar2 = 8;
    }
    else if (iVar1 < 0xc1) {
      iVar2 = 9;
    }
    else if (iVar1 < 0x101) {
      iVar2 = 10;
    }
    else if (iVar1 < 0x201) {
      iVar2 = 0xb;
    }
    else {
      _DAT_00000000 = 0;
      iVar2 = -1;
    }
    *(char *)(in_EDX + 0x10a0 + iVar1) = (char)iVar2;
    *(int *)(in_EDX + 0x70 + iVar2 * 4) = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x201);
  puVar3 = (undefined4 *)(in_EDX + 0xa4);
  iVar1 = 0x100;
  do {
    puVar3[2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

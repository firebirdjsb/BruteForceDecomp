/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C639E13D401C1183889BFA9F5BE1BC062148C2BFE64A830D803E53E557BF4D9
 * Entry: 0x00311c80, Ghidra index: 11920, label: FUN_00311c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f574;
extern uint32_t PTR_DAT_0031cbac;
void FUN_00311c80(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  
  if (param_1 == (byte *)0x0) {
    if ((*(byte *)(in_ECX + 8) & 0x10) == 0) {
      param_1 = (&PTR_DAT_0031cbac)[*(byte *)(in_ECX + 0xe) >> 1];
    }
    else {
      param_1 = &DAT_0032f574;
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*param_1 != 0) {
    do {
      *(undefined1 *)(*(int *)(in_ECX + 0x24) + 0x28 + in_ECX) =
           *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(in_ECX + 0x24) * 8);
      *(undefined4 *)(in_ECX + 0x30 + (uint)*(byte *)(*(int *)(in_ECX + 0x24) + 0x28 + in_ECX) * 4)
           = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + *(int *)(in_ECX + 0x24) * 8);
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
    } while (*(uint *)(in_ECX + 0x24) < (uint)*param_1);
  }
  iVar1 = *(int *)(in_ECX + 0xb0);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(in_ECX + 0x24);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(in_ECX + 0x28 + uVar3) == *(char *)(*(int *)(iVar1 + 0x1c) + 0xd0)) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0x24));
    }
    if (uVar2 <= uVar3) {
      if (7 < uVar2) {
        *(undefined4 *)(in_ECX + 0x24) = 7;
      }
      *(undefined1 *)(*(int *)(in_ECX + 0x24) + 0x28 + in_ECX) =
           *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0xd0);
      *(undefined4 *)(in_ECX + 0x30 + (uint)*(byte *)(*(int *)(in_ECX + 0x24) + 0x28 + in_ECX) * 4)
           = 0;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
    }
  }
  return;
}

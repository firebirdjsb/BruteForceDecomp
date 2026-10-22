/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 551B56F585E2F50BA17D9CF402DCAE8E35208D84ACF494EC0701CD1DF1612671
 * Entry: 0x0036e100, Ghidra index: 13302, label: FUN_0036e100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b790;
uint FUN_0036e100(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(in_EAX + 0x10) != 0) {
    return (*(byte *)(in_EAX + 0x13) + 1) * 0x40;
  }
  uVar1 = (uint)*(byte *)(in_EAX + 0xd);
  iVar2 = 1 << ((byte)(*(uint *)(in_EAX + 0xc) >> 0x14) & 0xf);
  if (uVar1 != 0xc) {
    if ((0xd < uVar1) && (uVar1 < 0x10)) {
      return iVar2 * 4;
    }
    return ((byte)(&DAT_0037b790)[uVar1] & 0x3c) * iVar2 >> 3;
  }
  return iVar2 * 2;
}

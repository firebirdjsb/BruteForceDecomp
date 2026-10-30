/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46A36F274D5487418B4F0E4CDACC427D2E869805C48A5DB26D6CF028D32B5C65
 * Entry: 0x0002ab00, Ghidra index: 286, label: FUN_0002ab00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cff4;
extern uint32_t DAT_0046d000;
extern uint32_t _DAT_0046cfe8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002ab00(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int in_ECX;
  
  fVar2 = -DAT_0046d000;
  fVar3 = -DAT_0046cff4;
  *(float *)(in_ECX + 0x448) = -_DAT_0046cfe8;
  *(float *)(in_ECX + 0x44c) = fVar3;
  *(float *)(in_ECX + 0x450) = fVar2;
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar5 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(in_ECX + 0x3e4);
  }
  iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar5 * 4) + 0x14);
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar5 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(in_ECX + 0x3e4);
  }
  if (((*(byte *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar5 * 4) + 0x88) & 4) != 0) &&
     ((*(byte *)(iVar1 + 0x28) & 1) != 0)) {
    return 0;
  }
  FUN_000120f0();
  FUN_0011dfa0();
  cVar4 = FUN_000416a0(in_ECX + 0x8f0,1);
  if (cVar4 != '\0') {
    FUN_00025730(in_ECX + 0x8f0,1,1);
  }
  return 1;
}

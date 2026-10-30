/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AAB24AA5C270CA83716CAF1F88DFF2C3AE22635725F44928927E4F9D78A6B3A
 * Entry: 0x00381304, Ghidra index: 13561, label: FUN_00381304
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ecc8;
void FUN_00381304(int param_1,uint param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = (*(byte *)(*(int *)(param_1 + 4) + 4) & 0x7f) - 1;
  *(uint *)(in_ECX + 0x14) = uVar2;
  if (3 < (int)uVar2) {
    *(undefined4 *)(in_ECX + 0x14) = 0x20;
    return;
  }
  *(uint *)(in_ECX + 0x14) = uVar2 ^ 2;
  if (**(char **)(param_1 + param_2 * 4) == '\x01') {
    if (param_2 == 1) {
      return;
    }
    if ((DAT_0037ecc8 != '\0') && (param_2 == 2)) {
      return;
    }
  }
  else {
    if (param_2 < 2) {
      return;
    }
    uVar1 = (*(byte *)(*(int *)(param_1 + 8) + 4) & 0x7f) - 1;
    if (uVar1 < 4) {
      if (uVar1 != 2) {
        return;
      }
      *(uint *)(in_ECX + 0x14) = (uVar2 ^ 2) + 0x10;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x14) = 0x20;
  return;
}

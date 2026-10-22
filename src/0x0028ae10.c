/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F877D1A842F7C18845825037AFB086F30548521C0B517D1C2F34F08837F64B5
 * Entry: 0x0028ae10, Ghidra index: 9175, label: FUN_0028ae10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028ae10(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *in_ECX;
  
  puVar3 = DAT_00469888;
  uVar2 = *in_ECX;
  if (uVar2 == 0xfffffff9) {
    uVar2 = *(uint *)(in_ECX[2] + 0x10);
  }
  else if (uVar2 == 0xfffffffd) {
    uVar2 = *(uint *)(in_ECX[2] + 0x14);
  }
  else if (uVar2 == 0) {
    uVar2 = *(uint *)(in_ECX[2] + 0x10) & (-1 < (int)*(uint *)(in_ECX[2] + 0x10)) - 1;
  }
  if (*(int *)(DAT_00469888[0x19] + uVar2 * -0x120 + 0x100) != -6) {
    puVar1 = (uint *)*DAT_00469888;
    *puVar1 = *in_ECX;
    puVar1[1] = in_ECX[1];
    puVar1[2] = in_ECX[2];
    puVar1[3] = in_ECX[3];
    if (puVar3[2] <= *puVar3) {
      FUN_0028a460();
      puVar3 = DAT_00469888;
    }
    *puVar3 = *puVar3 + 0x10;
    FUN_0028a840(0);
  }
  return;
}

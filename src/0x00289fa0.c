/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A44A1A2B03D7A47ACAC718AE813AB3C716D8EE37B130F0DDB929A1B6B44B3FF6
 * Entry: 0x00289fa0, Ghidra index: 9152, label: FUN_00289fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
int FUN_00289fa0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_EAX;
  uint *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  puVar3 = DAT_00469888;
  if (in_EAX < *(int *)(in_ECX + 0xc)) {
    puVar4 = (undefined4 *)(in_EAX * 0x20 + *(int *)(in_ECX + 8));
    do {
      if (puVar4[4] != -6) {
        puVar1 = (undefined4 *)*DAT_00469888;
        *puVar1 = *puVar4;
        puVar1[1] = puVar4[1];
        puVar1[2] = puVar4[2];
        puVar1[3] = puVar4[3];
        if (puVar3[2] <= *puVar3) {
          FUN_0028a460();
          puVar3 = DAT_00469888;
        }
        uVar2 = *puVar3;
        *puVar3 = uVar2 + 0x10;
        *(undefined4 *)(uVar2 + 0x10) = puVar4[4];
        *(undefined4 *)(uVar2 + 0x14) = puVar4[5];
        *(undefined4 *)(uVar2 + 0x18) = puVar4[6];
        *(undefined4 *)(uVar2 + 0x1c) = puVar4[7];
        if (puVar3[2] <= *puVar3) {
          FUN_0028a460();
          puVar3 = DAT_00469888;
        }
        *puVar3 = *puVar3 + 0x10;
        return in_EAX + 1;
      }
      in_EAX = in_EAX + 1;
      puVar4 = puVar4 + 8;
    } while (in_EAX < *(int *)(in_ECX + 0xc));
  }
  return 0;
}

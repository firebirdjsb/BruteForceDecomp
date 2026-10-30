/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE4312534CA7EB0F8D81DF342F8A5F0250EAA192DF4FC827CD25E683B7224E45
 * Entry: 0x002b2470, Ghidra index: 9747, label: FUN_002b2470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00402a38;
undefined4 FUN_002b2470(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_EAX;
  int iVar4;
  undefined4 uVar5;
  uint3 in_ECX;
  undefined4 *puVar6;
  int *unaff_ESI;
  undefined4 uStack_4;
  
  if (in_EAX[1] != 0) {
    do {
      if (*in_EAX == *(int *)(unaff_ESI[5] + 4)) {
        uVar5 = FUN_002b1f40(unaff_ESI,*in_EAX,in_EAX[1]);
        return uVar5;
      }
      piVar1 = in_EAX + 3;
      in_EAX = in_EAX + 2;
    } while (*piVar1 != 0);
  }
  if (DAT_00402a38 != 0) {
    iVar2 = *(int *)(unaff_ESI[5] + 4);
    puVar6 = &DAT_00402a38;
    iVar4 = DAT_00402a38;
    do {
      if (iVar4 == iVar2) {
        uVar5 = FUN_002b1f40(unaff_ESI,iVar2,iVar2);
        return uVar5;
      }
      iVar4 = puVar6[1];
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0);
  }
  uStack_4 = (uint)in_ECX;
  if (*(int *)(unaff_ESI[5] + 8) == 1) {
    (**(code **)(*(int *)unaff_ESI[2] + 0x1c))
              ((int *)unaff_ESI[2],*(undefined4 *)(unaff_ESI[5] + 4),(int)&uStack_4 + 3);
  }
  uVar3 = *(uint *)(unaff_ESI[5] + 4);
  if (uVar3 < 0xf3d52ee5) {
    if (((uVar3 != 0xf3d52ee4) && (uVar3 != 0xe2f60eeb)) && (uVar3 != 0xe8dc7f5e))
    goto LAB_002b24f9;
  }
  else if (uVar3 != 0xf52b8dd5) {
    if (uVar3 == 0xf54ef296) {
      return 0;
    }
    goto LAB_002b24f9;
  }
  if (bf_x86_word_load_byte(&uStack_4,3U) == '\0') {
    return 0;
  }
  *unaff_ESI = *unaff_ESI + 1;
LAB_002b24f9:
  *unaff_ESI = *unaff_ESI + 1;
  return 0;
}

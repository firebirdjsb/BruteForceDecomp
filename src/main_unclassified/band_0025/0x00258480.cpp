/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92E1BC50D309F2ED46786D5AF819253A1404B531F8DBB91BD612A63F56C8C2E9
 * Entry: 0x00258480, Ghidra index: 8468, label: FUN_00258480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00258480(uint32_t guest_argument_word)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_EAX;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  uint32_t guest_key_word; /* guest vtable writes 32-bit key into a local */
  undefined4 *local_c [2]; /* separate guest candidate/root node slots */
  
  (**(code **)(*in_EAX + 0x14))(in_EAX,&guest_key_word);
  puVar2 = *(undefined4 **)(unaff_ESI + 0x28);
  cVar1 = *(char *)((int)puVar2[1] + 0x15);
  puVar3 = puVar2;
  puVar7 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((uint)puVar7[3] < guest_key_word) {
      puVar4 = (undefined4 *)puVar7[2];
      puVar7 = puVar3;
    }
    else {
      puVar4 = (undefined4 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x15);
  }
  /* MOV [ESP+0x0c],EDX preserves the candidate node. The conditional
   * MOV [ESP+0x10],ECX preserves the root/sentinel in another DWORD. */
  local_c[0] = puVar3;
  if ((puVar3 == puVar2) || (guest_key_word < (uint)puVar3[3])) {
    local_c[1] = puVar2;
    ppuVar5 = &local_c[1];
  }
  else {
    ppuVar5 = &local_c[0];
  }
  if (*ppuVar5 != *(undefined4 **)(unaff_ESI + 0x28)) {
    /* MOVZX EAX,WORD [EAX+0x10], OR AX,[ESP+0x10], followed by
     * MOV [ESP+0x10],EAX addresses the single incoming guest argument. */
    guest_argument_word = (uint32_t)((uint16_t)*(ushort *)(*ppuVar5 + 4) |
                                      (uint16_t)guest_argument_word);
    uVar6 = FUN_00281b40();
    return uVar6;
  }
  return 0x80004005;
}

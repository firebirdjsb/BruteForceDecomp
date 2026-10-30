/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 012249C4227AFCB9639257C840E6E6EE48747FF321B6ADFBCD8D71F10F60989A
 * Entry: 0x000f2010, Ghidra index: 3015, label: FUN_000f2010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f2010(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 saved_ecx_word;
  
  switch(*(undefined4 *)(*(int *)(param_1 + 4) + 0x60)) {
  case 0x11:
    uVar7 = 0;
    break;
  case 0x12:
    uVar7 = 1;
    break;
  case 0x13:
    uVar7 = 2;
    break;
  case 0x14:
    uVar7 = 3;
    break;
  default:
    uVar7 = 4;
  }
  piVar1 = *(int **)(DAT_00469b58 + 8);
  uVar3 = 0xffffffff;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar2 = FUN_002e5880();
    if (cVar2 == '\0') {
      iVar4 = FUN_002e5bf0(0);
      uVar3 = *(undefined4 *)(iVar4 + 0x2c);
    }
    else {
      uVar3 = 0;
    }
  }
  uVar7 = (**(code **)(*piVar1 + 0x11c))(uVar7,uVar3);
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(uVar7);
  /* Original XBE 0x000f20a9 MOV EAX,[EAX+0x14] and 0x000f20b2
   * MOV [ESP+0x10],EAX place the object's 32-bit word into the
   * saved-ECX slot (five register pushes); 0x000f20bb LEA
   * EAX,[ESP+0x10] passes its address to virtual slot +0x108. */
  if ((iVar4 != 0) &&
     (saved_ecx_word = *(undefined4 *)(iVar4 + 0x14),
      iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x108))(&saved_ecx_word),
      iVar4 != 0)) {
    iVar4 = iVar4 + 8;
    iVar6 = 4;
    do {
      iVar5 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x10c))(iVar4);
      if (iVar5 != 0) {
        iVar5 = iVar5 + 0x24;
        FUN_001e97c0(iVar5);
        FUN_0010c660(iVar5);
      }
      iVar4 = iVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return 1;
  }
  return 0;
}

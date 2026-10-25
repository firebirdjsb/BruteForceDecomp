/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF6D003D928DE65FDE56B9138C3A5CDE5961EAA0A9F29EAF6A6FFA227C0C67A8
 * Entry: 0x001f8c90, Ghidra index: 7071, label: FUN_001f8c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* Original byte stores reuse the incoming argument slot; saved pointers stay
 * intact. Only lane 0 is replaced/read. Implicit helper register inputs and
 * the complete guest stack/native ABI remain ABI_UNVERIFIED. */
char FUN_001f8c90(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_34;
  undefined1 auStack_30 [48];
  
  puVar7 = param_3;
  piVar2 = param_2;
  uVar6 = param_1;
  cVar3 = FUN_001fedb0(param_1,param_2,param_3);
  bf_x86_word_store_byte(&param_2,0U,cVar3);
  if (cVar3 == '\0') {
    uVar5 = *(undefined1 *)(in_ECX + 0xf4);
    bf_x86_word_store_byte(&param_2,0U,0);
    bVar1 = false;
    if (*piVar2 == -0x1da26a1d) {
      if ((char)uVar6 == '\0') {
        uVar5 = *(undefined1 *)puVar7;
      }
      else {
        *(undefined1 *)puVar7 = uVar5;
      }
      bVar1 = true;
      bf_x86_word_store_byte(&param_2,0U,1);
    }
    *(undefined1 *)(in_ECX + 0xf4) = uVar5;
    if ((!bVar1) && (*piVar2 == -0x1854e275)) {
      iVar4 = (**(code **)(*(int *)(in_ECX + 8) + 0x10))();
      FUN_0003d6c0(auStack_30,iVar4,iVar4 + 0x24);
      uStack_34 = 0xe7ab1d8b;
      cVar3 = FUN_0006eb80(param_1,&uStack_34);
      uVar6 = param_1;
      puVar7 = param_3;
      if ((cVar3 != '\0') && ((char)bf_x86_word_load_byte(&param_2,0U) == '\x01')) {
        (**(code **)(*(int *)(in_ECX + 8) + 0x14))(auStack_30);
        uVar6 = param_1;
        puVar7 = param_3;
      }
    }
    param_1 = 0xe1e59a9b;
    FUN_001faf20(uVar6,&param_1,piVar2,&param_2);
    if (((char)bf_x86_word_load_byte(&param_2,0U) == '\0') && (*piVar2 == 0x51ac63e)) {
      if ((char)uVar6 != '\0') {
        *puVar7 = *(undefined4 *)(in_ECX + 0x104);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x104) = *puVar7;
      bf_x86_word_store_byte(&param_2,0U,'\x01');
    }
  }
  return (char)bf_x86_word_load_byte(&param_2,0U);
}

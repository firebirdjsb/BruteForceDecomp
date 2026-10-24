/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CE834FCEA6F1C1499D280D930C83FE868C826E87245E8B0EB0A26F30F129A06
 * Entry: 0x00382132, Ghidra index: 13584, label: FUN_00382132
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412720;
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412754;
extern uint32_t DAT_00412770;
extern uint32_t DAT_00412798;
extern uint32_t DAT_0041279c;
extern uint32_t DAT_004127a0;
void FUN_00382132(undefined1 param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int in_ECX;
  
  puVar4 = (undefined1 *)FUN_00380e8a();
  puVar3 = DAT_0041279c;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0xfe;
    puVar4[4] = param_1;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    FUN_00381260(puVar4);
    if (DAT_00412720 == '\0') {
      *puVar4 = 0xfd;
      DAT_00412722 = param_2;
      DAT_00412720 = '\x01';
      DAT_00412721 = 0;
      DAT_00412723 = 0x80;
      DAT_004127a0 = puVar4;
      puVar4[5] = 0;
      DAT_00412798 = 0;
      KeSetTimer(&DAT_00412770,0xfff0bdc0,0xffffffff,&DAT_00412754);
      puVar3 = DAT_0041279c;
    }
    else {
      puVar1 = (uint *)(puVar4 + 0x18);
      puVar4[5] = param_2;
      KeQuerySystemTime(puVar1);
      uVar2 = *puVar1;
      *puVar1 = (uint)((uintptr_t)0x000f4240U + *puVar1);
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(uint *)(puVar4 + 0x1c) = *(int *)(puVar4 + 0x1c) + (uint)(0xfff0bdbf < uVar2);
      puVar5 = DAT_0041279c;
      puVar3 = puVar4;
      if (DAT_0041279c != (undefined1 *)0x0) {
        for (; *(int *)(puVar5 + 0x10) != 0; puVar5 = *(undefined1 **)(puVar5 + 0x10)) {
        }
        *(undefined1 **)(puVar5 + 0x10) = puVar4;
        puVar3 = DAT_0041279c;
      }
    }
  }
  DAT_0041279c = puVar3;
  return;
}

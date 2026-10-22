/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F09D3F8877F6C7EEFECE814C0AB8C8D3D576A9D25CEF2138EC7F1042F477A5C
 * Entry: 0x00377cb0, Ghidra index: 13462, label: FUN_00377cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400100;
extern uint32_t DAT_00400108;
extern uint32_t DAT_00400708;
extern uint32_t PTR_DAT_00400700;
extern uint32_t PTR_DAT_00400704;
extern uint32_t PTR_DAT_00400720;
undefined4 FUN_00377cb0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  
  iVar1 = *in_ECX;
  *(undefined4 *)((int)&PTR_DAT_00400720 + iVar1) = 0;
  uVar3 = *(uint *)(&DAT_00400100 + iVar1);
  uVar2 = *(uint *)((int)&DAT_00400108 + iVar1);
  uVar4 = *(uint *)((int)&PTR_DAT_00400704 + iVar1) & 0x1ffc;
  if ((uVar3 & 0x1000) != 0) {
    *(undefined4 *)(&DAT_00400100 + iVar1) = 0x1000;
    do {
    } while (*(int *)((int)&PTR_DAT_00400700 + *in_ECX) != 0);
    FUN_003793f4(0);
    uVar3 = *(uint *)(&DAT_00400100 + iVar1);
    if (uVar3 == 0) goto LAB_00377d54;
  }
  *(uint *)(&DAT_00400100 + iVar1) = uVar3;
  if (((uVar2 != 0) && ((uVar3 & 0x100001) != 0)) && ((uVar2 & 0x40) == 0)) {
    if (uVar4 == 0x100) {
      FUN_00377f80(in_ECX,*(undefined4 *)(&DAT_00400708 + iVar1));
    }
    else {
      FUN_00378280(0,uVar2,uVar4,*(undefined4 *)(&DAT_00400708 + iVar1));
    }
  }
LAB_00377d54:
  *(undefined4 *)((int)&PTR_DAT_00400720 + iVar1) = 1;
  return *(undefined4 *)(&DAT_00400100 + iVar1);
}

/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBF9764713E358FA8D5A3C0EC36FF940998F7EAEEADA0705F11D494281DE5668
 * Entry: 0x0029b410, Ghidra index: 9424, label: FUN_0029b410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b93c8;
/* WARNING: Removing unreachable block (ram,0x0029b45a) */

void FUN_0029b410(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0029b3c0(param_1);
  while( true ) {
    puVar1 = &DAT_003b93c8;
    if (DAT_003b93c8 == 0) {
      return;
    }
    iVar3 = DAT_003b93c8;
    while (iVar3 != *(int *)(in_EAX + 4)) {
      iVar3 = puVar1[1];
      puVar1 = puVar1 + 1;
      if (iVar3 == 0) {
        return;
      }
    }
    if ((int)(puVar1 + -0xee4f2) >> 2 < 0) break;
    FUN_00299cd0();
    FUN_0029b010();
    FUN_0029af90();
    uVar2 = FUN_00296110();
    *(undefined4 *)(in_EAX + 4) = uVar2;
    FUN_0029b3c0(param_1);
    FUN_00299cd0();
  }
  return;
}

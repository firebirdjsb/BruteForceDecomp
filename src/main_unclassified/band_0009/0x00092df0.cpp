/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17A04C6BFC32CEA320D49471B503B231F200B7285EBABADBCF26904F54FC6B8E
 * Entry: 0x00092df0, Ghidra index: 1801, label: FUN_00092df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_00238080(undefined4 param_1,undefined4 *param_2);

extern char s_23_23_IRampSingle_0040e3ec[];
/* WARNING: Removing unreachable block (ram,0x00092e15) */

void FUN_00092df0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(in_EAX + 0x18);
  if (*(int *)(in_EAX + 0x18) == 0) {
    FUN_00238080(s_23_23_IRampSingle_0040e3ec,puVar1);
    (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,4);
    puVar2 = (undefined4 *)(in_EAX + 100);
    iVar3 = 6;
    do {
      (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,*puVar2,puVar2 + 6);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

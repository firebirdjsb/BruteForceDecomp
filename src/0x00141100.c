/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06CC3BD1425632EB6A86DE0C1EA66303A66A6DB14DB4E75A3FFDF73423BF1FCA
 * Entry: 0x00141100, Ghidra index: 4098, label: FUN_00141100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00141100(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int in_EDX;
  
  if (*in_EAX != DAT_0046d064) {
    puVar2 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_EDX + 0x20) != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)**(undefined4 **)(in_EDX + 0x20);
    }
    for (; puVar2 != *(undefined4 **)(in_EDX + 0x20); puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] == *in_EAX) {
        return;
      }
    }
    if (*(int *)(in_EDX + 0x24) == 0) {
      FUN_00140f80(in_EDX,10);
    }
    iVar1 = *(int *)(in_EDX + 0x20);
    iVar3 = FUN_00141e60(in_EDX + 0x1c,iVar1,*(undefined4 *)(iVar1 + 4));
    FUN_000389d0();
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return;
}

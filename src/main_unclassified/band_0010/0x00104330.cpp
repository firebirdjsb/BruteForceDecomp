/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B5EBA1C3CB5F32571815DE8D905AFB05702B49A2D7B14107986A5724CCFC25C
 * Entry: 0x00104330, Ghidra index: 3315, label: FUN_00104330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c060c;
extern uint32_t DAT_003c0630;
extern uint32_t DAT_0046d064;
void FUN_00104330(void)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int in_EAX;
  
  bVar3 = *(byte *)(in_EAX + 0x114);
  bVar3 = (~(bVar3 >> 2) << 2 ^ bVar3) & 4 ^ bVar3;
  *(byte *)(in_EAX + 0x114) = bVar3;
  iVar1 = *(int *)(in_EAX + 300);
  if ((bVar3 & 4) == 0) {
    *(undefined **)(in_EAX + 0x130) = &DAT_003c0630;
    if (iVar1 != 0) {
      FUN_0010ce80(iVar1);
    }
    piVar2 = *(int **)(in_EAX + 0x128);
    if (piVar2 != (int *)0x0) {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (piVar2[9] == DAT_0046d064) {
        piVar2[9] = -0x13972c2f;
        (**(code **)(*piVar2 + 0x2c))();
      }
    }
  }
  else {
    *(undefined **)(in_EAX + 0x130) = &DAT_003c060c;
    if (iVar1 != 0) {
      FUN_0010ce80(iVar1);
    }
    piVar2 = *(int **)(in_EAX + 0x128);
    if (piVar2 != (int *)0x0) {
      FUN_001e97c0();
      FUN_0010a7d0();
      if (piVar2[9] == DAT_0046d064) {
        piVar2[9] = -0x32022a2;
        (**(code **)(*piVar2 + 0x2c))();
        return;
      }
    }
  }
  return;
}

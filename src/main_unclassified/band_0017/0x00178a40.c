/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59E69D54F7BD473F435557F53847BFC82EEFE94B8B3A6F205F53B4DF2B77D79B
 * Entry: 0x00178a40, Ghidra index: 4973, label: FUN_00178a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00178a40(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  float unaff_ESI;
  float10 fVar6;
  
  if (((*(int *)(in_EAX + 4) != 0) && (*(int **)(in_EAX + 0x10) != (int *)0x0)) &&
     ((*(byte *)(in_EAX + 0x14) & 1) != 0)) {
    iVar5 = (**(code **)(**(int **)(in_EAX + 0x10) + 0x40))();
    piVar3 = DAT_00469940;
    fVar6 = (float10)FUN_0017e5e0(DAT_00469940,iVar5 + 0x24);
    fVar1 = (float)fVar6;
    fVar2 = *(float *)(*(int *)(in_EAX + 4) + 0xc);
    if (*(int *)(in_EAX + 8) == 0) {
      if (fVar1 < fVar2 != (fVar1 == fVar2)) {
        FUN_00178950();
        return;
      }
    }
    else {
      cVar4 = (**(code **)(*piVar3 + 0x2c))(*(int *)(in_EAX + 8));
      if ((cVar4 != '\0') && (fVar1 < unaff_ESI)) {
        (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(in_EAX + 8),1);
        *(undefined4 *)(in_EAX + 8) = 0;
      }
    }
  }
  return;
}

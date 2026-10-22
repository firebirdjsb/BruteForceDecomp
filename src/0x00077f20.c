/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCA1F5A1205C0ECD475D3F8A8B597E907905F9815795660300D13036A51125A3
 * Entry: 0x00077f20, Ghidra index: 1418, label: FUN_00077f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
int * FUN_00077f20(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  undefined4 unaff_ESI;
  int *piStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  int local_4;
  
  local_4 = *in_EAX;
  uStack_18 = 0;
  puStack_1c = &local_8;
  piStack_20 = (int *)0x1;
  piStack_24 = &local_4;
  local_8 = 0;
  iVar2 = (**(code **)(*DAT_004432fc + 0x24))(DAT_004432fc,1);
  if (-1 < iVar2) {
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))(piStack_24);
      piStack_24 = (int *)0x0;
    }
    (**(code **)(*DAT_004432fc + 0x20))(DAT_004432fc,1,unaff_ESI,&piStack_24,piStack_20);
  }
  piVar1 = piStack_24;
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 8))(piStack_24);
    piStack_24 = (int *)0x0;
  }
  if (piStack_20 != (int *)0x0) {
    (**(code **)(*piStack_20 + 8))(piStack_20);
  }
  return piVar1;
}

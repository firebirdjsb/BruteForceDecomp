/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2839684D03F5587C2B670A04A9616FFC27D02AF26ED8019C43ED8A965390BA6
 * Entry: 0x00181680, Ghidra index: 5159, label: FUN_00181680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
void FUN_00181680(void)

{
  undefined4 uVar1;
  int *unaff_ESI;
  undefined1 local_18 [8];
  undefined1 auStack_10 [4];
  undefined1 local_c [12];
  
  uVar1 = DAT_00469940;
  FUN_0017e200(DAT_00469940,local_18,1);
  FUN_0017e200(uVar1,local_c,0);
  (**(code **)(*unaff_ESI + 0xc))(local_18);
  (**(code **)(*unaff_ESI + 0x10))(auStack_10);
  return;
}

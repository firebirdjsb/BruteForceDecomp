/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AC3748930FCACD404484222E68CB530FBEFDCB4ADE94535961D071F39BA7598
 * Entry: 0x002700d0, Ghidra index: 8781, label: FUN_002700d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
void FUN_002700d0(undefined4 param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *unaff_ESI;
  undefined4 local_4;
  
  unaff_ESI[2] = in_EAX;
  *unaff_ESI = 0;
  unaff_ESI[3] = 0;
  iVar2 = thunk_FUN_002ea01d(in_EAX + 1);
  unaff_ESI[1] = iVar2;
  piVar1 = (int *)*unaff_ESI;
  local_4 = 0xe0c43d05;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *unaff_ESI = 0;
  }
  (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8,param_1,0x40000001,&local_4);
  return;
}

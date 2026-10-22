/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20BAAC6088ADA1DEC0A7B02B7D6461515E99ED1EE4AB29B244E0DD02116B2B52
 * Entry: 0x00219f30, Ghidra index: 7506, label: FUN_00219f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469868;
extern char s_23_23_IFxNode_00402b90[];
/* WARNING: Removing unreachable block (ram,0x00219f57) */

undefined4 FUN_00219f30(void)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_ESI;
  int *piVar2;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(in_EAX + 0x78) == 0) {
    local_4 = 0x155010d6;
    local_8 = 8;
    iVar1 = FUN_00238080(s_23_23_IFxNode_00402b90,(undefined4 *)(in_EAX + 0x78));
    if (iVar1 != 0) {
      return 0x80004005;
    }
    uStack_c = 0;
    (**(code **)(*DAT_00469868 + 0x5c))(DAT_00469868,&uStack_c);
    piVar2 = *(int **)(in_EAX + 0x78);
    (**(code **)(*DAT_00469868 + 0x48))(DAT_00469868,unaff_ESI);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return 0;
}

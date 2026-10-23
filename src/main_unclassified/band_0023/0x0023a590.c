/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1178DE0F82E509C33F404C88A0C3816AED5FAD5542749EBE9B89DF3BE57618E5
 * Entry: 0x0023a590, Ghidra index: 7901, label: FUN_0023a590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IDAXProperty_0040c4f8[];
extern char s_23_23_IDatabaseEventReference_0040632c[];
/* WARNING: Removing unreachable block (ram,0x0023a6f7) */
/* WARNING: Removing unreachable block (ram,0x0023a65f) */
/* WARNING: Removing unreachable block (ram,0x0023a688) */
/* WARNING: Removing unreachable block (ram,0x0023a699) */
/* WARNING: Removing unreachable block (ram,0x0023a6a3) */
/* WARNING: Removing unreachable block (ram,0x0023a6ab) */
/* WARNING: Removing unreachable block (ram,0x0023a6b5) */
/* WARNING: Removing unreachable block (ram,0x0023a6cf) */
/* WARNING: Removing unreachable block (ram,0x0023a72d) */
/* WARNING: Removing unreachable block (ram,0x0023a739) */
/* WARNING: Removing unreachable block (ram,0x0023a741) */
/* WARNING: Removing unreachable block (ram,0x0023a752) */
/* WARNING: Removing unreachable block (ram,0x0023a75c) */
/* WARNING: Removing unreachable block (ram,0x0023a764) */
/* WARNING: Removing unreachable block (ram,0x0023a6bd) */
/* WARNING: Removing unreachable block (ram,0x0023a6c3) */

int FUN_0023a590(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  char *pcVar3;
  int *local_18 [3];
  int iStack_c;
  int *local_8;
  undefined4 local_4;
  
  local_18[0] = (int *)0x0;
  local_8 = (int *)0x8;
  local_4 = 0x1b9db5ed;
  iVar1 = FUN_00238080(s_23_23_IDatabaseEventReference_0040632c);
  if (iVar1 < 0) {
    if (local_18[0] != (int *)0x0) {
      (**(code **)(*local_18[0] + 8))();
    }
    return iVar1;
  }
  pcVar3 = s_23_23_IDAXProperty_0040c4f8;
  iVar1 = (**(code **)*unaff_EBX)();
  if (-1 < iVar1) {
    piVar2 = (int *)(**(code **)(*unaff_EDI + 0xc))(unaff_EDI,local_18);
    if ((*piVar2 != iStack_c) ||
       (iVar1 = (**(code **)(*(int *)pcVar3 + 0x18))(pcVar3,local_4,1), iVar1 < 0)) {
      if ((int *)pcVar3 != (int *)0x0) {
        (**(code **)(*(int *)pcVar3 + 8))(pcVar3);
      }
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      return 0;
    }
    (**(code **)(*local_8 + 0x1c))(local_8,&stack0xffffffd0);
    FUN_00076fc0();
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return -0x7fffbffb;
}

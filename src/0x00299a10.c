/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9C2A24568B0552A0D8CBBC15C2452937AD27A86AB5D632BAC89F29CA5BBA537
 * Entry: 0x00299a10, Ghidra index: 9386, label: FUN_00299a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_upvalues_00404064[];
int FUN_00299a10(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(in_EAX + 8);
  FUN_00299900();
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x18)) {
    piVar2 = (int *)(iVar1 + 0x28);
    do {
      if ((piVar2[-1] == local_c) && (*piVar2 == local_8)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < *(int *)(iVar1 + 0x18));
  }
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  FUN_00299250(s_upvalues_00404064);
  *(int *)(iVar1 + 0x24 + iVar3 * 8) = local_c;
  *(int *)(iVar1 + 0x28 + iVar3 * 8) = local_8;
  return iVar3;
}

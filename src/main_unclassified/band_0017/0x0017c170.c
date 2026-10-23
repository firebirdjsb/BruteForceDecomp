/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F59CA47DA8EA9E44D6D70553F95C462D577B85594DB866672077F225DB751165
 * Entry: 0x0017c170, Ghidra index: 5041, label: FUN_0017c170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
int FUN_0017c170(void)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0017beb0(in_EAX);
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*DAT_00469940 + 0x1c))(iVar1 + 4,*(int *)(iVar1 + 8) != -0x40800000);
    if (iVar2 != 0) {
      (**(code **)(*DAT_00469940 + 0x4c))(iVar2,*(undefined4 *)(iVar1 + 0x18));
      (**(code **)(*DAT_00469940 + 0x34))(iVar2,*(undefined4 *)(iVar1 + 0x10));
    }
    return iVar2;
  }
  return 0;
}
